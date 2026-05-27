#include<bits/stdc++.h>
using namespace std;
void toh(int n, char A, char B, char C){
    if(n==1){
        cout<<"Move disk 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    toh(n-1,A,C,B);
    cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
    toh(n-1,B,A,C);
}
int main(){
    int n;
    cin>>n;
    char A='A',B='B',C='C';
    toh(n,A,B,C);
}

// Input...
// 3
// Output...
// Move disk 1 from A to C
// Move disk 2 from A to B
// Move disk 1 from C to B
// Move disk 3 from A to C
// Move disk 1 from B to A
// Move disk 2 from B to C
// Move disk 1 from A to C