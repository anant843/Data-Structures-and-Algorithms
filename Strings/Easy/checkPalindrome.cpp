// Given a string check palindrome or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1=s;
    reverse(s1.begin(),s.end());
    if(s1==s){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
}
// Input....
// 10
// quickquick
// false