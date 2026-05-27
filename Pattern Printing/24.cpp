#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;

    for( i=1;i<=n;i++){
         for(int j=1;j<=i-1;j++)cout<<" ";
        for(int s=1;s<=n-i+1;s++)cout<<s;
      
     cout<<endl;        
    }
}
// Input....4
// 1234
//  123
//   12
//    1