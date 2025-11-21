#include<iostream>
using namespace std;

class Person{
    protected:
        string name, address;
    public:
        void personDetails(){
            cout<<"Enter the name of the person :"<<endl;
            cin>>name;
            cout<<"Enter the address of the person: "<<endl;
            cin>>address;
        }
        void displayPerson(){
            cout<<"Name : "<<name<<endl;
            cout<<"Address :"<<address<<endl;
        }
};

class Employee{
    protected:
        string Eid;
        double salary;

    public:
        void employeeDetails(){
            cout<<"Enter the Eid of the Employee: "<<endl;
            cin>>Eid;
            cout<<"Enter the salary of the Employee: "<<endl;
            cin>>salary;
        }
        void displayEmployee(){
            cout<<"Eid = "<<Eid<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
};

class Manager : public Person, public Employee{
    protected:
        string name;
        double sal;
    public:
        void managerDetails(){
            cout<<"Enter the name of the Manager: "<<endl;
            cin>>name;
        }
        void calculateSal(){
            sal = salary + (salary * 0.1);
            cout<<"The salary with 10% of increment: "<<sal<<endl;
        }

};


int main(){
    Manager p1;
    p1.personDetails();
    p1.displayPerson();
    p1.employeeDetails();
    p1.displayEmployee();
    p1.managerDetails();
    p1.calculateSal();
    return 0;
}