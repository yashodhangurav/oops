#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public: 
    Teacher( string n , string d, string s, double sal) // parameterized constructor
    { //assigning values to data members
        name = n;
        dep = d;
        subject = s;
        salary = sal;
    }
    string name;
    string subject;
    string dep;
    string salary;
 

    // // methods/ member functions
    // void changeDep(string newDep)
    // {
    //     dep = newDep;
    // }

   void getinfo(){
    cout<<"name:"<<name<<endl;
    cout<<"subject:"<<subject<<endl;
   }
};



//above is the class definition
int main() {
    Teacher t1("shraddha", "computerScience", "oops", 25000.0);            // creating an object of Teacher class named t1 , and automatically calls the constructor
    t1.getinfo();
    return 0;
}