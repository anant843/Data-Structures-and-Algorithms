//Time complexity is O(n*2^n) because there are 2ⁿ subsets, and copying each subset takes up to O(n) time.

#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>nums,int idx,vector<int>ans,vector<vector<int>> &result){
   
    //base case
    if(idx>=nums.size()){
        result.push_back(ans);
        return ;
    }

    //exclude
    solve(nums,idx+1,ans,result);

    //include
    int ele=nums[idx];
    ans.push_back(ele);
    solve(nums,idx+1,ans,result);

}
int main(){

    vector<int>nums={1,2,3};

    vector<int>ans;
    vector<vector<int>>result;
    int idx=0;

    solve(nums,idx,ans,result);

    for(auto y:result){
        cout<<"{";
        for(auto x:y){
            cout<<x<<" ";
        }
        cout<<"}"<<endl;
    }

    return 0;

}

// Output...
// {}
// {3 }
// {2 }
// {2 3 }
// {1 }
// {1 3 }
// {1 2 }
// {1 2 3 }