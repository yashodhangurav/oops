#include<iostream>
using namespace std;

class Base{
    int a, b, sum;

    public:
        Base(int x, int y){
            x = a,
            y = b;
            cout<<"Base class constructor"<<endl;
        }
        ~Base(){
            cout<<"Base class destructor!!"<<endl;
        };

};

int main(){

    Base a(5,6);

    return 0;
}