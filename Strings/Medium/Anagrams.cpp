#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,r;
    cin>>s>>r;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<r.length();j++){
            if(s[i]==r[j]){
                r.erase(j,1);
                break;
            }
        }
    }
    if(r.length()==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
// Input...
// Hello hello
// False
