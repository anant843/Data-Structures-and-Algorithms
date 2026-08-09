#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int i, int j)
{
    while(i < j)
    {
        if(s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}

int solve(string &s, int i, int j, vector<vector<int>> &dp)
{
    if(i >= j)
        return 0;

    if(isPalindrome(s, i, j))
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    int mn = INT_MAX;

    for(int k = i; k < j; k++)
    {
         int left, right;

         //recursive call se phele dp check krlo taaki speed slow na ho
        if(dp[i][k] != -1)      
            left = dp[i][k];
        else
            left = solve(s, i, k, dp);

        if(dp[k + 1][j] != -1)
            right = dp[k + 1][j];
        else
            right = solve(s, k + 1, j, dp);

        
        int temp = left + right + 1;

        mn = min(mn, temp);
    }

    return dp[i][j] = mn;
}

int PalindromePartitioning(string s)
{
    int n = s.length();

    vector<vector<int>> dp(n, vector<int>(n, -1));

    return solve(s, 0, n - 1, dp);
}

int main()
{
    string s;
    cin >> s;

    cout << PalindromePartitioning(s);

    return 0;
}

// //Input...
// abc

// //Output...
// 2