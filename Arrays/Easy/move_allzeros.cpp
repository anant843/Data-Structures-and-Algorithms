// move all zeroes to the end
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int c=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
           arr[c]=arr[i];
           c++;
        }
    }
        while(c<n){
            arr[c]=0;
            c++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
// Input....
// 5
// 0 1 0 3 12
// 1 3 12 0 0 