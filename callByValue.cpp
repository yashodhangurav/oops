#include<iostream>
using namespace std;

class Student {
    public :
        char name[20];
        float mks;

        void total( char a[20], float b){
            name[20] = a[20];
            mks = b;
            cout<<"name of the student:"<<name<<endl;
            cout<<"marks of the student:"<<mks<<endl;
        }
};


int main(){
    Student s1;
    s1.total(yashodhan, 85.2);
}