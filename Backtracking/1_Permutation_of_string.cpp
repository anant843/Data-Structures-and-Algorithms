#include <bits/stdc++.h>
using namespace std;
void solve(string &s, int start, vector<string> &v)
{
    if (start == s.size() - 1)
    {
        v.push_back(s);
        return;
    }
    unordered_set<char> st;
    for (int i = start; i < s.size(); i++)
    {
        if (st.find(s[i]) != st.end())
            continue;
        st.insert(s[i]);
        swap(s[start], s[i]);
        solve(s, start + 1, v);
        swap(s[start], s[i]); // backtrack
    }
}
int main()
{
    string s;
    cin >> s;
    vector<string> v;
    solve(s, 0, v);
    for (auto it : v)
    {
        cout << it << " ";
    }
}

// //Input...
// aab

// //Output...
// aab aba baa