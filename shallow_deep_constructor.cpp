#include<iostream>
using namespace std;
class student{
    public :
      string name;
      double* cgpaPtr; // created one pointer variable named cgpa

      // paramatized constructor
      student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double; // here we are allocating memory in heap for cgpa, coz at starting pointer variable points on nothing
            *cgpaPtr = cgpa; // dereference the cgpaPtr and store the value of cgpa
      }

      // // this is a copy constructor which we created 
      // student(student &obj){    //here we use call by reference means passing address of actual obj
      //   this->name = obj.name;
      //   this->cgpaPtr = obj.cgpaPtr; // shallow copy
      // }

      // deep copy
      student(student &obj){    //here we use call by reference means passing address of actual obj
            this->name = obj.name;
            cgpaPtr = new double; //again we allocate the memory for a cgpaPtr
            *cgpaPtr = *obj.cgpaPtr; //here we storing orgObj value in cgpaPtr
          }
      
      void getInfo(){
            cout<<"name : "<<name<<endl;
            cout<<"cgpa : "<< *cgpaPtr <<endl; //dereferencing cgpaPtr and finding the cgpa value
      }
};

int main(){
    student s1("Rahul Kumar", 9.2);
    student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 8.0;
    s1.getInfo();
    return 0;
}



//generally memories are allocated in stack (statically allocated memory) ex. "int a;" this memory is allocated at compile time
// when we created a memory using a "new" keyword it will allocate the memory at run time , means such memories are dynamically allocated memory
// dynamically memory is allocated in heap (heap is special area of memory) called as dynamically allocated memory
// and such time we face problme with shallow copy
// when we have dynamically allocated memory then we prefer to use "deep copy" coz it will