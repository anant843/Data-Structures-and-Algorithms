#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int s=j+1;s<n;s++){
              if(arr[i]+arr[j]+arr[s]==target){
                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[s]<<endl;
         }
              }
            }
        }
      return -1;  
    }
// #include <bits/stdc++.h> 
// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
//   vector<vector<int>>ans;
//    set<vector<int>> uniq;
// 	for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int s=j+1;s<n;s++){
//               if(arr[i]+arr[j]+arr[s]==K){
//                  vector<int>temp={arr[i],arr[j],arr[s]};
//                  uniq.insert(temp);
           
//                  }
//                }
//               }
//             }
//             for (auto &triplet : uniq) {
//         ans.push_back(triplet);
//     }
//             return ans;
//           }
   


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    set<vector<int>> uniq;  

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int s = j + 1; s < n; s++) {
                if (arr[i] + arr[j] + arr[s] == K) {
                    vector<int> temp = {arr[i], arr[j], arr[s]};
                    sort(temp.begin(), temp.end()); 
                    uniq.insert(temp);
                }
            }
        }
    }

    for (auto &triplet : uniq) {
        ans.push_back(triplet);
    }

    return ans;
}
