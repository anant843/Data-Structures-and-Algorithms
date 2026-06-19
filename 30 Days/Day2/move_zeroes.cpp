// Move all zeroes at the end while maintaining the relative order..

#include <bits/stdc++.h>
using namespace std;
void move(int arr[], int n)
{
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        if (arr[r] != 0)
        {
            swap(arr[l], arr[r]);
            l++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    move(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Input...
// 5
// 0 3 0 10 12
// Output...
// 3 10 12 0 0