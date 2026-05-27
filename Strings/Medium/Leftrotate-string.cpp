#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
   cin>>n>>k;
  string s;
  cin.ignore();
  getline(cin,s);
  string p1=s.substr(3)+s.substr(0,k);
  cout<<p1;
}
// Input...
//  12 3
// abcdefghijkl
// defghijklabc