#include <iostream>
using namespace std;

class BaseClass {

    public:
    int a;
    void showBase() {
        cout<<"BaseClass function "<<a<<endl;
    }
};

class DerivedClass : public BaseClass {
    public:
    int b;
    void showBase() {
        cout<<"Derived Class function "<<b<<endl;
    }
};

int main() {

    BaseClass * Base_Ptr;
    BaseClass Base_Obj;
    DerivedClass Derived_Obj;

    Base_Ptr = &Derived_Obj; // Pointing base class pointer to derived class object

    Base_Ptr->a = 1522;
    // Base_Ptr->b = 15; // This will throw an error as BaseClass doesn't have member 'b'

    Base_Ptr->showBase();

    ((DerivedClass*)Base_Ptr) -> b =15; // Type casting Base_Ptr to DerivedClass pointer
    ((DerivedClass*)Base_Ptr) -> showBase();

    return 0;
}

// when we create a pointer of base class and point it to derived class object,
// then we can only access the members of base class using that pointer.
// To access the members of derived class, we need to type cast the base class pointer to derived class pointer.
// This is known as "downcasting".