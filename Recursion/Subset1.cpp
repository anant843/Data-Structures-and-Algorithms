#include<bits/stdc++.h>
using namespace std;
void solve(string s,string ans,set<string>&st){
    if(s.length()==0){
        st.insert(ans);
        return;
    }
    string ans1=ans;
    string ans2=ans;
    ans2.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s,ans1,st);
    solve(s,ans2,st);
    return ;

}
int main(){
    string s;
    cin>>s;
    string ans="";
    set<string>st;
    solve(s,ans,st);
    for(auto x:st){
        cout<<x<<" ";
    }
}

// Input...
// aa
// Output...
// aa a
// Explanation...
// The code generates all possible subsets of the input string "abc".Store the subsets in a set to avoid duplicates and then print them in sorted order. 