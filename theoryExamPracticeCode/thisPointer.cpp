// This pointer :
        /*this pointer holds the address of a current obj /
         its opoints to the current object of an class*/

#include<iostream>
using namespace std;

class Demo{

    int num;
    char ch;

    public:
        void setData(int num, char ch){
            this->num = num;                //this is one of the use of this pointer to resolve the name conflict between local variable and data member
            this->ch = ch;
        }
        void display(){
            cout<<"num : "<<num<<endl;
            cout<<"ch :"<<ch<<endl;
        }
};

int main(){

    Demo d;
    d.setData(20, 'y');
    d.display();
    return 0;
}