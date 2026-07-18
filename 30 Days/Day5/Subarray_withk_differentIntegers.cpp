#include<bits/stdc++.h>
using namespace std;

//Brute force solution with Time complexity of O(n^2)
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            unordered_map<int, int> mp;

            for (int j = i; j < nums.size(); j++) {

                mp[nums[j]]++;

                if (mp.size() == k)
                    count++;

                if (mp.size() > k)
                    break;
            }
        }

        return count;
    }
};


//Optimal solution with Time complexity of O(4n)
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
     return atMost(nums,k)-atMost(nums,k-1);
    }
    int atMost(vector<int>&nums,int k){
        int count = 0;
        int l = 0;
        unordered_map<int, int> mp;

        for (int r = 0; r < nums.size(); r++) {

            mp[nums[r]]++;

            while (mp.size() > k) {
                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
            count += r - l + 1;
        }

        return count;
    }
};