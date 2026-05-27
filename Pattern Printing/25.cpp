#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int res=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)cout<<" ";
        for(int s=1;s<=i;s++)cout<<s;
        for(int k=1;k<i;k++)cout<<k; 
    cout<<endl;
    }
}
// Input....4
//    1
//   121
//  12312
// 1234123