#include<iostream>
using namespace std;

class A{
    public:
        int x;
};
class B : virtual public A{
    public:
        int y;
};
class C : virtual public A{
    public:
        int z;
};
class D : public B, public C{
    public:
        void setValues(){
            x = 5;
            y = 3;
            z = 7;
        }
        void add(){
            int s;
            s = x+y+z;
            cout<<"sum is : "<<s<<endl;
        }

};

int main(){
    D a1;
    a1.setValues();
    a1.add();
    return 0;
}