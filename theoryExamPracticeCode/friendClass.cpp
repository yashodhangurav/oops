#include<iostream>
using namespace std;

class test1{
    int a, b;

    public:
      void get(){
        cout<<"Enter Number: "<<endl;
        cin>>a>>b;
      }
      friend class test2;
};

class test2{
    test1 t1;

    public:
        void get(){
            t1.get();
            cout<<"a : "<<t1.a<<endl;
            cout<<"b : "<<t1.b<<endl; 
        }
};

int main(){

    test2 t2;
    t2.get();

    return 0;
}