#include<iostream>
using namespace std;

class Base{
    int a;
    public:
        Base(int n){
            a = n;
        }
        friend void display(Base obj);
};

void display(Base obj){
    cout<<obj.a;
}

int main(){
    Base b(5);
    display(b);
    return 0;
}