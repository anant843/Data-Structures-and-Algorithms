#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k;
    cin>>m>>n>>k;

        vector<vector<int>> arr(m,vector<int>(n));
        for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=m/2;i++){
        for(int j=0;j<n-1;j++){
            for(int s=0;s<k;s++){
                swap(arr[i][n-k+s],arr[m-i-1][j+s]);
            }
            break;
        }
    }
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
