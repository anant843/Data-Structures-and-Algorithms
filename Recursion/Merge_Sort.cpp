#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int* first=new int[len1];
    int* second=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    //Merge two sorted arrays
    int idx1=0,idx2=0;

    k=s;

    while(idx1<len1 && idx2<len2){
        if(first[idx1]<second[idx2]){
            arr[k++]=first[idx1++];
        }
        else{
           arr[k++]=second[idx2++];
        }
    }

    while(idx1<len1){
         arr[k++]=first[idx1++];
    }

    while(idx2<len2){
         arr[k++]=second[idx2++];
    }
}
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // Sort Left Side
    mergeSort(arr, s, mid);

    // Sort Right Side
    mergeSort(arr, mid + 1, e);

    // Merge 
    merge(arr, s, e);
}
int main()
{
    int arr[5] = {9, 8, 7, 6, 5};
    int n = 5;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}