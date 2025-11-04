#include<iostream>
using namespace std;

class Complex{

    int real, img;

    public: 
        Complex(){
            real = img = 0;
        };
        Complex(int a, int b){
            real = a;
            img = b;
        };
        void display(){
            cout<<real<<"+i"<<img<<endl;
        };

        Complex operator +(Complex);
};

Complex Complex :: operator +(Complex c){
    Complex temp;
    temp.real = c.real + real;
    temp.img = c.img + img;

    return(temp);
};

int main(){
    Complex C1(20,30);
    Complex C2(10,20);
    Complex C3;

    C3 = C1+C2;

    cout<<"C1 = ";
    C1.display();

    cout<<"C2 = ";
    C2.display();

    cout<<"C3= ";
    C3.display();
    
    return 0;
}