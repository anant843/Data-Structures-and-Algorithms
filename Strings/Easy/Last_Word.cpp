#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=0;
    bool flag=false;
    
    for(int i=s.length()-1;i>=0;i--){
       if(s[i]==' '){
           flag=true;
           break;
       }
       else{
           count++;
       }
    }
    cout<<count;

}

// Input....
// I love programming
// Output....
// 11
