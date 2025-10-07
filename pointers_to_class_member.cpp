#include<iostream>
using namespace std;


class Data {
    public: 
    // Class members
        int n; //Data member
        void show() { //member function
            cout << "n = " << n << endl;
        }
};

int main() {

    Data obj , *objPtr; // object and pointer to object of class Data
    objPtr = &obj; // pointer objPtr holds address of object obj

    // Pointer to class member
    int Data::*ptr = &Data::n; // following syntax of assigning pointer to class member n 
    
    obj.*ptr = 10; // following syntax of accessing class member n using pointer ptr (defrencing pointer ptr using * operator) and assigning value to it
    obj.show(); 
    
    // or below how we can access class member n using pointer to object objPtr
    objPtr->*ptr = 20; // here deferencing pointer objPtr using -> operator and assigning value to class member n using pointer ptr
    objPtr->show();

    return 0;
}