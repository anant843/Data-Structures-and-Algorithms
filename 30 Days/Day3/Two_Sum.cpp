//Two Sum (When the input array is sorted)

#include <bits/stdc++.h>
using namespace std;

// Brute Force with Time complexity o(n^2)
vector<int> twoSum(vector<int> &numbers, int n, int target)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                return {i + 1, j + 1};
            }
        }
    }
    return {};
}

// Optimised Solution with Time Complexity o(n)
vector<int> twoSum1(vector<int> &numbers, int n, int target)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int sum = numbers[l] + numbers[r];
        if (sum == target)
        {
            return {l + 1, r + 1};
        }
        else if (sum > target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return {};
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<int> ans = twoSum1(vec, n, target);

    if (!ans.empty())
    {
        cout << ans[0] << " " << ans[1];
    }
    else
    {
        cout << "No pair found";
    }
}
