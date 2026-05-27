#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   
    }
    int firstSum = arr[0] + arr[1];
    int lastSum = arr[n-1] + arr[n-2];

    cout << "Sum of first two elements: " << firstSum << endl;
    cout << "Sum of last two elements: " << lastSum << endl;

}
// 5
// 10 20 30 40 50
// Sum of first two elements: 30
// Sum of last two elements: 90


