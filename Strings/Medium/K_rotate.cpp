#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int r=0;
    cin>>n;
    string s;
    string p="";
    cin>>s;
    
    for(auto ch:s){
        if(isdigit(ch)){
        r+=ch*ch;
        //  r+=(ch-'0')*(ch-'0');
         
        }
        else{
            p+=ch;
        }
    }
    cout<<r<<endl;
    if(r%2==0){
        string p1=p.substr((p.size()-r%p.size()))+p.substr(0,p.size()-r%p.size());
        cout<<p1<<endl;
    }
    else{
        string p1=p.substr(r%p.size())+p.substr(0,r%p.size());
        cout<<p1<<endl;
    }
 
}
// Input....
// 9
// 2ab3cd45e
// 54
// bcdea