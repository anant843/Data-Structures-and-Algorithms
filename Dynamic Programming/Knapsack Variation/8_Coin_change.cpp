#include <bits/stdc++.h>
using namespace std;

//Memoization 

int solve(int sum, vector<int> &arr, int n, vector<vector<int>> &dp)
{
    // Base Cases
    if (n == 0)
    {
        if (sum == 0)
            return 1;
        return 0;
    }

    // Already Computed
    if (dp[n][sum] != -1)
        return dp[n][sum];

    // Include or Exclude
    if (arr[n - 1] <= sum)
    {
        dp[n][sum] = solve(sum - arr[n - 1], arr, n, dp) +
                     solve(sum, arr, n - 1, dp);
    }
    else
    {
        dp[n][sum] = solve(sum, arr, n - 1, dp);
    }

    return dp[n][sum];
}

int coinChange(int sum, vector<int> &arr)
{
    int n = arr.size();

    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

    return solve(sum, arr, n, dp);
}

/*

//Tabulation 

int coinChange(int sum, vector<int> &arr)
{
    int n = arr.size();

    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

    // Base Cases
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i][j - arr[i - 1]]
                         + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][sum];
}

*/

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the coins: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum;
    cout << "Enter target sum: ";
    cin >> sum;

    cout << "Number of ways = "
         << coinChange(sum, arr);

    return 0;
}

// //Input...
// Enter number of elements: 3
// Enter the coins: 1 2 3
// Enter target sum: 5

// //Output...
// Number of ways = 5