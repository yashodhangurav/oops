#include<iostream>
using namespace std;


int add(int a, int b) {
    return a+b;
}

int add(int a, int b, int c) {
    return a+b+c;
}

int add(int a, int b, int c, int d) {
    return a+b+c+d;
}

int main() {

    int a,b,c,d;

    cout <<"Enter the numbers to be added: "<<endl;
    cin>>a>>b;
    cout<<"sum of the the provided numbers are :"<<add(a,b);
    return 0;
}