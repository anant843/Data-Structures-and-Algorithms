#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length() / 2;

    // splitting
    string r1 = s.substr(0, n);
    string r2 = s.substr(n);

    reverse(r1.begin(), r1.end());
    reverse(r2.begin(), r2.end());

    string newStr = r1 + r2;

    string revStr = newStr;
    reverse(revStr.begin(), revStr.end());
    if (newStr == revStr) {
        cout << "true";
    } else {
        cout << "false";
    }
}

// Example Input: abccba
// Example Output: true