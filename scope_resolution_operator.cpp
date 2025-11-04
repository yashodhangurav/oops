#include<iostream> //header file contains the defination of an object eg: cin,cout etc
using namespace std;// short form of the std is standard, namespace std contains the built-in classes and declared objects of the standard c++ librery

class Reactangle{

    int length, breath; // private members

    public:
    Reactangle(int a, int b){ // parameterized constructor
        length = a;
        breath = b;
    }

    void area(){
        cout<<"Area of the Reactangle is :"<< (length*breath)<<endl;
    }
    void perimeter();
};

void Reactangle::perimeter(){
    cout<<"Perimeter of the Rectangle is :"<< 2*(length+breath)<<endl;
}


int main(){
    Reactangle a(10,2);
    a.area();
    a.perimeter();
    return 0;
}