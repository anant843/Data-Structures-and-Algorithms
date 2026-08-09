#include <bits/stdc++.h>
using namespace std;

// MEMOIZATION

int solve(vector<int>& arr, int i, int j, vector<vector<int>>& dp)
{
    // Base Case:
    
    if(i >= j)   // If there is only one matrix or no matrix
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    int mn = INT_MAX;

    for(int k = i; k < j; k++)
    {
        int left = solve(arr, i, k, dp);
        int right = solve(arr, k + 1, j, dp);

        int cost =left +right +arr[i - 1] * arr[k] * arr[j];

        mn = min(mn, cost);
    }

    return dp[i][j] = mn;
}

int MCM(vector<int>& arr)
{
    int n = arr.size();

    vector<vector<int>> dp(n + 1,
                           vector<int>(n + 1, -1));

    return solve(arr, 1, n - 1, dp);
}

/*
// TABULATION 

int MCM(vector<int>& arr)
{
    int n = arr.size();

    // dp[i][j]
    // Minimum multiplication cost
    // from matrix i to matrix j

    vector<vector<int>> dp(n,vector<int>(n, 0));

    // len = current chain length
    for(int len = 2; len < n; len++)
    {
        // starting index
        for(int i = 1; i < n - len + 1; i++)
        {
            // ending index
            int j = i + len - 1;

            dp[i][j] = INT_MAX;

            // partition point
            for(int k = i; k < j; k++)
            {
                int cost =
                    dp[i][k] +
                    dp[k + 1][j] +
                    arr[i - 1] * arr[k] * arr[j];

                dp[i][j] =
                    min(dp[i][j], cost);
            }
        }
    }

    return dp[1][n - 1];
}

*/

int main()
{
    int n;
    cin >> n;


    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << MCM(arr) << endl;

    return 0;
}

// //Input...
// 5
// 40 10 20 10 30

// //Output...
// 17000