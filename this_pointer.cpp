#include<iostream>
using namespace std;

class Student
{
    int age,marks;

    public:
        void getInfo(int age, int marks){
            this->age = age;
            this->marks = marks;
        }
        void display(){
            cout<<"Age of the student is : "<<age<<endl;
            cout<<"Marks obtained by the student in sirst IA:"<<marks;
        }

};

int main(){
        Student s1;
        s1.getInfo(22,95);
        s1.display();

    return 0;
}