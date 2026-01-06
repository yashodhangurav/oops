#include<iostream>
using namespace std;

int main(){

    int age = 55;

    try{
        if(age>=18){
            cout<<"you are eligible to vote"<<endl;
        }else{
            throw(age);
        }
    }
    catch(int e){
        cout<<"You are not eligible for vote"<<"  "<< e<<endl;
    }


    return 0;
}