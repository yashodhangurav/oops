// #include<iostream>
// using namespace std;

// class Base{
//     int a,b;
//     public:
//         Base(){
//             cout<<"Base class constructure"<<endl;
//         }
//         ~Base(){
//             cout<<"Base class destructure"<<endl;
//         }
// };

// class derived : public Base{
//     public:
//         derived(){
//             cout<<"Derived constructire"<<endl;
//         }
//         ~derived(){
//             cout<<"derived destructure"<<endl;
//         }
// };


// int main(){
//     derived d;
//     return 0;
// }



// passing parameters to base class constructor

#include<iostream>
using namespace std;


class Base{
    int a;
    public:
        Base(int x){
            a = x;
            cout<<"Base class constructor"<<endl;
        }
};

class Base2{
    int b;
    public:
        Base2(int y){
            b = y;
            cout<<"Base2 class constructor"<<endl;
        }
};


class derived :  public Base2, public Base{
    int a,b,c;
    public:
        derived(int x, int y, int z) : Base(x), Base2(y){
            c  = z;
            cout<<"derived class constructor"<<endl;
        }
};

int main(){
    derived d(10,20,30);
    return 0;
}