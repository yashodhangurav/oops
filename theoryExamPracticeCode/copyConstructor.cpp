// copyConstructor :- 
                /* initializes an object using another object of the same class*/

#include<iostream>
using namespace std;

class Base{
    public:
        int x;
        Base(int a){
            x = a;
        }

        Base(Base &obj){
            x = obj.x;
            cout<<"Copy constructor called"<<endl;
        }
        void display(){
            cout<<"Value of x is: "<<x<<endl;
        }
};

int main(){
    Base b(50);
    Base b2 = b; // copy constructor is called
    b2.display();

    return 0;
}

