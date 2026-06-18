#include <bits/stdc++.h>

// Brute force with complexity 0(n^2)
int Product_Less_Than_k(int arr[], int n, int k)
{
    if(k<=1){
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i; j >= 0; j--)
        {
            product *= arr[j];
            if (product < k)
                count++;
            else
                break;
        }
    }
    return count;
}


// optimal solution with 0(2n) Time complexity
int Product_Less_Than_k1(int arr[], int n, int k){
    if(k<=1) return 0;
    int l=0,count=0,product=1;
    for(int r=0;r<n;r++){
        product*=arr[r];
      while(product>=k){
        product /= arr[l];
        l++;
      }
      count +=r-l+1;
    }
    return count;
}

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Product_Less_Than_k1(arr, n, k);
}

// Input...
// 4
// 100
// 10 5 2 6
// Output...
// 8