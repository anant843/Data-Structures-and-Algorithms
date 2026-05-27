#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    
    while(i<=n){
        int j=1;
 
        while(j<=n){
            char ch='A'+i-1;
            cout<<ch<<" ";
    
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
// Input....4
// A A A A 
// B B B B
// C C C C
// D D D D 