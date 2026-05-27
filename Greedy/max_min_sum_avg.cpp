#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        int max=arr[0];
        int min=arr[0];
        for(int i=1;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
            if(min>arr[i]){
              min=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        float avg=sum/n;
        cout<<max<<" "<<min<<" "<<sum<<" "<<avg;
        
    }
    

}
    
