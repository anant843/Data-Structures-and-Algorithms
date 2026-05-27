#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,r;
    cin>>s>>r;
    
    for(int i=0;i<s.length();i++){
        if(r.find(s[i])==string::npos){ // npos meaning no position
             cout<<s[i];
        }
        // bool x = false;
        // for(int j=0;j<r.length();j++){
        //     if(s[i]==r[j]){
        //         // s.erase(s[i]);
        //         x = true;
        //         break;
        //     }
        // }
        // if(x==false){
        //     cout<<s[i];
        // }
    }
    
}
// Input....
// hello he
// llo