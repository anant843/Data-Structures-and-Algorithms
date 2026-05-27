#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res="";
    string con="";
    for(int i=0;i<=s.length();i++){
        if((i+1)%4==0||(i+1)%6==0){
            con.push_back(s[i]);
        }
        else{
            res.push_back(s[i]);
        }
    }
    res+=con;
    cout<<res;
}
// Input......
// quickfoxjumps
// Output...
// quikojumscfxp