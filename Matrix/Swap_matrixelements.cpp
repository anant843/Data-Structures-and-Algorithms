#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m;
    cin>>n;
        vector<vector<int>> arr(m,vector<int>(n));
        for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            swap(arr[i][j],arr[i+1][j+1]);
        }
    }
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}