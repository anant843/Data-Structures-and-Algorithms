#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int s, int e, int target)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return true;
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, e, target);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, target);
    }
}

int main()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    int s = 0, e = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = binarySearch(arr, s, e, target);
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
// 5 9
// Output...
// 5 1 2 3 9
// Found
