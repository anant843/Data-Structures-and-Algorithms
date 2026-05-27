#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "abs&def#";  

    
    bool evenLength = (str.length() % 2 == 0);
    bool has = (count(str.begin(), str.end(), '&') > 0);
    bool have = (count(str.begin(), str.end(), '#') > 0);

    if (evenLength && has && have) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
