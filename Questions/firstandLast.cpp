
#include <bits/stdc++.h>
using namespace std;

int firstPosition(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            ans = mid;     // store potential first position
            e = mid - 1;   // move left
        } else if (arr[mid] < k) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}
int lastPosition(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            ans = mid;     // store potential first position
            s = mid + 1;   // move right
        } else if (arr[mid] < k) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2};
    cout << firstPosition(arr, 12, 2)<<endl;
    cout << lastPosition(arr, 12, 2);
}
