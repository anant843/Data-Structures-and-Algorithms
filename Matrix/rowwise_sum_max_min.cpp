#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows,cols;
   
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    vector<vector<int>> arr(rows,vector<int>(cols));
    cout<<"Enter elements:\n";
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    // without take a auto function
    // for(int i=0;i<rows;i++){
    //     int sum=accumulate(arr[i].begin(),arr[i].end(),0);
    //     int max=*max_element(arr[i].begin(),arr[i].end());
    //     int min=*min_element(arr[i].begin(),arr[i].end());
    //     cout<<sum<<" "<<max<<" "<<min<<endl;
    // }

     for(auto row:arr){
        int sum=accumulate(row.begin(),row.end(),0);
        int max=*max_element(row.begin(),row.end());
        int min=*min_element(row.begin(),row.end());
        cout<<sum<<" "<<max<<" "<<min<<endl;
    }

    
    
    }
    

