#include<bits/stdc++.h>
using namespace std;

int sumArray(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum=arr[0]+sumArray(arr+1,n-1);
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=sumArray(arr,n);
    cout<<sum;
}


//Input...
// 5
// 2 4 4 5 7
// Output...
// 22