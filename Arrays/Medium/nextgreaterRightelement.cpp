#include<bits/stdc++.h>
using namespace std;

void result(vector<int>&arr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int ans =0 ;
        for (int j=i+1;j<arr.size();j++){
            if(arr[i]<arr[j]){
                ans = arr[j];
                break;
            }

        }
        cout<<ans<<" ";
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    result(arr);
}
Input...5
4 2 6 4 5
6 6 0 5 0