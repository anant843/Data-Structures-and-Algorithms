#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {

        // Print spaces
        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }

        // Print numbers 1 to i
        int num = 1;
        while (num <= i) {
            cout << num;
            num++;
        }

        cout << endl;
        i = i + 1;
    }
    return 0;
}
// Input....4
//    1
//   12
//  123
// 1234
