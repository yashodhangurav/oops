#include<iostream>
using namespace std;

class student 
{
    int rno,marks;

    public:
        void getInfo(int rno, int marks){
            this->rno = rno;
            this->marks = marks;
        };
        void enterInfo(){
            cout<<"Enter roll number of the student: "<<endl;
            cin>>rno;
        
        }
};

int main(){
    student *ptr, s1;
    ptr = &s1;
    ptr->enterInfo();
    ptr->getInfo(20, 85);
    return 0;
}