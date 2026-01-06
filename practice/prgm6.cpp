#include<iostream>
using namespace std;

class Base{
    private:
        int a, b, c;

    public:
        Base(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
        }

        void operator -(){
            a = -a;
            b = -b;
            c = -c;
        }

};

int main(){

    Base obj(10,20,30);
    obj.display();
    -obj;
    obj.display();
    return 0;
}