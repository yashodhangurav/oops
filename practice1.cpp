#include<iostream>
using namespace std;

class SimpleInterest{

    int principal, rate, time;

    public:
        SimpleInterest(int p, int r, int t){
            principal = p;
            rate = r;
            time = t;
        };

        void display(){
            cout << "Simple Interest is: " << (principal * rate * time)/100<<endl;
        }
};

int main(){
    int rate, time, principal;

    cout<<"Enter the Principal ammount: "<<endl;
    cin>>principal;
    cout<<"Enter the Rate of interest: "<<endl;
    cin>>rate;
    cout<<"Enter the Time period: "<<endl;
    SimpleInterest s1(1200, 2, 4);
    s1.display();

    return 0;
}