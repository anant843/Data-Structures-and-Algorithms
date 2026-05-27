#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
     int arr1[n];
    vector<int>result(arr.size()+arr1.size();)
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    merge(arr.begin(), arr.end(), arr1.begin(), arr1.end(), result.begin());
    for(int i=0;i<result.size();i++){
        result[n-1]+result[n];
        cout<<result[i];
    }
}
