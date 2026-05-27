#include<iostream>
using namespace std;
int main(){
    int n=2;
    switch(2) {
    case 1:
        cout << "One";
        continue;   // ❌ Error: continue not within a loop
    case 2:
        cout << "Two";
        break;
}

}