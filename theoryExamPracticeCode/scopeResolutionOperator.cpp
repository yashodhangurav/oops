// #include<iostream>
// using namespace std;

// int x = 5;

// int main(){

//     int x = 50;
//     cout<<x<<endl;
//     cout<<::x<<endl;
//     return 0;
// }

// ---------------------- Also --------------------

#include<iostream>
using namespace std;

class Base{

    int a = 10, b = 40;

    public:
        void display();
            
};

void Base::display(){
    cout<<"value of the a is: "<<a<<endl;
    cout<<"value of the b is : "<<b<<endl;
};

int main(){
    Base b;
    b.display();
}