// constructor Overloading : -
                /*the situation where we having the multiple constructor where they are taking the different arguments in types or numbers
                while creating an object we need to pass argument, to tell compiler which constructor we need to be called*/


#include<iostream>
using namespace std;

class Base{
    public:
        Base(int a, int b){
            cout<<"tow int int : "<<a*b<<endl;
        }
        Base(int a, int b, int c){
            cout<<"int, float constructor :"<<a*b*c<<endl;
        }
        
};

int main(){
    Base b(2,3);
    Base b2(2,4,1);

    return 0;
}