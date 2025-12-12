#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"Base class show function"<<endl;
    }
};

class Derived1 : public Base{
    public:
    void show(){
        cout<<"Derived1 show function"<<endl;
    }
};

class Derived2 : public Base{
    public:
    void show(){
        cout<<"Derived2 show function"<<endl;
    }
};


int main(){

    Base b , *ptr;
    Derived1 d1;
    Derived2 d2;

    // b.show();
    // d1.show();
    // d2.show();

    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr ->show();

    
    return 0;
}