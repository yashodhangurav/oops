// prefix and postfix increment and decrement using operator overloading


#include<iostream>
using namespace std;


class prefixPostfix{
    int a;
    public:
        prefixPostfix(){
            cout<<"Enter a number : ";
            cin>>a;
        };
        void operator ++(){
            cout<<"Initial value is : "<<a<<endl;
            ++a;
            cout<<"after prefix increment :"<<a<<endl;
        }
        void operator --(){
            cout<<"Initial value is : "<<a<<endl;
            --a;
            cout<<"after prefix decrement :"<<a<<endl;
        }
        // postfix
        void operator ++(int){
            cout<<"Initial value is : "<<a<<endl;
            a++;
            cout<<"after post increment :"<<a<<endl;
        }
        void operator --(int){
            cout<<"Initial value is : "<<a<<endl;
            a--;
            cout<<"after post increment :"<<a<<endl;
        }
};

int main(){

    prefixPostfix obj;
    ++obj; // prefix increment
    --obj; // prefix decrement
    obj++; // postfix increment
    obj--; // postfix decrement
    return 0;
}