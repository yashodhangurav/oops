#include<iostream>
using namespace std;

class Time{
    int hrs,min,sec;

public: 
    Time(){
        hrs=min=sec=0;
    };
    Time(int a, int b, int c){
        hrs = a;
        min = b;
        sec = c;
    };

    void display(){
        cout<<hrs<<":"<<min<<":"<<sec<<endl;
    };

    Time operator +(Time);
};

Time Time :: operator + (Time t){
    Time temp;

    temp.sec = sec + t.sec;
    temp.min = temp.sec/60;
    temp.sec = temp.sec%60;

    temp.min = temp.min + min + t.min;
    temp.hrs = temp.min / 60;
    temp.min = temp.min % 60;

    temp.hrs = temp.hrs + hrs + t.hrs;

    return(temp);
};

int main(){

    Time T1(2,54,35);
    Time T2(4,45,14);
    Time T3;

    T3 = T1+T2;

    cout<<"T1= ";
    T1.display();

    cout<<"T2= ";
    T2.display();

    cout<<"T3= ";
    T3.display();

    return 0;
}