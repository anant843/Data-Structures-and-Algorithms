#include<bits/stdc++.h>
using namespace std;

class B{
public:
int a;
int b;

public:
int add(){
    return a+b;
}

void operator+ (B &obj){
    int value1=this->a+obj.a;
    int value2=this->b+obj.b;
    cout<<"The sum of a is "<<value1<<endl;
    cout<<"The sum of b is "<<value2<<endl;
}
};

int main (){

    B obj1,obj2;

    obj1.a=5;
    obj1.b=10;

    obj2.a=15;
    obj2.b=20;

    obj1+obj2;

}