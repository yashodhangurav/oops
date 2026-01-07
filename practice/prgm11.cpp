#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;

    try{
        if(b == 0){
            cout<<"Zero division error!!"<<endl;
            throw 1;
        }
        cout<<"Division of the two numbers is : "<<a/b<<endl;
    }
    catch(int e){
        cout<<"denominator is zzeror and the we getting the error is "<< e<<endl;
    }
}