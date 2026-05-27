#include<bits/stdc++.h>
using namespace std;
bool isvowel(const string &s) {
    for(char c: s){
        c=tolower(c);
        if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    

    string s[n];
    bool x=false;
    for( int i=0; i < n; i++ ){
        cin >> s[i];
        if(!isvowel(s[i])){
            cout<<s[i];
            x=true;
        }
    }
    if(!x){
        cout<<-1;
    }
}
// Input...
// 3
// kite Aman Hii
// -1
