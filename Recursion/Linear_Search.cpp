#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int target)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, n - 1, target);
    }
}

int main()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = linearSearch(arr, n, target);
    if (ans)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}

// Input...
// 5 8
// Output...
// 2 4 5 6 8
// Found