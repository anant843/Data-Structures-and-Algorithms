#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Memoization Function
    int solve(int W, vector<int>& val, vector<int>& wt, int n, vector<vector<int>>& dp) {
        // Base Case
        if (n == 0 || W == 0)
            return 0;

        // Already calculated
        if (dp[n][W] != -1)
            return dp[n][W];

        // Include or Exclude
        if (wt[n - 1] <= W) {
            dp[n][W] = max(
                val[n - 1] + solve(W - wt[n - 1], val, wt, n - 1, dp),
                solve(W, val, wt, n - 1, dp)
            );
        }
        else {
            dp[n][W] = solve(W, val, wt, n - 1, dp);
        }

        return dp[n][W];
    }

    int knapsack(int W, vector<int>& val, vector<int>& wt) {
        int n = val.size();
        vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));

        return solve(W, val, wt, n, dp);
    }

    /*
    // Tabulation method

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<vector<int>> dp(n+1, vector<int>(W+1,0));

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= W; j++) {

                if(wt[i-1] <= j) {
                    dp[i][j] = max(
                        val[i-1] + dp[i-1][j-wt[i-1]],
                        dp[i-1][j]
                    );
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[n][W];
    }

    */
};

int main() {
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    vector<int> val(n), wt(n);

    cout << "Enter values of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    int W;
    cout << "Enter capacity of knapsack: ";
    cin >> W;

    Solution obj;

    cout << "Maximum Profit = " << obj.knapsack(W, val, wt) << endl;

    return 0;
}

//Input---Output Example:
// Enter number of items: 4
// Enter values of items:
// 1 2 3 5
// Enter weights of items:
// 4 5 1 2
// Enter capacity of knapsack: 4
// Maximum Profit = 8
