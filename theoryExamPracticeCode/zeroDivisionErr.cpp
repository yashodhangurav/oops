#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter the values of a and b : \t";
    cin>>a>>b;

    try{
        if(b == 0){
            throw 1;
        }else{
            cout<<"Result is : "<<a/b<<endl;
        }
    }catch(int err){
        cout<<"Error is : "<<err<<endl;
    }

    return 0;
}


