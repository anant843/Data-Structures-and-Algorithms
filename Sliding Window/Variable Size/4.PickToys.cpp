#include<bits/stdc++.h>
using namespace std;

int Toys(string s){
    int k = 2;
    int i = 0, j = 0;
    unordered_map<char,int> mp;
    int maxi = INT_MIN;

    while(j < s.length()){
        mp[s[j]]++;

        // Shrink window if more than k unique chars
        while(mp.size() > k){
            mp[s[i]]--;
            if(mp[s[i]] == 0){
                mp.erase(s[i]);
            }
            i++;
        }

        // Update answer AFTER adjusting window
        if(mp.size() == k){
            maxi = max(maxi, j - i + 1);
        }

        j++;
    }

    if(maxi == INT_MIN){
        return -1; // No valid substring found
    }   else{
        return maxi; // Length of longest valid substring
    }
}

int main(){
    string s = "abaccab";
    cout << Toys(s);
}