//Leetcode 46
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>nums,vector<vector<int>> &ans,int i){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            solve(nums,ans,i+1);

            //backtrack
            swap(nums[i],nums[j]);// 
        }
    }

int main(){
    vector<int>nums={1,2,3};

    vector<vector<int>>ans;
    int i=0;
    solve(nums,ans,i);

   for (auto x : ans) {
    cout << "[";
    for (int i = 0; i < x.size(); i++) {
        cout << x[i];
        if (i != x.size() - 1) {
            cout << ",";
        }
    }
    cout << "]";
  }
}

//Output...
// [1,2,3][1,3,2][2,1,3][2,3,1][3,2,1][3,1,2]