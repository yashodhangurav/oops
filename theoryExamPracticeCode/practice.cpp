#include<iostream>
using namespace std;

class Base{

    private:
        int a = 5, b = 4, sum;
        friend void display(Base);
};

void display(Base b){
    cout<<"Sum of the two numbers is : "<<b.a+b.b<<endl;
}


int main(){
    Base b;
    display(b);
    return 0;
}