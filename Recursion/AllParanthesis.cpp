#include<bits/stdc++.h>
using namespace std;
void solve(int op,int cl,string ans,vector<string>&v){
    if(op==0 && cl==0){
        v.push_back(ans);
        return;
    }
    if(op!=0){
        string ans1=ans;
        ans1.push_back('(');
        solve(op-1,cl,ans1,v);
    }
    if(cl>op){
        string ans2=ans;
        ans2.push_back(')');
        solve(op,cl-1,ans2,v);
    }
}
int main(){
    vector<string>v;
    int n;
    cin>>n;
    int op=n;
    int cl=n;
    string ans="";
    solve(op,cl,ans,v);
    for(auto x:v){
        cout<<x<<" ";
    }
}

// Input...
// 3
// Output...
// ((())) (()()) (())() ()(()) ()()()