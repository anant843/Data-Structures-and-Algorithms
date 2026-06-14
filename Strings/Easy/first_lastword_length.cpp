// C++ program to find the length of the first and last word in a given string
#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    string word, firstWord, lastWord;
    stringstream ss(str);

    if (ss >> firstWord) {
        lastWord = firstWord;

        while (ss >> word) {
            lastWord = word;
        }

        cout << "First word length: " << firstWord.length() << endl;
        cout << "Last word length: " << lastWord.length() << endl;
    }

    return 0;
}

// Input....
// Hello World
// Output....
// First word length: 5 
// Last word length: 5 