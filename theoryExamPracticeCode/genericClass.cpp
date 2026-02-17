#include<iostream>
using namespace std;

template <class T>

class Sample{
    T data;
    public:
        Sample(T value){
            data = value;
        }
        void display(){
            cout<<"Data : "<<data<<endl;
        }
};

int main(){
    Sample<int> obj1(5);
    Sample<float> obj2(2.5);
    Sample<char> obj3('y');

    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}