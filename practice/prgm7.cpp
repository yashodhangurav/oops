// multiple inheritance in c++

#include<iostream>
using namespace std;

class M{
    protected:
        int a;
    public:
        void get_m(){
            cout<<"Enter the M value : ";
            cin>>a;
        }
};

class N{
    protected:
        int b;
    public:
        void get_n(){
            cout<<"Enter the N values: "<<endl;
            cin>>b;
        }
};

class P : public M, public N{
    public:
        void add(){
            cout<<"The addition is : "<< a+b <<endl;
        }
};

int main(){

    P obj;
    obj.get_m();
    obj.get_n();
    obj.add();

    return 0;
}