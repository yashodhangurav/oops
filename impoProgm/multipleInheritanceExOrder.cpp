// simple Inheritance

#include<iostream>
using namespace std;

class base1{
    public: 
        base1(){
            cout<<"Constructor of base1 class\n";
        }
        ~base1(){
            cout<<"Destructor of base1 class\n";
        }
};
class base2{
    public:
        base2(){
            cout<<"Constructor of base2 class\n";
        }
        ~base2(){
            cout<<"destructor of base2 class\n";
        }
};
class derived: public base1, public base2{
    public:
        derived(){
            cout<<"Constructor of drived class\n";
        }
        ~derived(){
            cout<<"destructor of derived class\n";
        }
};
int main(){
    derived d;

    return 0;
}