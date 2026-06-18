#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = n - 1;
    int maxwater = 0;
    while (l < r)
    {
        int w = r - l;
        int h = min(arr[l], arr[r]);
        int area = w * h;
        maxwater = max(area, maxwater);
        if (arr[l] < arr[r])
        {
            l++;
        }
        else if (arr[l] > arr[r])
        {
            r--;
        }
        else
        {
            l++;
            r--;
        }
    }
    cout << maxwater;
}

// Input...
// 9
// 1 8 6 2 5 4 8 3 7
// Output...
// 49