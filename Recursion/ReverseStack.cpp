#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s, ele);
    s.push(temp);
}

void reverseStack(stack<int>& s){
    if(s.empty()) return;
    int temp = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, temp);
}

int main(){
    int n;
    cin >> n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.push(x);
    }
    reverseStack(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

// Input...
// 1 2 3 4 5 but in stack order is 5 4 3 2 1
// Output...
// 1 2 3 4 5
