#include<bits/stdc++.h>
using namespace std;

void solve(string &s, int k, string &res, int start)
{
    // Base Case
    if(k == 0 || start == s.size() - 1)
        return;

    // Right side ka maximum digit
    char mx = *max_element(s.begin() + start + 1, s.end());

    // Agar current digit se bada digit exist karta hai
    if(mx > s[start])
    {
        for(int i = start + 1; i < s.size(); i++)
        {
            if(s[i] == mx)
            {
                swap(s[start], s[i]);

                if(s > res)
                    res = s;

                solve(s, k - 1, res, start + 1);

                swap(s[start], s[i]); // backtrack
            }
        }
    }
    else
    {
        // Horizontal drifting
        solve(s, k, res, start + 1);
    }
}

int main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    string res = s;

    solve(s, k, res, 0);

    cout << res << endl;

    return 0;
}

// //Input...
// 1293
// 1

// //Output...
// 9213
