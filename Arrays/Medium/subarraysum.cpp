#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int negative=0;
    int positive=0;
    cin>>n;
   
    vector<int>vec;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      int cSum=arr[0];
      int msum=arr[0];
    for(int i=1;i<n;i++){
          cSum=max(arr[i],(cSum+arr[i]));
          msum=max(msum,cSum); 
        }
   
    cout<<msum;

}