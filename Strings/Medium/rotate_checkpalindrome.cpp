#include<bits/stdc++.h>
using namespace std;
int main(){
  int n1,n2,k;
  cin>>n1>>n2>>k;
   string s;
   cin>>s;
   string s1;
  cin>>s1;
  string p1=s.substr(n1-k)+s.substr(0,n1-k);
  string p2=s1.substr(k)+s1.substr(0,k);
  string res=p1+p2;
  cout<<res;
}
// Input...
// 5 4 3
// abcde     
// abcd
// cdeabdabc