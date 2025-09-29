#include<iostream>
using namespace std;

class Book
{
    int id, price;

    public:
        void setId(void){
            cout<<"\n Enter the price of the book : "<<endl;
            cin>>price;
            cout<<"\n enter the book id: "<<endl;
            cin>>id;
        };
        void getId(void){
            cout<<"Book Id :"<<id<<endl;
            cout<<"book price is : "<<price;
        }
};

int main(){
    Book arr[5];

    for(int i=0; i<6; i++){
        arr[i].setId();
        arr[i].getId();
    }
    return 0;
}