#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++)cout<<j<<" ";
        for(int s=1;s<=i-1;s++)cout<<"*"<<" ";
        for(int k=1;k<=i-1;k++)cout<<"*"<<" ";
        for(int m=1;m<=n-i+1;m++)cout<<n-m-i+2<<" ";
        cout<<endl;

    }
}
// Input......5
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1 