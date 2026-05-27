#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, R;
    cin >> S >> R;

    size_t pos = S.find(R);
    while (pos != string::npos && pos > 0) {
        char prev = S[pos - 1];
        string rep(R.size(), prev);
        S.replace(pos, R.size(), rep);
        pos = S.find(R, pos + rep.size());
    }

    cout << S;
    return 0;
}
// Input...
// helloll ll
// heeeooo
