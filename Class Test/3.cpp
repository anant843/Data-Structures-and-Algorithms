#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    if(n<=100){
        sum=sum+n*5;
    }
    else if(n<=200){
 sum=sum+(100*5)+(n-100)*7;
    }
    else if(n<=300){
        sum=sum+(100*5)+(100*7)+(n-200)*10;
    }
    else if(n>300){
    sum=sum+(100*5)+(100*7)+(100*10)+(n-300)*12;
    }
    if(sum>3000){
        sum=sum+0.05*sum;
        cout<<sum;
    }
    cout<<sum;
}
// Input...
// 150
// Output...
// 850