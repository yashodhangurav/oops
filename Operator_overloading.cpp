#include<iostream>
using namespace std;

class Numbers{
    int x,y,z;
    public:
        void accept(){
            cout<<"\nEnter Three numbers: ";
            cout<<"\n-------------------------";
            cout<<"\nFirst Number: ";
            cin>>x;
            cout<<"\nSecond Number: ";
            cin>>y;
            cout<<"\nThird Number: ";
            cin>>z;
        }
        void display(){
            cout<<"\nThe numbers are: ";
            cout<<"\n-------------------------";
            cout<<"\nFirst Number: "<<x;
            cout<<"\nSecond Number: "<<y;
            cout<<"\nThird Number: "<<z;
        }
        void operator-(){
            x = -x;
            y = -y;
            z = -z;
        }

};

int main(){
    Numbers num;
    num.accept();
    cout<<"\n Numbers are before negation: ";
    num.display();
    -num;
    cout<<"\n Numbers are after negation: ";
    num.display();
    return 0;
}