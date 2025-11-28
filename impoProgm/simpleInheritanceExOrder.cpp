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
class derived: public base{
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