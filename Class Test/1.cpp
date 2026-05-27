// Question : Given a string and an integer k, determine if the string is a palindrome or can become a palindrome by performing at most one left rotation or one right rotation by k positions.
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    string temp=s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}
string leftRotate(string s,int k){
    int n=s.length();
    k=k%n;
    return s.substr(k)+s.substr(0,k);
}
string rightRotate(string s,int k){
    int n=s.length();
    k=k%n;
    return s.substr(n-k)+s.substr(0,n-k);
}
int main(){
    string s;
    int k;
    cin>>s>>k;
    int n=s.length();
    bool result=isPalindrome(s)||
                isPalindrome(leftRotate(s,k))||
                isPalindrome(rightRotate(s,k));

            if(result){
                cout<<"True";
            } else {
                cout<<"False";
            }

            cout<<" "<<n;
            return 0;
}
// Input...
// Hello 3
// Output...
// False 5