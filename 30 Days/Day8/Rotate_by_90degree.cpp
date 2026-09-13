/*
Problem: Rotate Image (LeetCode 48)

Input:
matrix = [
 [1,2,3],
 [4,5,6],
 [7,8,9]
]

Output:
[
 [7,4,1],
 [8,5,2],
 [9,6,3]
]

Explanation:
Rotate the matrix by 90 degrees clockwise.

Approach:
1. Transpose the matrix.
   - Convert rows into columns.
2. Reverse each row.
   - This gives a 90° clockwise rotation.

Dry Run:

Original:
1 2 3
4 5 6
7 8 9

After Transpose:
1 4 7
2 5 8
3 6 9

After Reversing Each Row:
7 4 1
8 5 2
9 6 3

Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};