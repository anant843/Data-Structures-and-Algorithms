#include<bits/stdc++.h>
using namespace std;


//Time complexity O(n^3)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0;

                for (int k = i; k <=j; k++) {
                    sum += nums[k];
                }
                 maxi = max(sum, maxi);
            }
        }
     return maxi;
 }
};

// Time Complexity O(N^2)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += nums[j];
                maxi = max(maxi, sum);
            }
        }

        return maxi;
    }
};

// Time complexity O(N)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(maxi, sum);

            if(sum < 0)
                sum = 0;
        }

        return maxi;
    }
};