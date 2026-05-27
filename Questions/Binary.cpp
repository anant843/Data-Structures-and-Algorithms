// #include<iostream>
// using namespace std;
// #include<math.h>

// int main(){
// int n;
// cin>>n;
// int ans=0;
// int i=1;
// while(n!=0){
//     int bit=n&1;
//     ans=(bit*pow(10,i)+ans);
//     n=n>>1;
//     i++;
// }
// cout<<"Answer is "<<ans<<endl;
// }
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int p = 1;

    while(n != 0) {
        int bit = n & 1;
        ans = bit * p + ans;
        n = n >> 1;
        p *= 10;
    }

    cout << "Answer is " << ans << endl;
    return 0;
}
