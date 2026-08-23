#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* buildTree() {
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node* root = new Node(val);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

int solve(Node* root, int &res) {
    if (root == NULL)
        return 0;

    int l = solve(root->left, res);
    int r = solve(root->right, res);

    int temp = max(l, r) + root->data;

    if (root->left == NULL && root->right == NULL)
        temp = max(temp, root->data);

    int ans = max(temp, l + r + root->data);

    res = max(res, ans);

    return temp;
}

int maxPathSum(Node* root) {
    int res = INT_MIN;
    solve(root, res);
    return res;
}

int main() {
    Node* root = buildTree();

    cout << maxPathSum(root);

    return 0;
}

// //Input...
// 10 2 20 -1 -1 1 -1 -1 10 -1 -25 3 -1 -1 4 -1 -1

// //Output...
// 42