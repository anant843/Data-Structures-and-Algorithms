#include <bits/stdc++.h>
using namespace std;

void solve(int open, int close, int n, string output, vector<string> &ans) {

    // Base case
    if(output.length() == 2 * n) {
        ans.push_back(output);
        return;
    }

    // Add (
    if(open < n) {
        solve(open + 1, close, n, output + "(", ans);
    }

    // Add )
    if(close < open) {
        solve(open, close + 1, n, output + ")", ans);
    }
}

int main() {

    int n;
    cin >> n;

    vector<string> ans;

    solve(0, 0, n, "", ans);

    for(string s : ans)
        cout << s << endl;

    return 0;
}

// Input...
// 3
// Output...
// ((()))
// (()())
// (())()
// ()(())
// ()()()