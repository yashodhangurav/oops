#include<iostream>
using namespace std;
class Teacher {

    public : //access specifier
    // data members (object properties)
    string name;
    string subject;
    string dep;
    double salary;

    //constructor
    Teacher (string name, string subject, string dep, double salary){ // parameterized constructor
        // giveing values to data members
        this->name = name;          //we are using this-> to refer to the current object's data members
        this->subject = subject;
        this->dep = dep;
        this->salary = salary; //left name is class name or object name and right name is parameter name
        //if the parameter names and data members are same then cpp confused to overcome this we use "this" , "this" is autoatically created pointer which is point to the created object, and the "->" operator is used to access the members of the object that the pointer is pointing to.
        // "*(this).prop" is equal to the "this->prop" (dereferencing)
    }
    
    // member function (object behaviour)
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Department : "<<dep<<endl;
    }
};

// main function, creation of object and call the constructor
int main(){
    Teacher t1("yashodhan", "C++", "ComputerScience", 45000.0); // object creation and constructor call
    t1.getInfo();

    return 0;
}