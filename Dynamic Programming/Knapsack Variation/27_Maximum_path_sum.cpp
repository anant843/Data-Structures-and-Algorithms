#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* buildTree() {
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    TreeNode* root = new TreeNode(val);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

class Solution {
public:
    int maxi = INT_MIN;

    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = max(0, solve(root->left));
        int right = max(0, solve(root->right));

        maxi = max(maxi, left + right + root->val);

        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
    }
};

int main() {
    cout << "Enter tree in preorder (-1 for NULL):" << endl;

    TreeNode* root = buildTree();

    Solution obj;

    cout << "Maximum Path Sum = "
         << obj.maxPathSum(root) << endl;

    return 0;
}

// //Input...
// 1 2 4 -1 -1 5 -1 -1 3 -1 -1

// //Output...
// Maximum Path Sum = 11