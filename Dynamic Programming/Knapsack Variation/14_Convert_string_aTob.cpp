#include <bits/stdc++.h>
using namespace std;

//Memoization....

int Lcs(string s, string t, int n, int m, vector<vector<int>>& dp)
{
    // Base Case
    if(n == 0 || m == 0)
        return 0;

    // Already Computed
    if(dp[n][m] != -1)
        return dp[n][m];

    // Match
    if(s[n - 1] == t[m - 1])
    {
        dp[n][m] = 1 + Lcs(s, t, n - 1, m - 1, dp);
    }
    // Not Match
    else
    {
        dp[n][m] = max(
            Lcs(s, t, n - 1, m, dp),
            Lcs(s, t, n, m - 1, dp)
        );
    }

    return dp[n][m];
}

/*

// Tabulation....

int Lcs(string s, string t)
{
    int n = s.length();
    int m = t.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s[i - 1] == t[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(
                    dp[i - 1][j],
                    dp[i][j - 1]
                );
            }
        }
    }

    return dp[n][m];

}

*/

int main()
{
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    int n = s.length();
    int m = t.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    int lcsLength = Lcs(s, t, n, m, dp);

    cout << "Minimum number of insertion: "<<m-lcsLength<<" and deletion: "
         <<n-lcsLength << endl;

    return 0;
}

// //Input...
// Enter first string: heap
// Enter second string: pea 

// //Output...
// Minimum number of insertion: 1 and deletion: 2
