#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
    auto max_it = max_element(arr.begin(), arr.end()); 
    auto min_it = min_element(arr.begin(), arr.end());

    int min_i= distance(arr.begin(),min_it);
    int max_i= distance(arr.begin(),max_it);
            // if (min_i > max_i) swap(min_i, max_i);

vector<int>new_vec1(arr.begin(), arr.begin() + min_i);
vector<int>new_vec(arr.begin()+min_i, arr.begin() + max_i);
vector<int>new_vec2(arr.begin()+max_i, arr.end());
for (int x : new_vec) cout << x << " ";
for (int x : new_vec1) cout << x << " ";
for (int x : new_vec2) cout << x << " ";
}