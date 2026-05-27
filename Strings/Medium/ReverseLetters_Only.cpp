#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;
    int l =0 , r =s.length()-1;
    while(l<r){
        if(!isalpha(s[l])){
            l++;
        }
        else if(!isalpha(s[r])){
            r--;
        }
        else{
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
    cout<<s;
}
// Example Input: a-bC-dEf-ghIj

// Example Output: j-Ih-gfE-dCba