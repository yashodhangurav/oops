#include<iostream>
using namespace std;

class Bank{

    private:
        int acno;
        string name;
        float bal;
    public:
        Bank(int a, string n, float b){
            acno = a;
            name = n;
            bal = b;
        }

        void deposit(){
            float damt;
            cout<<"Enter the deposit ammmount:\n";
            cin>>damt;

            bal += damt;
        }

        void withdraw(){
            float wamt;
            cout<<"Enter the withdraw ammount:\n";
            cin>>wamt;

            if(wamt> bal){
                cout<<"Invalid entered ammount!!!"<<endl;
            }

            bal -= wamt; 
        }


        void display(){
            cout<<"_______________________"<<endl;
            cout<<"Account number: "<<acno<<endl;
            cout<<"Account holder name: "<<name<<endl;
            cout<<"Account balance: "<<bal<<endl;
        }

        void invalid(){
            if(bal<500){
                cout<<"Invalid balance!!"<<endl;
            }
        }
};

int main(){

    Bank c1(22,"yashodhan", 600.2);
    c1.invalid();
    c1.deposit();
    c1.withdraw();
   
    c1.display();
    

    return 0;
}