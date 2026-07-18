#include<bits/stdc++.h>
using namespace std;

//Brute Force with time complexity of o(nk)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<=nums.size()-k;i++){
            int maxA=INT_MIN;
             for(int j=i;j<i+k;j++){
              maxA=max(maxA,nums[j]);  
             }
             ans.push_back(maxA);
             
        }
        return ans;
    }};

 //Optimal solution with time complexity of O(n)

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dq;

        for(int i=0;i<nums.size();i++){
            if(!dq.empty()&& dq.front()==i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};