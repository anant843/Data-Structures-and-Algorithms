#include<bits/stdc++.h>
using namespace std;

int LongestCommonSubstring(string s, string s1)
{
    int n = s.length();
    int m = s1.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    int maxi = 0;

    // Fill DP Table
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            // Match
            if(s[i - 1] == s1[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                maxi = max(maxi, dp[i][j]);
            }
            // Not Match
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    return maxi;
}

int main()
{
    string s, s1;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> s1;

    cout << "Length of Longest Common Substring: "
         << LongestCommonSubstring(s, s1);

    return 0;
}

// //Input...
// Enter first string: abcde
// Enter second string: abcfe

// //Output...
// Length of Longest Common Substring: 3