

// // ------------------------------------------------------------------pass by value :-

// #include<iostream>
// using namespace std;

// class Base{
//     int marks;

// public:
//     Base(int m){
//         marks = m;
//     }

//     // Pass by value
//     void change(Base obj){
//         obj.marks = 90;
//         cout << "Inside function : " << obj.marks << endl;
//     }

//     void show(){
//         cout << "Outside function : " << marks << endl;
//     }
// };

// int main(){

//     Base obj(50);

//     obj.change(obj);   // Pass by value
//     obj.show();        // Original object remains unchanged

//     return 0;
// }


// -----------------------------------------------pass by reference : -

// #include<iostream>
// using namespace std;

// class Base{
//     int marks;

//     public:
//         Base(int m){
//             marks = m;
//         }
//         void display(Base &obj){
//             obj.marks = 90;
//             cout<<"Inside the function :"<<obj.marks<<endl;
//         }
//         void show(){
//             cout<<"Outside the function : "<<marks<<endl;
//         }
// };

// int main(){

//     Base obj(510);
//     obj.display(obj);   // Pass by reference
//     obj.show();
//     return 0;
// }


// --------------------------------------------------------pass by address:-

#include<iostream>
using namespace std;

class Base{

    int marks;
    public:
        Base(int m){
            marks = m;
        }
        void display(Base *ptr){
            ptr->marks = 90;
            cout<<"Inside the function :"<<ptr->marks<<endl;
        }
        void show(){
            cout<<"Outside the function : "<<marks<<endl;
        }
};

int main(){

    Base obj(50);
    obj.display(&obj);
    obj.show();
    return 0;
}
