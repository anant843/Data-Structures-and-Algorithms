#include<bits/stdc++.h>
using namespace std;
void solve(int O,int Z,int n,string ans,vector<string>&v){
    if(n==0){
        v.push_back(ans);
        return;
    }
    string ans1=ans;
    ans1.push_back('1');
    solve(O+1,Z,n-1,ans1,v);
    if(O>Z){
        string ans2=ans;
        ans2.push_back('0');
        solve(O,Z+1,n-1,ans2,v);
    }

}
int main(){
    vector<string>v;
    int n;
    cin>>n;
    int O=0;
    int Z=0;
    string ans="";
    solve(O,Z,n,ans,v);
    for(auto x:v){
        cout<<x<<" ";
    }
}

// Input..
// 3
// Output..
// 111 110 101 