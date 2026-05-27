#include<bits/stdc++.h>
using namespace std;
void solve(string s,string ans,vector<string>& v){
    if(s.length()==0){
        v.push_back(ans);
        return;
    }
    if(isalpha(s[0])){

    string ans1=ans;
    string ans2=ans;

    ans1.push_back(tolower(s[0]));
    ans2.push_back(toupper(s[0]));

    s.erase(s.begin()+0);

    solve(s,ans1,v);
    solve(s,ans2,v);
}
else{
    string ans1=ans;
    ans1.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s,ans1,v);
}
}
int main(){
    string s;
    cin>>s;

    vector<string>v;
    string ans=" ";

    solve(s,ans,v);

    for(auto x:v){
        cout<<x<<" ";
    }
}

// Input..
// a1b2
// Output..
// A1B2 A1b2 a1B2 a1b2

