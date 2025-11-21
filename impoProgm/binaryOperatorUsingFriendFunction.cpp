#include<iostream>
using namespace std;

class Complex{
    int real,img;

    public:
        Complex(){
            real = img = 0;
        }
        Complex(int r, int i){
            real = r;
            img = i;
        }
        void display(){
            cout<<real<<"+i"<<img<<endl;
        }

        friend 

};

int main(){

    return 0;
}