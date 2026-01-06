#include<iostream>
using namespace std;


class Base{
    private:
        int i;
    public:
        Base(int x){
            i = x;
            cout<<"The value of Base parameter is : "<<i<<endl;
            cout<<"Base class constructor is called"<<endl;
        }
};

class Derived1 : public Base{
    private:
        int j;
    public:
        Derived1(int x, int y) : Base(x){
            j = y;
            cout<<"The value of derived class parametr is : "<<j<<endl;
            cout<<"Derived class constructor is called<<endl";
        }

};

int main(){
    Derived1 d(10,12);
    return 0;
}