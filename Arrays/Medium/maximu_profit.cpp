#include<bits/stdc++.h>
using namespace std;
int maximum_profit(int arr[],int n){
    vector<int>vec1;
    for(int i=0;i<n;i++){
        for( int j=i+1;j<n;j++){
           vec1.push_back(arr[j]-arr[i]);
        }
    }
    int maxVal = *max_element(vec1.begin(), vec1.end());
    cout<<maxVal;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 maximum_profit(arr,n);

}