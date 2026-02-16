// operator Overloading :-
                /*it is a concept where we are giving a special meaning to an operator, */

#include<iostream>
using namespace std;

class Time{
    int a, b,c;

    public:
        void getData(){
            cout<<"Enter the a , b, and c values : "<<endl;
            cin>>a>>b>>c;
        }
        void display(){
            cout<<a<<"\t"<<b<<'\t'<<c<<endl;
        }
        void operator -(){
            a = -a;
            b = -b;
            c = -c;
        }
};


int main(){

    Time t;
    t.getData();
    t.display();
    -t; // this will call the operator function and will negate the values of a, b, and c
    t.display();
    return 0;
}

