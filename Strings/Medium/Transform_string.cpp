#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    string res="";
    string p="";
    cin>>s;
    for(auto ch:s){ 
        if(isalpha(ch)){
        res+=tolower(ch);
        }
    else if(isdigit(ch)){
        res=res+ch;
    }
   else{
     p=p+ch;
   }  
}
res=res+p;
cout<<res<<endl;
}
// Input....
// 12
// AB123abc@##1
// ab123abc1@##