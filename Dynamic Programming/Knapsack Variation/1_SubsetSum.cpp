#include <bits/stdc++.h>
using namespace std;

// Memoization
bool solve(int sum, vector<int>& arr, int n, vector<vector<int>>& dp)
{
    // Base Cases
    if (sum == 0)
        return true;

    if (n == 0)
        return false;

    // Already Computed
    if (dp[n][sum] != -1)
        return dp[n][sum];

    // Include or Exclude
    if (arr[n - 1] <= sum)
    {
        dp[n][sum] = solve(sum - arr[n - 1], arr, n - 1, dp) ||
                     solve(sum, arr, n - 1, dp);
    }
    else
    {
        dp[n][sum] = solve(sum, arr, n - 1, dp);
    }

    return dp[n][sum];
}

bool subset(int sum, vector<int>& arr)
{
    int n = arr.size();

    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

    return solve(sum, arr, n, dp);
}

/*

//Tabulation

bool subset(int sum, vector<int>& arr)
{
    int n = arr.size();

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] ||
                           dp[i - 1][j];
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

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum;
    cout << "Enter target sum: ";
    cin >> sum;

    if (subset(sum, arr))
        cout << "Subset exists";
    else
        cout << "Subset does not exist";

    return 0;
}

//Input---
// Enter number of elements: 3
// Enter array elements: 2 3 7
// Enter target sum: 5
//Output---
// Subset exists