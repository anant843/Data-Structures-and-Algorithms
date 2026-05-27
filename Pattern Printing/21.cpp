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
        cout<<"*";
        stars--;
    }
    cout<<endl;
     i=i+1;
}
return 0;
    }
// Input....4
// ****
//  ***
//   **
//    *
     
