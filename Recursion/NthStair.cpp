#include<bits/stdc++.h>
using namespace std;
int stair(int n){
    if( n==3 || n==2 || n==1){
        return n;
    }
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<stair(n);
}

// Input...
// 4
// Output...
// 6