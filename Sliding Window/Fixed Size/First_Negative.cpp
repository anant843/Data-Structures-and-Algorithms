#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
    int i=0,j=0;
    vector<int>vec,list;
    while(j<arr.size()){
        if(arr[j]<0){
            list.push_back(arr[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(list.size()==0){
                vec.push_back(0);
            }
            else{
                vec.push_back(list[0]);
                if(arr[i]==list[0]){
                    list.erase(list.begin());
                }
            }
            i++;
            j++;
        }
    }
    return vec;
    }
};




