#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
for(int i=0;i<k;i++){
    swap(arr[i],arr[i+3]);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

}
