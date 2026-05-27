#include<bits/stdc++.h>
using namespace std;
void solve(int k,int idx,int &ans,vector<int>&v){
 if(v.size()==1){
    ans=v[0];
    cout<<ans;
    return;
 }
int temp=(idx+k) % v.size();
v.erase(v.begin()+temp);
solve(k,temp,ans,v);

}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    k=k-1;
    int idx=0;
    int ans=-1;
    solve(k,idx,ans,v);
}

// Input...
// 40 7
// Output...
// 24