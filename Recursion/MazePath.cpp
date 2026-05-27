#include<bits/stdc++.h>
using namespace std;
    int maze(int sr,int sc,int er,int ec){
        if(sr>er || sc>ec){
            return 0;
        }
        if(sr==er && sc==ec){
            return 1;
        }
        int rightways=maze(sr,sc+1,er,ec);
        int downways=maze(sr+1,sc,er,ec);
        return rightways+downways;
    }

void printPath(int sr,int sc,int er,int ec,string ans){
    if(sr>er || sc>ec){
        return;
    }
    if(sr==er && sc==ec){
        cout<<ans<<" ";
        return;
    }
    printPath(sr,sc+1,er,ec,ans+"R");
    printPath(sr+1,sc,er,ec,ans+"D");
}

int maze2(int row,int col){
    if(row<0 || col<0){
        return 0;
    }
    if(row==0 && col==0){
        return 1;
    }
    int rightways=maze2(row,col-1);
    int downways=maze2(row-1,col);
    return rightways+downways;
}

void printPath2(int row,int col,string ans){
    if(row<0 || col<0){
        return;
    }
    if(row==0 && col==0){
        cout<<ans<<" ";
        return;
    }
    printPath2(row,col-1,ans+"R");
    printPath2(row-1,col,ans+"D");
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<maze(0,0,m-1,n-1)<<endl;
    printPath(0,0,m-1,n-1,"");
    cout<<endl<<maze2(m-1,n-1)<<endl;
    printPath2(m-1,n-1,"");


}

// Input...
// 3 3
// Output...
// 6
// RRDD RDRD RDDR DRRD DRDR DDRR