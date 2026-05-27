#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ans="";
    if(n==0) ans="0";
    while(n!=0){
        ans=to_string(n%7)+ans;
        n=n/7;
    }
    cout<<"Base7: " <<ans<<endl;

}