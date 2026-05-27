#include <bits/stdc++.h> 
using namespace std;

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int>ans;
//    for(int i=0;i<n;i++){
// 	   int element=arr1[i];
// 	   for(int j=0;j<m;j++){
// 		   if(element==arr2[j]){
//            ans.push_back(element);
// 		   arr2[j]=-115826;
// 		   break;
// 		   }
// 	   }
//    }
//    return ans;
// }
// int main(){
//     arr1=[5]
// }
int main(){

	int n;
	cin>>n;
	vector<int>arr(n);
	vector<int>arr1;
	for(int i=0;i<arr.size();i++){
		cin>>arr[i];
	}
        for(int i=0;i<arr.size();i++){
            int count=1;
            for(int j=1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            arr1.push_back(count);
        }
		for(int i=0;i<arr1.size();i++){
			cout<<arr1[i]<<" ";
		}
        
    }
