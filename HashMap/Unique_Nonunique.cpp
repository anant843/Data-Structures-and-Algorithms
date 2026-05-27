#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>x;
        freq[x]++;
    }
    int u=0,nu=0;
    for(auto it:freq){
        if(it.second==1)
        u++;
        else 
        nu++;
    }
    int product=u*nu;
    cout<<product;
    return 0;
}
// Input...
// 5
// 1 2 3 4 5
// Output...
// 0
// Explanation: In the given input, all the numbers are unique, so there are no non-unique numbers. Therefore, the product of unique and non-unique numbers is 0.