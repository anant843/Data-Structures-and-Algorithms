#include<bits/stdc++.h>
using namespace std;

int solve(int e,int f,vector<vector<int>>&dp)
{
    // Base cases
    if(f==0 || f==1)
        return f;

    if(e==1)
        return f;

    if(dp[e][f]!=-1)
        return dp[e][f];

    int mn=INT_MAX;

    for(int k=1;k<=f;k++)
    {
        int left,right;

        // Egg breaks
        if(dp[e-1][k-1]!=-1)
            left=dp[e-1][k-1];
        else
            left=solve(e-1,k-1,dp);

        // Egg survives
        if(dp[e][f-k]!=-1)
            right=dp[e][f-k];
        else
            right=solve(e,f-k,dp);

        int temp=1+max(left,right);

        mn=min(mn,temp);
    }

    return dp[e][f]=mn;
}

int main()
{
    int e,f;
    cin>>e>>f;

    vector<vector<int>> dp(e+1,vector<int>(f+1,-1));

    cout<<solve(e,f,dp);

    return 0;
}

// //Input...
// 5
// 3

// //Output...
// 2