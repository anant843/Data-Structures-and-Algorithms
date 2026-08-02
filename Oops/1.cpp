#include <bits/stdc++.h>
using namespace std;
class Hero
{

    // propertires
private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    // constructor
    Hero()
    {
        cout << "Constructor called" << endl;
        name = new char[100];
    }

    // parameterised constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Create Copy constructor
    Hero(Hero &temp)
    {
        // cout << "Copy constructor" << endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = new char[strlen(temp.name) + 1];
        strcpy(this->name, temp.name);
    }

    void print()
    {
        cout << "[ Name: " << this->name << " ,";
        cout << "Health is: " << this->health << " ,";
        cout << "Level is: " << this->level << " ]" << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    //Static function use only static members of class and can be called without creating object of class
    static int random() 
    {
        return timeToComplete;
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete = 5; // Initialize static member
int main()
{

    // //static allocation
    // Hero a;
    // a.setHealth(70);
    // a.setLevel('b');
    // cout<<"Level is: "<<a.level<<endl;
    // cout<<"Health is: "<<a.getHealth()<<endl;

    // //dynamic allocation
    // Hero *b=new Hero;

    // b->setLevel('A');
    // b->setHealth(80);

    // cout<<"Level is "<<(*b).level<<endl;
    // cout<<"Health is "<<(*b).getHealth()<<endl;

    // cout<<"Level is "<<b->level<<endl;
    // cout<<"Health is "<<b->getHealth()<<endl;

    // //copy constructor
    // Hero S(70,'C');
    // S.print();

    // //copy
    // Hero R(S);
    // R.print();

    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[5] = "Allu";
    hero1.setName(name);

    //hero1.print(); //[ Name: Allu ,Health is: 12 ,Level is: D ]

    // use default copy constructor
    Hero hero2(hero1);
    //hero2.print(); //[ Name: Allu ,Health is: 12 ,Level is: D ]

    hero1.name[0] = 'k';
    hero1.print(); //[ Name: kllu ,Health is: 12 ,Level is: D ]

    //hero2.print(); //int this allow change the value of hero2 because we use default copy constructor which works on shallow copy and both object share the same memory location

    // But if use create copy constructor
    hero2.print(); //[ Name: Allu ,Health is: 12 ,Level is: D ] In this object when change the 0 index value of object hero1 not affect the value of object hero2 because create copy constructor works on deep copy and default constructor works on shallow copy
    cout<<endl;

    hero1=hero2;//this will not call copy constructor because copy constructor only works when we create new object and assign the value of another object to it but here we already have an object hero1 and we are assigning the value of hero2 to it so this will call default assignment operator which works on shallow copy and both object share the same memory location

    hero1.print();
    hero2.print();


    Hero a;

    Hero *c=new Hero();
    delete c; //In dynamic allocation we have to delete the object after use because it will not automatically delete the object when it goes out of scope and this will cause memory leak

    cout<<"Time to complete: "<<Hero::timeToComplete<<endl; //Accessing static member using class name

    cout<<Hero::random()<<endl;

}