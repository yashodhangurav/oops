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
    Teacher (string name, string subject, string dep, double salary){ 
        this->name = name;         
        this->subject = subject;
        this->dep = dep;
        this->salary = salary;
    }

    // creating own custome copy constructor
    Teacher(Teacher &orgObj){ //here using call by reference , means passing actual obj not copy
        cout<<"Iam custom copy constructor"<<endl;
        this->name = orgObj.name;
        this->subject = orgObj.subject;
        this->dep = orgObj.dep;
        this->salary = orgObj.salary;
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
    // t1.getInfo();
    Teacher t2(t1); //custome copy constructor -invoke (this is shallow copy)
    t2.getInfo();

    return 0;
}