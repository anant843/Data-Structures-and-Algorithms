#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    
    int space=i-1;
    while(space){
        cout<<" ";
        space--;
    }
    int stars=n-i+1;
    while(stars){
        int count=i;
        cout<<count;
       
        stars--;
    }
    cout<<endl;
     i=i+1;
}
return 0;
    }
//  Input.... 4
// 1111
//  222
//   33
//    4
     
