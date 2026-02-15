// Pointers to derived:- 
            /*When Base class pointer points to the derived class object by taking an reference called as a pointers to derived class*/

#include<iostream>
using namespace std;

class Base{
    int a,b, sum;
    public:   
        void getData(){
            cout<<"Enter the value of a and b: ";
            cin>>a>>b;
        }
        void displaySum(){
            sum = a+b;
            cout<<"Sum of the two numbers is : "<<sum<<endl;
        }
};

class derived : public Base{
    int c, mul;
    public:
        void setValue(){
            cout<<"Enter the value of c : ";
            cin>>c;
        }
        void displayC(){
            cout<<"display function of derived class : "<<c<<endl;
        }
};


int main(){

    Base *p;
    derived d;

    p = &d; // Base class pointer pointing to the derived class object

    p->getData(); // Base class function called using base class pointer
    p->displaySum();
    // p->setValue(); // Error: Base class pointer cannot access derived class function

    derived *dptr;
    dptr = &d; // Derived class pointer pointing to the derived class object

    dptr->setValue();
    dptr->displayC();


    return 0;
}