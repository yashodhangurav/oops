// Virtual Function :- 
                /*it is a member function which is declared in the base class wirh the keyword "virtual", 
                and it is redefined or ovveriden in the child class , so its basically enables runtime polymorphism */

#include<iostream>
using namespace std;

class Base{
    public:
        virtual void show(){
            cout<<"Base class show function is called"<<endl;
        }
};
class derived1 : public Base{
    public:
        void show(){
            cout<<"Derived 1 class show function is called "<<endl;
        }
};

class derived2 : public Base{
    public:
        void show(){
            cout<<"Derived 2 class show function is called "<<endl;
        }
};

int main(){

    Base b, *ptr;
    derived1 d1;
    derived2 d2;

    ptr = &d1;
    ptr->show();

    ptr = &b;
    ptr->show();

    ptr = &d2;
    ptr->show();

    return 0;
}



// virtual functionality is inherited throuigh the Multilevel, and heirarchical inheritance as well