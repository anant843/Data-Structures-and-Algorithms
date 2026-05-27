#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int n;
    getline(cin,s1);
    getline(cin,s2);
    cin>>n;
    for(int i=0;i<s1.size();i++){
         if((i+1)%n!=0){
            cout<<s2;
         }
         cout<<s1[i];
    }
  
}
// Input......
// quick fox
// #
// 2