#include<bits/stdc++.h>
using namespace std;

void solve(string digits,int idx,string s1,string map[],vector<string>&ans){
  
    //base case
    if(idx>= digits.length()){
        ans.push_back(s1);
        return;
    }

    int number=digits[idx]-'0';
    string value=map[number];

    for(int i=0;i<value.length();i++){
        s1.push_back(value[i]);
        solve(digits,idx+1,s1,map,ans);
        s1.pop_back();
    }

}

int main(){
  string digits;
  cin>>digits;

  vector<string>ans;
  if(digits.length()==0){
    return 0;
  }

  string s1;
  int idx=0;
  string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

  solve(digits,idx,s1,map,ans);

  for(auto y:ans){
    for(auto x:y){
        cout<<x;
    }
    cout<<endl;
  }

}

// Input...
// 23
// Output...
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf
