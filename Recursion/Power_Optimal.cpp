#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==1){
        return a;
    }
    if(b%2==0){
        int x=pow(a,b/2);
        return x*x;
        }
        else{
            int x=pow(a,b/2);
            return x*x*a;
        }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}

