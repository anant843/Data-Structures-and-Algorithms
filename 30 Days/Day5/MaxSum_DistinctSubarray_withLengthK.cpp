#include<bits/stdc++.h>
using namespace std;

//Brute FOrce with time complexity of O(nk)
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long ans = 0;

        for (int i = 0; i <= nums.size() - k; i++) {

            unordered_map<int, int> mp;
            long long sum = 0;

            for (int j = i; j < i + k; j++) {
                mp[nums[j]]++;
                sum += nums[j];
            }

            if (mp.size() == k)
                ans = max(ans, sum);
        }

        return ans;
    }
};


// Optimal solution with Time complexity of O(n)
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long sum = 0,maxA= 0;
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            mp[nums[r]]++;
            sum += nums[r];

            if (r-l+1 > k) { 
                mp[nums[l]]--;
                sum -= nums[l];
                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
            }
            if (r - l + 1 == k && mp.size() == k) {
                maxA = max(maxA, sum);
            }
        }
        return maxA;
    }
};