#include<bits/stdc++.h>
using namespace std;
class Animal{

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Dog obj;

    obj.speak();//It will call the speak() function of Dog class because it is overriding the speak() function of Animal class.
    //Output:-Barking
}