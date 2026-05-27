#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
    return;
}
 
void sortt(vector<int>&v){
    if(v.size()==0){
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    sortt(v);
    insert(v,temp);
}

   int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sortt(v);
    for(auto x:v){
        cout<<x<<" ";
    }
}

// Input..
// 5
// 5 4 3 2 1
// Output..
// 1 2 3 4 5