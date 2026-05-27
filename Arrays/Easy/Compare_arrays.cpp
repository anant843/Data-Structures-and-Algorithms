#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
        vector<int>vec;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>m;
        int arr1[m];
        for(int i=0;i<m;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
            if(arr1[i]<arr[j]){
                count+=1;
            }
         } 
      
         vec.push_back(count);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i];
    }
}