// Sum of the complex number

#include<iostream>
using namespace std;

class Complex{
    private:
        float real, img;
    public:
        Complex(){
            real = img = 0;
        }
        Complex(float r, float i){
            real = r;
            img = i;
        }
        Complex(Complex C1, Complex C2){
            real = C1.real + C2.real;
            img = C1.img + C2.img;
        }
        void display(){
            cout<<real<<"+i"<<img<<endl;
        } 
};

int main(){
    Complex C1(2.5,3.5), C2(5.4,5.3);
    Complex C3(C1,C2);
    C3.display();
    return 0;
}