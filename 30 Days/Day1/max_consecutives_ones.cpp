
#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int l = 0;
    int zeroCount = 0;
    int maxLen = 0;

    for(int r = 0; r < nums.size(); r++) {

        if(nums[r] == 0)
            zeroCount++;

        while(zeroCount > k) {
            if(nums[l] == 0)
                zeroCount--;
            l++;
        }

        maxLen = max(maxLen, r - l + 1);
    }

    return maxLen;
}

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> k;

    cout << longestOnes(nums, k);

    return 0;
}

/*
Input:
11
1 1 1 0 0 0 1 1 1 1 0
2

Output:
6

Explanation:
We can flip at most 2 zeros to 1s.
The longest consecutive sequence of 1s obtained is:
1 1 1 0 0 1 1 1 1 1  -> Length = 6
*/
