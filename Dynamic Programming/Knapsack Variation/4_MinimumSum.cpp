#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool equalPartition(vector<int>& arr) {
        int n=arr.size(),sum=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        
          int m=sum/2;
          
         vector<vector<bool>> t(n+1, vector<bool>(m+1,false));
         

        for(int i = 0; i <= n; i++) {
            t[i][0] = 'true';
        }

           
          for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(arr[i-1] <= j) {
                    t[i][j] =t[i-1][j - arr[i-1]] ||
                        t[i-1][j];
                } 
                else {
                    t[i][j] = t[i-1][j];
                }
            }
        }
       return t[n][m];
    }
};