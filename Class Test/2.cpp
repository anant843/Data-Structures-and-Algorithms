#include <bits/stdc++.h>
using namespace std;
string oppositeString(string s){
    for(char &ch:s){
        ch='z'-(ch-'a');
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    vector<string>words(n);
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    set<string>st(words.begin(),words.end());
    int count=0;
    for(string word:st){
        string opp=oppositeString(word);
        if(st.count(opp) && word < opp){
            count++;
        }
    }
    cout<<count;
    return 0;
}
// Input...
// 10
// abcd zyxw bcde yxwv aaaa zzzz mnop nmlk ghij tsrq
// Output...
// 5
// Explanation...
// The opposite pairs are:
// abcd ↔ zyxw   → 1
// bcde ↔ yxwv   → 2
// aaaa ↔ zzzz   → 3
// ghij ↔ tsrq   → 4
// mnop ↔ nmlk   → 5
