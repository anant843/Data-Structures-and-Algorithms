#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]=x*x;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
// Input....
// 5
// 12 13 1 2 5
// Output....
// 1 1
// 2 4
// 5 25
// 12 144
// 13 169