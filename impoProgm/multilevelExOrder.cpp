// simple Inheritance

#include<iostream>
using namespace std;

class base{
    public: 
        base(){
            cout<<"Constructor of base class\n";
        }
        ~base(){
            cout<<"Destructor of base class\n";
        }
};
class derived1: public base{
    public:
        derived1(){
            cout<<"Constructor of drived1 class\n";
        }
        ~derived1(){
            cout<<"destructor of derived1 class\n";
        }
};
class derived2: public derived1{
    public:
        derived2(){
            cout<<"Constructor of drived2 class\n";
        }
        ~derived2(){
            cout<<"destructor of derived2 class\n";
        }
};
int main(){
    derived2 d;

    return 0;
}