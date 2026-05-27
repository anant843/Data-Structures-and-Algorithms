#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of inputs:"<<endl;
    cin>>t;
    while(t--){
        int n;
      cout<<"Enter the size of array:"<<endl;
        cin>>n;
        int sum=0;
        int arr[n];
        cout<<"Enter the "<<n<<" elements of array:"<<endl;
    
        for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        sum+=arr[i];
        
      }
      cout<<"The sum of array is "<<sum<<endl;

    }
   
    }
