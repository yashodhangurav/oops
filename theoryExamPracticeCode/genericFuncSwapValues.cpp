// Generic Function :-
                /*the function which operates on different data types without being rewritten for each data types called as generic function
                generic function implemented using the function template*/

#include<iostream>
using namespace std;

template<class T>

void swapNumber(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y;
    float p = 1.5, q = 2.5;
    cout<<"Enter the x and y values: "<<endl;
    cin>>x>>y;

    cout<<"Before swaptinf x = "<<x<<" and  y = "<<y<<endl;
    swapNumber(x,y);
    cout<<"After swapping :  x = "<<x<<" and y = "<<y<<endl;

    cout<<"\n\n Before swapping p =  "<<p<<" and q = "<<q<<endl;
    swapNumber(p,q);
    cout<<"After swapping : p = "<<p<<" and q = "<<q<<endl;

    return 0;
}