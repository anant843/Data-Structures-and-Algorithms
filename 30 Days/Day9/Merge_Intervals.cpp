/*
Problem: Merge Intervals (LeetCode 56)

Input:
intervals = [[1,3],[2,6],[8,10],[15,18]]

Output:
[[1,6],[8,10],[15,18]]

Explanation:
[1,3] and [2,6] overlap, so merge them into [1,6].

--------------------------------------------------

Input:
intervals = [[1,4],[4,5]]

Output:
[[1,5]]

Explanation:
Intervals touching at endpoints are considered overlapping.

--------------------------------------------------

Approach:
1. Sort intervals based on start time.
2. Take the first interval as the current interval.
3. Traverse the remaining intervals:
   - If current interval overlaps with the next interval,
     merge them by updating the ending point.
   - Otherwise, push the current interval into the answer
     and start a new interval.
4. Push the last interval into the answer.

-------------------------------------------------

Time Complexity:
O(n log n)
(Sorting dominates)

Space Complexity:
O(n)
(Answer vector)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        int start1 = intervals[0][0];
        int end1 = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++) {

            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

            // Overlapping intervals
            if(end1 >= start2) {
                end1 = max(end1, end2);
            }
            else {
                ans.push_back({start1, end1});

                start1 = start2;
                end1 = end2;
            }
        }

        // Last merged interval
        ans.push_back({start1, end1});

        return ans;
    }
};