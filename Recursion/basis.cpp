#include<bits/stdc++.h>
using namespace std;
void gm(int n){
 if(n==0){
    return;
 }
 cout<<"Good Morning"<<endl;
 gm(n-1);
}
int main(){
    gm(10);
}