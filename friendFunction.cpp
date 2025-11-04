#include<iostream>
using namespace std;

class Base{
    private:
    int num;

    public:
    friend void showNum(Base obj); // Friend function declaration
};

void showNum(Base obj){
    cout<<"number: "<<obj.num<<endl; // Accessing private member
};

int main(){
    Base b;
    showNum(b); // Calling friend function
    return 0;
}