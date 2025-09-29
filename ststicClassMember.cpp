#include<iostream>
using namespace std;

class counter{
    public: 
        static int count; //this also a classmember that  declaring using static
        counter(){
            count++;
        }
        static void showCount(){
            cout<<"count = "<<count<<endl;
        }
};

int counter :: count = 0;
int main(){
    counter c1,c2,c3;
    c1.showCount();
    c2.showCount();
    c3.showCount();
    counter :: showCount();
    return 0;
}


// static member =   Shared among all instances of the class
// Constructor  = 	Called when an object is created
// Scope resolution (::)    =	Used to define static member outside the class