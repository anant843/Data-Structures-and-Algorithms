#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;
  string s;
  cin.ignore();
  getline(cin,s);
  int r=n-(k*2);
  s=s.substr(k,r);
  cout<<s;
}
// 11 3
// abcdefghijk 
// defgh