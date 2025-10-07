#include <iostream>
using namespace std;

class BaseClass {

    public:
    int a;
    void showBase() {
        cout<<"BaseClass function "<<a<<endl;
    }
};

class DerivedClass : public BaseClass {     // Derived class inheriting Base class
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




    DerivedClass * Derived_Ptr;
    // Derived_Ptr = Base_Obj; // This will throw an error as we cannot point derived class pointer to base class object
   Derived_Ptr = &Derived_Obj; // Pointing derived class pointer to derived class object
   Derived_Ptr->a= 100; // Accessing base class member using derived class pointer, this is allowed
   Base_Ptr->showBase();
   
    return 0;
}

// when we create a pointer of base class and point it to derived class object,
// then we can only access the members of base class using that pointer.
// To access the members of derived class, we need to type cast the base class pointer to derived class pointer.
// This is known as "downcasting".


// Note: Downcasting is generally not recommended unless you are sure of the type of object being pointed to.

// if we create a pointer of derived class and point it to base class object, it will throw an error.

