#include<iostream>
using namespace std;


class Student{
    private:
        int rno;
        string name;
        float marks1, marks2;

    public:
        Student(int r, string n, float m1, float m2){
            name = n;
            rno = r;
            marks1 = m1;
            marks2 = m2;
        }

        void put_details(){
            cout<<"Student name:"<<name<<endl;
            cout<<"student roll number:"<<rno<<endl;
            cout<<"marks of the subject 1:"<<marks1<<endl;;
            cout<<"marks of the subject 2:"<<marks2<<endl;;       
        }
};

int main(){
    Student s1(101, "Yashodhan", 85.9, 98.2);
    s1.put_details();

    Student s2(102, "Shreyash", 99.2, 78.3);
    s2.put_details();
    return 0;
}