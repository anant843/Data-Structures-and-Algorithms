#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>mp;
       if(s.length()==0){
        return 0;
       }
       int i=0,maxi=INT_MIN;
       int j=0;
       while(j<s.length()){
        mp[s[j]]++;
         if(mp[s[j]]==1){
            maxi=max(j-i+1,maxi);
         } 
         while(mp[s[j]]>1){
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
         }
         j++;
    }
  if(maxi==INT_MAX){
    return -1;
  }
  else{
    return maxi;
  }
    }
};

// Input...
// s = "abcabcbb"
// Output...
// 3
// Explanation...
// The answer is "abc", with the length of 3.