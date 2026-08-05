#include <bits/stdc++.h>
using namespace std;

vector<int> v;

bool subset(int sum, vector<int>& arr)
{
    int n = arr.size();

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    // Base Case
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    // Fill DP Table
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

    // Store all possible subset sums
    for (int j = 0; j <= sum; j++)
    {
        if (dp[n][j])
            v.push_back(j);
    }

    return dp[n][sum];
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Total Sum
    int sum = accumulate(arr.begin(), arr.end(), 0);

    // We only need to check till sum/2
    int newSum = sum / 2;

    subset(newSum, arr);

    int minimise = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        minimise = min(minimise, abs(sum - 2 * v[i]));
    }

    cout << "Minimum Subset Sum Difference = " << minimise << endl;

    return 0;
}

// //Input...
// Enter number of elements: 4
// Enter array elements: 1 6 11 15
// //Output..
// Minimum Subset Sum Difference = 1