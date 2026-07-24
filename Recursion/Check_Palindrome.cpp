#include <bits/stdc++.h>
using namespace std;

bool checkPlaindrome(string s, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (s[i] != s[j])
    {
        return false;
    }
    else
    {
        return checkPlaindrome(s, i + 1, j - 1);
    }
}

int main()
{
    string s = "madam";
    bool isPalindrome = checkPlaindrome(s, 0, s.length() - 1);
    cout << isPalindrome;
}