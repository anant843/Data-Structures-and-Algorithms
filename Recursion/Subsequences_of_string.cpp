#include<bits/stdc++.h>
using namespace std;

void solve(string s,int idx,string s1,vector<string>&ans){

    //base case
    if(idx>=s.length()){ 
        if(s1.length()>0){// no need of empty string
        ans.push_back(s1);
    }
    return ;
}

    solve(s,idx+1,s1,ans);

    char ele=s[idx];
    s1.push_back(ele);
    solve(s,idx+1,s1,ans);

}
int main(){

    string s="abc";

    vector<string>ans;
    string s1="";
    int idx=0;
    
    solve(s,idx,s1,ans);

     for(auto y : ans){
        for(auto x : y){
            cout << x << " ";
        }
        cout<<endl;
    }

    return 0;
}

// Output...
// c 
// b 
// b c 
// a 
// a c 
// a b 
// a b c 