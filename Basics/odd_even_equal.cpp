#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    int  countodd=0;
     int counteven=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
      if(arr[i]%2!=0){
    countodd+=1;
  }
  else{
    counteven+=1;
  }
}
  if(countodd>counteven){
    cout<<"Odd";
  }
  else if(countodd<counteven){
    cout<<"Even";
  }
  else
     cout<<"Equal";
    }

