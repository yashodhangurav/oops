// Arrays of objects :- 
                /*it is an array , where the each element is an object of the same class, and it is stored in contiguous memory location*/ 


#include<iostream>
using namespace std;

class Book{
    int id;
    int price;
    public:
        void setData(){
            cout<<"Enter the id and the price of the book: ";
            cin>>id>>price;
        }
        void displayData(){
            cout<<"The id of the book is : "<<id<<endl;
            cout<<"The price of the book is :"<<price<<endl;
        }
};


int main(){

    Book b[3]; // array of objects

    for(int i = 0; i<3; i++){
        b[i].setData();
        b[i].displayData();
    }


    return 0;
}