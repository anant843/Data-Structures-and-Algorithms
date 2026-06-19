#include <bits/stdc++.h>
using namespace std;

//Time Complexity is o(n^2) and Space Complexity is o(1)
vector<vector<int>> threeSum(vector<int> &nums, int n)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int l = i + 1, r = n - 1;
        while (l < r)
        {
            long long sum = (long long)nums[i] + nums[l] + nums[r];
            if (sum == 0)
            {
                res.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1])
                {
                    l += 1;
                }
                while (l < r && nums[r] == nums[r - 1])
                {
                    r -= 1;
                }
                l++;
                r--;
            }
            else if (sum < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<vector<int>> ans = threeSum(vec, n);

    for (auto &triplet : ans)
    {
        cout << "[ ";
        for (auto &x : triplet)
        {
            cout << x << " ";
        }
        cout << "]" << endl;
    }
}

// Input...
// 6
// -1 0 1 2 -1 -4
// Output...
// [ -1 -1 2 ]
// [ -1 0 1 ]