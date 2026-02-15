// pointers to Object :- 
                    /*it is a pointer variable which stores the address of an object of a class */
#include<iostream>
using namespace std;

class Student{
    int rollNo;
    public:
        void setRoll(int r){
            rollNo = r;
        }
        void display(){
            cout<<"Student roll number is : "<<rollNo<<endl;
        }
};

int main(){
    Student obj, *p;
    obj.setRoll(101);
    obj.display();

    p = &obj; // storing the address of object in pointer variable

    p->display(); // accessing the member function using pointer variable with the help of arrow operator
}