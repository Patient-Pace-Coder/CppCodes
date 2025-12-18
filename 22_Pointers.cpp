// #include<iostream>
// #include<typeinfo>
// using namespace std;


// int main(){

//     int z = 10;
//     cout << z << endl;
//     cout << &z << endl; // '& (reference type)' is used to get the address of a variable so this prints the address of the x
//     cout << *(&z) << endl; // '* (dereference operator)' is used to dereference the reference to get the value stored in that memory address, so it prints the value of x

//     // Intro to pointer
//     // pointer is something which stores the address of the variable so that when we need the address then we can make use of that pointer

//     int* ptr = &z;
//     cout << ptr << endl; // prints the address of x , this line is same as line 10
//     cout << *ptr << endl; // we are using dereference operator to extract the value of x, this line is same as line 11

//     // invalid assignment
//     // int* ptr{ 5 }; // not okay
//     // int* ptr{ 0x0012FF7C }; // not okay, 0x0012FF7C is treated as an integer literal

//     /*
//      * ASSIGNMENT TO THE POINTERS CAN BE DONE IN TWO WAYS
//      * 1] TO CHANGE WHAT THE POINTER IS POINTING AT( BY ASSIGNING THE POINTER A NEW ADDRESS )
//      * 2] TO CHANGE THE VALUE BEING POINTED AT(BY USING DEREFERENCE OPERATOR WE CAN CHANGE THE VALUE)
//     */

//     int y = 15;
//     ptr = &y; // demonstration of 1]

//     cout << &y << endl;
//     cout << ptr << endl;
//     cout << y << endl;
//     cout << *ptr << endl;


//     *ptr = 20; // demonstration of 2]
//     cout << y << endl;
//     cout << *ptr << endl;

//     cout << &ptr << endl; // prints the memory address where it is stored, not the address it is pointing to

//     int& ref1 = y; // y = 20;
//     ref1++; // y = 21
//     cout << ref1 << endl;

//     // USEFUL CODE
//     int x = 5 ;
//     int& ref = x ;  // get a reference to x
//     int* ptr1 = &x ; // get a pointer to x

//     std::cout << x;
//     std::cout << ref;  // use the reference to print x's value (5)
//     std::cout << *ptr1 << '\n'; // use the pointer to print x's value (5)

//     ref = 6; // use the reference to change the value of x
//     std::cout << x;
//     std::cout << ref;  // use the reference to print x's value (6)
//     std::cout << *ptr1 << '\n'; // use the pointer to print x's value (6)

//     *ptr1 = 7; // use the pointer to change the value of x
//     std::cout << x;
//     std::cout << ref;  // use the reference to print x's value (7)
//     std::cout << *ptr1 << '\n'; // use the pointer to print x's value (7)

//     /*
//      *
//      * POINTERS VS REFERENCES
//      *
//      * 1] POINTERS ARE OBJECTS I.E. THEY HAVE A MEMORY ADDRESS
//      *    REFERENCES ARE NOT OBJECTS I.E. THEY DON'T HAVE A MEMRORY ADDRESS
//      *
//      * 2] POINTERS CAN BE REASSIGNED, BUT REFERENCE TYPE CANNOT BE REASSIGNED
//      * 3] POINTERS CAN BE NULL BUT REFERENCE TYPE CANNOT BE NULL
//     */

//     // proof of 1]

//     cout << "Address of x is : " << &x << endl;
//     cout << "Address of ptr is : " << &ptr << endl; // bcz ptr is an object it has an address in memory
//     cout << "Address of ref is : " << &ref << endl; // bcz ref is not an object it doesn't has its own memory
//     // in address instead it is pointing to address of x which is an

//     // proof of 2]

//     ptr1 = &y; // this is valid as ptr can be assigned
//     // &ref = y; // this is invalid as reference types cannot be reassigned

//     // proof of 3]

//     int* ptr2{}; // ptr2 is a null pointer, not pointing to any address and it is valid
//     // int& ref2{}; // this gives an error as ref2 is not an independent object and so it needs to be initialized

//     cout << ptr2 << endl; // prints 0
//     ptr2 = nullptr; // this is also valid

//     {
//         int w = 11;
//         ptr1 = &w;
//     }
//     cout << ptr1 << endl; // ptr1 is a dangling pointer i.e. actually it should point to address of z but since z is out of scope it cannot point to z
//     cout << *ptr1 << endl;

//     // its better to equate the dangling pointer to nullptr to avoid undefined behaviour
//     ptr1 = nullptr;

//     cout << typeid(x).name() << endl;
//     cout << typeid(ref).name() << endl;
//     cout << typeid(ptr).name() << endl;
// }
