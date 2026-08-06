#include<bits/stdc++.h>
using namespace std;

//Memoization

int solve(int sum, vector<int>& coins, int n, vector<vector<int>>& dp)
{
    // Base Cases
    if(sum == 0)
        return 0;

    if(n == 0)
        return INT_MAX - 1;

    // Already Computed
    if(dp[n][sum] != -1)
        return dp[n][sum];

    // Include or Exclude
    if(coins[n-1] <= sum)
    {
        dp[n][sum] = min(
            1 + solve(sum - coins[n-1], coins, n, dp),
            solve(sum, coins, n-1, dp)
        );
    }
    else
    {
        dp[n][sum] = solve(sum, coins, n-1, dp);
    }

    return dp[n][sum];
}

int MinimumCoins(int sum, vector<int>& coins)
{
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

    int ans = solve(sum, coins, n, dp);

    if(ans >= INT_MAX - 1)
        return -1;

    return ans;
}

/*

//Tabulation 

int MinimumCoins(int sum, vector<int>& coins)
{
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, INT_MAX - 1));

    // Base Case
    for(int i = 0; i <= n; i++)
        dp[i][0] = 0;

    // Initialize second row
    for(int j = 1; j <= sum; j++)
    {
        if(j % coins[0] == 0)
            dp[1][j] = j / coins[0];
        else
            dp[1][j] = INT_MAX - 1;
    }

    // Fill DP Table
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= sum; j++)
        {
            if(coins[i - 1] <= j)
            {
                dp[i][j] = min(
                    1 + dp[i][j - coins[i - 1]],
                    dp[i - 1][j]
                );
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    if(dp[n][sum] >= INT_MAX - 1)
        return -1;

    return dp[n][sum];
}

*/

int main()
{
    int n;

    cout << "Enter number of coin : ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter value of coins:\n";
    for(int i = 0; i < n; i++)
        cin >> coins[i];

    int sum;
    cout << "Enter target sum: ";
    cin >> sum;

    cout << "Minimum number of coins required: "
         << MinimumCoins(sum, coins);

    return 0;
}

// //Input...
// Enter number of coin : 3
// Enter value of coins:
// 1 2 5
// Enter target sum: 5

// //Output...
// Minimum number of coins required: 1