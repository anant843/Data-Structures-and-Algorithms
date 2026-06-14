// Anagrams are two strings that are made up of the same characters, but in a different order
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, r;
    cin >> s >> r;

    if(s.length() != r.length()){
        cout << "False";
        return 0;
    }

    sort(s.begin(), s.end());
    sort(r.begin(), r.end());

    if(s == r)
        cout << "True";
    else
        cout << "False";
}
// Input...
// silent listen
// Output...
// True
