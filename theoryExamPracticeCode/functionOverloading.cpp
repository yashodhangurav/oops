// function overloading :-
            /*Having the multiple functions with the same name but different in parameter type, sequence and numbers called function overloading
            it is generally a feature of the c++ where it will improve the readability of the code 
            and also helps to programers to need not remember various name of the function*/

#include<iostream>
using namespace std;

class Base{

    public:
        void add(int a, int b){
            cout<<"int int Sum :"<<a+b<<endl;
        }
        void add(int a, float b){
            cout<<"int float sum : "<<a+b<<endl;
        }
        void add(float a, float b, float c){
            cout<<"3 paramers float sum : "<<a+b+c<<endl;
        }
};

int main(){

    Base b;
    b.add(5,2);
    b.add(4.2,1.0,8.0);

    return 0;
}