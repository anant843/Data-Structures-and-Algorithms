#include <bits/stdc++.h>
using namespace std;

int solve(string &s,int i,int j,bool isTrue,vector<vector<vector<int>>> &dp)
{
    if(i > j)
        return 0;

    if(i == j)
    {
        if(isTrue)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }

    if(dp[i][j][isTrue] != -1)
        return dp[i][j][isTrue];

    int ans = 0;

    for(int k = i + 1; k <= j - 1; k += 2)
    {
        int lt = solve(s, i, k - 1, true, dp);
        int lf = solve(s, i, k - 1, false, dp);
        int rt = solve(s, k + 1, j, true, dp);
        int rf = solve(s, k + 1, j, false, dp);

        if(s[k] == '&')
        {
            if(isTrue)
                ans += lt * rt;
            else
                ans += lt * rf + lf * rt + lf * rf;
        }
        else if(s[k] == '|')
        {
            if(isTrue)
                ans += lt * rt + lt * rf + lf * rt;
            else
                ans += lf * rf;
        }
        else if(s[k] == '^')
        {
            if(isTrue)
                ans += lt * rf + lf * rt;
            else
                ans += lt * rt + lf * rf;
        }
    }

    return dp[i][j][isTrue] = ans;
}

int evaluateExpression(string s)
{
    int n = s.length();

    vector<vector<vector<int>>> dp(
        n,
        vector<vector<int>>(n,
                            vector<int>(2, -1)));

    return solve(s, 0, n - 1, true, dp);
}

int main()
{
    string s;
    cin >> s;

    cout << evaluateExpression(s);

    return 0;

}

// //Input...
// T|F&T

// //Output...
// 2


// //Using map instead of dp

// #include <bits/stdc++.h>
// using namespace std;

// unordered_map<string, int> mp;

// int solve(string &s, int i, int j, bool isTrue)
// {
//     // Base Cases
//     if(i > j)
//         return 0;

//     if(i == j)
//     {
//         if(isTrue)
//             return (s[i] == 'T');
//         else
//             return (s[i] == 'F');
//     }

//     string key =
//         to_string(i) + "_" +
//         to_string(j) + "_" +
//         to_string(isTrue);

//     if(mp.find(key) != mp.end())
//         return mp[key];

//     int ans = 0;

//     for(int k = i + 1; k <= j - 1; k += 2)
//     {
//         int lt = solve(s, i, k - 1, true);
//         int lf = solve(s, i, k - 1, false);

//         int rt = solve(s, k + 1, j, true);
//         int rf = solve(s, k + 1, j, false);

//         if(s[k] == '&')
//         {
//             if(isTrue)
//             {
//                 ans += lt * rt;
//             }
//             else
//             {
//                 ans += lt * rf +
//                        lf * rt +
//                        lf * rf;
//             }
//         }
//         else if(s[k] == '|')
//         {
//             if(isTrue)
//             {
//                 ans += lt * rt +
//                        lt * rf +
//                        lf * rt;
//             }
//             else
//             {
//                 ans += lf * rf;
//             }
//         }
//         else if(s[k] == '^')
//         {
//             if(isTrue)
//             {
//                 ans += lt * rf +
//                        lf * rt;
//             }
//             else
//             {
//                 ans += lt * rt +
//                        lf * rf;
//             }
//         }
//     }

//     return mp[key] = ans;
// }

// int evaluateExpression(string s)
// {
//     mp.clear();

//     return solve(s, 0, s.length() - 1, true);
// }

// int main()
// {
//     string s;
//     cin >> s;

//     cout << evaluateExpression(s) << endl;

//     return 0;
// }