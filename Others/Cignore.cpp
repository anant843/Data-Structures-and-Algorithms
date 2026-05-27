// use of cin.ignore
#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
    string s;
    cin>>n;//absorb white space
    cin.ignore();
    getline(cin,s);//Stop when next line appear
    cout<<n<<endl;
    cout<<s;
}
// 3
// 3
// |
// 3
// abc bcd efg