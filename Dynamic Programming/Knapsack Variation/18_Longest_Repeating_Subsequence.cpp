#include<bits/stdc++.h>
using namespace std;

//Memoization

int Lrs(string s, string s1, int n, int m, vector<vector<int>>& dp)
{
    // Base Case
    if(n == 0 || m == 0)
        return 0;

    // Already Computed
    if(dp[n][m] != -1)
        return dp[n][m];

    // Match
    if(s[n-1] == s1[m-1] && n!=m)
    {
        dp[n][m] = 1 + Lrs(s, s1, n-1, m-1, dp);
    }
    // Not Match
    else
    {
        dp[n][m] = max(
            Lrs(s, s1, n-1, m, dp),
            Lrs(s, s1, n, m-1, dp)
        );
    }

    return dp[n][m];
}

/*

//Tabulation

int Lrs(string s, string s1)
{
    int n = s.length();
    int m = s1.length();

    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s[i-1] == s1[j-1] && i!=j)
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(
                    dp[i-1][j],
                    dp[i][j-1]
                );
            }
        }
    }

    return dp[n][m];
}

*/

int main()
{
    string s;

    cout << "Enter first string: ";
    cin >> s;
    
    string s1=s;
    reverse(s1.begin(),s1.end()); 

    int n = s.length();
    int m = s1.length();

    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

    cout << "Length of Longest Repeating Subsequence: "
         << Lrs(s, s1, n, m, dp);

    return 0;
}

// //Input...
// Enter first string: aabebcdd

// //Output...
// Length of Longest Repeating Subsequence:3