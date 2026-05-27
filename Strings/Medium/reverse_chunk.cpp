// You are given a string(S) of length N, and an integer (K). Create a new string in the following fashion. Pick first K characters as it is. Followed by next K characters in reverse order. Followed by next K characters as it is. And so on. Use slicing. Do not use nested loops. You can assume that N is a multiple of 2K.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string res="";
    for(int i=0;i<n;i=i+2*k){
       res=res+s.substr(i,k);
       string p2=s.substr(i+k,k);
       reverse(p2.begin(),p2.end());
       res=res+p2;
    }
    cout<<res<<endl;
    return 0;
}
