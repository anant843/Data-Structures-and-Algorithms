#include <bits/stdc++.h>
using namespace std;

//Memoization 

bool solve(int sum, vector<int> &arr, int n, vector<vector<int>> &dp)
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

bool equalPartition(vector<int> &arr)
{
    int totalSum = 0;

    for (int x : arr)
        totalSum += x;

    // If total sum is odd, partition is impossible
    if (totalSum % 2 != 0)
        return false;

    int target = totalSum / 2;
    int n = arr.size();

    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));

    return solve(target, arr, n, dp);
}

/* Tabulation 

bool equalPartition(vector<int> &arr)
{
    int totalSum = 0;

    for (int x : arr)
        totalSum += x;

    if (totalSum % 2 != 0)
        return false;

    int target = totalSum / 2;
    int n = arr.size();

    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

    // Base Case
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= target; j++)
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

    return dp[n][target];
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

    if (equalPartition(arr))
        cout << "Equal Partition Possible";
    else
        cout << "Equal Partition Not Possible";

    return 0;
}

// //Input...
// Enter number of elements: 4
// Enter array elements: 1 5 11 5
// //Output...
// Equal Partition Possible