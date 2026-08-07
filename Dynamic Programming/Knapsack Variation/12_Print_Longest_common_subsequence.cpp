#include <bits/stdc++.h>
using namespace std;

string printLCS(string s, string t)
{
    int n = s.length();
    int m = t.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Fill DP Table
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
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Backtracking
    int i = n;
    int j = m;
    string ans = "";

    while(i > 0 && j > 0)
    {
        if(s[i - 1] == t[j - 1])
        {
            ans.push_back(s[i - 1]);
            i--;
            j--;
        }
        else if(dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    string lcs = printLCS(s, t);

    cout << "Longest Common Subsequence: " << lcs << endl;
    cout << "Length: " << lcs.length();

    return 0;
}

// //Input...
// Enter first string: acbcf
// Enter second string: abcdaf

// //Output...
// Longest Common Subsequence: abcf
// Length: 4