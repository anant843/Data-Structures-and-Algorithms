#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &v) {

    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && v[x][y] == 1) {
        return true;
    }
    return false;
}

void solve(vector<vector<int>> &v, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited,string &path) {

    // Base Case
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, v)) {
        path.push_back('D');
        solve(v, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, v)) {
        path.push_back('L');
        solve(v, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, v)) {
        path.push_back('R');
        solve(v, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, v)) {
        path.push_back('U');
        solve(v, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Backtracking
    visited[x][y] = 0;
}

int main() {

    vector<vector<int>> v = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int n = v.size();

    vector<string> ans;

    if (v[0][0] == 0) {
        cout << "No Path";
        return 0;
    }

    vector<vector<int>> visited(n, vector<int>(n, 0));

    string path = "";

    solve(v, n, ans, 0, 0, visited, path);

    sort(ans.begin(), ans.end());

    if (ans.empty()) {
        cout << "No Path";
    } else {
        for (auto x : ans) {
            cout << x << " ";
        }
    }

    return 0;
}

//Output...
// DDRDRR DRDDRR 