#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<string> s(n);
  
   for(int i=0;i<n;i++){
    cin>>s[i];
   }

   for(int i=0;i<n/2;i++){
       int l=s[n-1-i].length();
      string p1=s[i].substr(0,i+1);
      string p2=s[n-1-i].substr(l-1-i);
      cout<<p1+p2<<" ";
   }
  
   
}
// Input.....
// 6
// alpha kumar polio virus hello gamma 
// Output...
// aa kulo polrus 