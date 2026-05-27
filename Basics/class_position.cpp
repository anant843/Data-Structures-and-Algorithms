// print the position os student on the basis of marks if number is same skip the nest position
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
          if(i!=j && arr[i]<arr[j]){
            c++;
          } 
        }
        cout<<(c+1)<<" ";
    }

}
// Input.....
// 5
// 10 25 35 45 10
// 4 3 2 1 4 