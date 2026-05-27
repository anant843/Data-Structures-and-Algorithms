#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char,int>mp;
        int i=0,j=0;
        int maxi=INT_MIN;
        while(j<s.length()){
            mp[s[j]]++;
            if(mp.size()==k){
                maxi=max(maxi,j-i+1);
            }
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        if(maxi==INT_MIN){
            return -1;
        }
        else
        return maxi;
    }
};

// Input..
// s = "aabacbebebe"
// k = 3
// Output..
// 7
// Explanation..
// The longest substring with exactly 3 unique characters is "acbebeb", which has a length of 7.