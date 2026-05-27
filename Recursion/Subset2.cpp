#include<bits/stdc++.h>
using namespace std;
void solve(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return ;
    }
    string ans1=ans;
    string ans2=ans;
    ans1.push_back('_');
    ans1.push_back(s[0]);
    ans2.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s,ans1);
    solve(s,ans2);
    return ;

}
int main(){
    string s;
    cin>>s;
    string ans="";
    ans.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s,ans);

}

// Input..
// abc
// Output..
// a_b_c a_bc ab_c abc 