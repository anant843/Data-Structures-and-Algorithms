#include<bits/stdc++.h>
using namespace std;

class A{
    public:

    void func(){
        cout<<"I am A"<<endl;
    }
};


class B{
    public:

    void func(){
        cout<<"I am B"<<endl;
    }
};

class C:public A,public B{

};

int main(){

    C obj;
   // obj.func();//Ambiguity error because both class A and class B have same function name func().

   obj.A::func();
   obj.B::func();
    
}