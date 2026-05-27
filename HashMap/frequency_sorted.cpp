#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);   // Standard way

    // Input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    // Count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print element with frequency
    cout << "Element -> Frequency\n";
    for(auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}
// Input...
// 5
// 1 2 2 3 3
// Output...
// Element -> Frequency
// 1 -> 1
// 2 -> 2  
// 3 -> 2
// Explanation: In the given input, the number 1 appears once, while the numbers 2 and 3 appear twice each. The output displays each unique element along with its corresponding frequency.    