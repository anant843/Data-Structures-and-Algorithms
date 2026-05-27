// how much height placed in wrong position
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
   
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];  
    }
     sort(arr.begin(),arr.end());
         int c=0;
     for(int i=0;i<n;i++){
        if (arr[i]!=arr1[i]){
            c++;
        }
     }
     cout<<c;

}
// input....
5
5 4 2 3 1
5