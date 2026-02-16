// pure Virtual function :-
        /* pure virtual functions are those which acts as a template child classes, there is no defination present in base for the virtual function, 
        it is basically provide the formate structure for the derived classes*/


#include<iostream>
using namespace std;


class Base{

    public:
        virtual void show() = 0; 

};

class derived1 : public Base{
    public:
        void show(){
            cout<<"Derived 1 class function "<<endl;
        }
};

class derived2 : public Base{
    public:
        void show(){
            cout<<"Derived 2 class "<<endl;
        }
};

int main(){

    Base *ptr;
    derived1 d1;
    derived2 d2;

    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();

    return 0;
}