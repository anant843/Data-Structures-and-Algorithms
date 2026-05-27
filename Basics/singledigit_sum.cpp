#include<bits/stdc++.h>
using namespace std;
int main(){
//     int k;
//     int sum=0;
//     cin>>k;
//     string s;
//     cin>>s;
//     string res="";
//     for(int i=0;i<k;i++){
//        res+=s;
//     }
//     for(int i=0;i<res.size();i++){
//         sum+=res[i]-'0';
//     }
//     while(sum>10){
//         int temp=0;
//         while(sum>0){
//             temp+=sum%10;
//             sum/=10;
//         }
//       sum=temp;
//     }
//   cout<<sum;
int n,k;
cin>>n>>k;
int p1=n*k;
if(p1==0){
    cout<<0;
}
else{
    p1=p1%9;
    cout<<p1;
}
}
// Input...
// 4 9875
// 8