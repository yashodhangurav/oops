#include<iostream>
using namespace std;

class Base{

    public:

    void sum(int a, int b){
        cout<<"Sum of the integers: "<< a+b<<endl;
    }

    void sum(double a, double b){
        cout<<"Sum of the float numbers : "<< a+b <<endl;
    }

    void sum(int a, float b, int c){
        cout<<"Sum of the three numbers is :"<< a+b+c <<endl;
    }
};


int main(){

    Base obj1;
    Base obj2;

    obj1.sum(5,2);
    obj1.sum(2.5, 5.2);
   
    return 0;
};