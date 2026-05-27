#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    cin>>n;
    for(int i=0; i<s.length(); ){
        int j=i, c=0;
        while(s[j]==s[i] && j<s.length()) j++;
        c=j-i;
        if(c>=n){
            cout<<s[i]<<c;
        }
        else{
            while(c--){
                cout<<s[i];
            }
            // for(int k=0; k<c; k++){
            //     cout<<s[i];
            // }
        }
         i=j;//skip same a iteration
    }
}