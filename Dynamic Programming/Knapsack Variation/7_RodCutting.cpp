#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Memoization 

    int solve(int rodLength, vector<int> &price, vector<int> &length, int n,
              vector<vector<int>> &dp)
    {
        // Base Case
        if (n == 0 || rodLength == 0)
            return 0;

        // Already Computed
        if (dp[n][rodLength] != -1)
            return dp[n][rodLength];

        // Include or Exclude
        if (length[n - 1] <= rodLength)
        {
            dp[n][rodLength] = max(
                price[n - 1] +
                    solve(rodLength - length[n - 1], price, length, n, dp), // same n (unbounded)
                solve(rodLength, price, length, n - 1, dp));
        }
        else
        {
            dp[n][rodLength] = solve(rodLength, price, length, n - 1, dp);
        }

        return dp[n][rodLength];
    }

    int rodCutting(int rodLength, vector<int> &price, vector<int> &length)
    {
        int n = length.size();

        vector<vector<int>> dp(n + 1,
                               vector<int>(rodLength + 1, -1));

        return solve(rodLength, price, length, n, dp);
    }

    /*

    //Tabulation 

    int rodCutting(int rodLength, vector<int> &price, vector<int> &length)
    {
        int n = length.size();

        vector<vector<int>> dp(n + 1,
                               vector<int>(rodLength + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= rodLength; j++)
            {
                if (length[i - 1] <= j)
                {
                    dp[i][j] = max(
                        price[i - 1] + dp[i][j - length[i - 1]],
                        dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][rodLength];
    }

    */
};

int main()
{
    int n;

    cout << "Enter number of available rod lengths: ";
    cin >> n;

    vector<int> length(n), price(n);

    cout << "Enter rod lengths:\n";
    for (int i = 0; i < n; i++)
        cin >> length[i];

    cout << "Enter prices:\n";
    for (int i = 0; i < n; i++)
        cin >> price[i];

    int rodLength;
    cout << "Enter total rod length: ";
    cin >> rodLength;

    Solution obj;

    cout << "Maximum Obtainable Profit = "
         << obj.rodCutting(rodLength, price, length);

    return 0;
}

//Input---
// 4
// 1 2 3 4
// 2 5 7 8
// 5

//Output---
// 12