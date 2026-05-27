#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=n;i<k;i++){
        int num=i;
        int d=to_string(i).length();
        int sum=0;
        while(num>0){
            int t=num%10;
            // for(int i=0;i<d;i++){
            //     sum+=t*d;
            // }
            sum+=pow(t,d);
            num/=10;
        }
        if(sum==i){
            cout<<i<<" ";
        }
    }
    
}