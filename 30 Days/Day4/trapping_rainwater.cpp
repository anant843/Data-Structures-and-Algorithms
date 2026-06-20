#include <bits/stdc++.h>
using namespace std;

// Time complexity is O(n^2)
int trap(vector<int> &height)
{
    int n = height.size(), totalWater = 0;
    for (int i = 0; i < n; i++)
    {
        int leftMax = 0, rightMax = 0;
        for (int j = i; j < n; j++)
        {
            rightMax = max(rightMax, height[j]);
        }
        for (int j = 0; j <= i; j++)
        {
            leftMax = max(leftMax, height[j]);
        }
        totalWater += min(leftMax, rightMax) - height[i];
    }
    return totalWater;
}

// Time complexity is O(n)
int trap1(vector<int> &height)
{
    int left = 0, right = height.size() - 1, totalWater = 0;
    int leftMax = height[left], rightMax = height[right];
    while (left < right)
    {
        if (leftMax < rightMax)
        {
            left += 1;
            leftMax = max(leftMax, height[left]);
            totalWater += leftMax - height[left];
        }
        else
        {
            right -= 1;
            rightMax = max(rightMax, height[right]);
            totalWater += rightMax - height[right];
        }
    }
    return totalWater;
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int ans = trap1(height);
    cout << ans;
}

// Input...
// 6
// 4 2 0 3 2 5
// Output...
// 9