#include<bits/stdc++.h>
using namespace std;

// Two pass algorithm
 void sortColors(vector<int>& nums) {
        int zeroCount=0,oneCount=0,twoCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroCount++;
            }
            else if(nums[i]==1){
                oneCount++;
            }
            else{
                twoCount++;
            }
        }
        int i=0;
        while(zeroCount>0){
            nums[i]=0;
            i++;
            zeroCount--;
        }
        while(oneCount>0){
             nums[i]=1;
              i++;
            oneCount--;
        }
        while(twoCount>0){
             nums[i]=2;
               i++;
            twoCount--;
        }
    }

    //One pass algorithm
    void sortColors1(vector<int>& nums) {
    int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
    int main(){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sortColors1(vec);
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
    }

    // Input...
    // 6
    // 2 0 2 1 1 0
    // Output...
    // 0 0 1 1 2 2 