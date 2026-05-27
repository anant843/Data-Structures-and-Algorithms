#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);

}
int main(){
    int n;
    cin>>n;
    if(n==0) return 0;
    stack<int>s;
    for(int i=1;i<=n;i++){
        s.push(i);
    }
    int k=(n/2)+1;
    solve(s,k);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

// Input...
// 5
// 1 2 3 4 5
// Output...
// 1 2 4 5