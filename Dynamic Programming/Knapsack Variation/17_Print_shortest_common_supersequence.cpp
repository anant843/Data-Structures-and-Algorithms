#include <bits/stdc++.h>
using namespace std;

string printSCS(string s, string t)
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
            ans.push_back(s[i-1]);
            i--;
        }
        else
        {
            ans.push_back(t[j-1]);
            j--;
        }
    }

    while(i>0){
        ans.push_back(s[i-1]);
        i--;
    }

    while(j>0){
        ans.push_back(t[j-1]);
        j--;
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

    string Scs = printSCS(s, t);

    cout << "Shortest Common Supersequence: " << Scs << endl;
    

    return 0;
}

// //Input...
// Enter first string: acbcf
// Enter second string: abcdaf

// //Output...
// Shortest Common Supersequence:acbcdaf
