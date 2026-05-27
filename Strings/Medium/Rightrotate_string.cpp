#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  string s;
  cin>>n>>k;
  cin.ignore();
  getline(cin,s);
  string p1=s.substr(n-k)+s.substr(0,n-k);
  cout<<p1;
}
// Input.....
// 12 3
// abcdefghijkl
// jklabcdefghi