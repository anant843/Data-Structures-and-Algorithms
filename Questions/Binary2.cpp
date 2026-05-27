#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ans="";
    if(n==0) ans="0";
    while(n!=0){
        ans=to_string(n%2)+ans;
        n=n/2;
    }
    cout<<"Binary: "<<ans<<endl;

}