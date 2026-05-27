#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    // int count=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // if(arr[i]==1){
        //     count+=1;
        // }
      
    }
     int var=count(arr.begin(),arr.end(),1);
    arr.erase(arr.begin()+var);
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}
