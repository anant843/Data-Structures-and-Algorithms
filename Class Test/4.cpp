#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(char c:s){
     if(c%2!=0 && c!=' '){
        cout<<c<<" ";
     }
    }
  return 0;
}
// Input...
// quick brown fox
// Output...
// q u i c k o w o 