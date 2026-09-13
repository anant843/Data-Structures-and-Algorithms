/*
Problem: Best Time to Buy and Sell Stock

Input:
prices = [7,1,5,3,6,4]

Output:
5

Explanation:
Buy at price 1 and sell at price 6.
Profit = 6 - 1 = 5

Approach:
1. Keep track of minimum price seen so far.
2. For each day, calculate profit if sold today.
3. Update maximum profit.
4. Update minimum price if a smaller value is found.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int mini = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < n; i++) {
            int profit = prices[i] - mini;

            maxProfit = max(maxProfit, profit);

            mini = min(mini, prices[i]);
        }

        return maxProfit;
    }
};