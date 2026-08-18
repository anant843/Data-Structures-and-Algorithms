#include <bits/stdc++.h>
using namespace std;

unordered_map<string, bool> mp;

bool solve(string a, string b)
{
    // Base Cases
    if (a == b)
        return true;

    if (a.length() <= 1)
        return false;

    string key = a + " " + b;

    // Memoization
    if (mp.find(key) != mp.end())
        return mp[key];

    int n = a.length();
    bool flag = false;

    for (int i = 1; i < n; i++)
    {
        // Swap Condition
        bool swapCase =
            solve(a.substr(0, i), b.substr(n - i, i)) &&
            solve(a.substr(i, n - i), b.substr(0, n - i));

        // No Swap Condition
        bool noSwapCase =
            solve(a.substr(0, i), b.substr(0, i)) &&
            solve(a.substr(i, n - i), b.substr(i, n - i));

        if (swapCase || noSwapCase)
        {
            flag = true;
            break;
        }
    }

    return mp[key] = flag;
}

int main()
{
    string a, b;

    cout << "Enter first string: ";
    cin >> a;

    cout << "Enter second string: ";
    cin >> b;

    if (a.length() != b.length())
    {
        cout << boolalpha << false << endl;
        return 0;
    }

    cout << boolalpha << solve(a, b) << endl;

    return 0;
}

// //Input...
// Enter first string: great
// Enter second string: 

// //Output...
// true