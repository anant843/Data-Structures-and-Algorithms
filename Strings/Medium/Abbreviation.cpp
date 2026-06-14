// Given a string, convert it to an abbreviation. An abbreviation is a shortened form of a word or phrase, typically consisting of the first letter of each word in the phrase, followed by a period (.) and the last word in the phrase. For example, "Hello World" would be abbreviated as "H.World".
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size() - 1; i++) {
        cout << (char)toupper(words[i][0]) << ".";
    }

    cout << words.back();

    return 0;
}
// Input....
// Hello World
// Output....
// H.World
