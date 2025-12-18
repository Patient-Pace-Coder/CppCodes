// #include<iostream>
// using namespace std;

// // void print( int& val ){
// //     cout << val << endl;
// // }

// void print( const int& val ){
//     cout << val << endl;
// }

// void print( int&& val ){ // this and above function are overloaded versions of each other
//     cout << val << endl;
// }

// int main(){

//     int x = 10; // x is a lvalue expression as it is an identity and it has a memory address
//     const double d = 1.2;// d is a lvalue expression

//     /*
//      * LVALUE EXPRESSION IS AN EXPRESSION WHICH IS USUALLY WRITTEN IN THE LEFT SIDE OF THE ASSIGNMENT OPERATOR,
//      * THE PROPERTIES OF LVALUE EXPRESSION IS IT SHOULD BE AN IDENTITY I.E. IT SHOULD HAVE A NAME AND A MEMORY ADDRESS
//      * SYMBOL FOR REPRESENTING LVALUE EXPRESSION IS '&'
//      *
//         USES OF '&' IN C++ :
//         1] ADDRESS-OF OPERATOR
//         int x = 10;
//         int* ptr = &x; // 'ptr' now holds the memory address of 'x'

//         2] LVALUE REFERENCE DECLARATOR
//         int x = 10;
//         int& ref = x; // 'ref' is now an alias for 'x',  so here ref takes the address of x so it means both ref and x are pointing to the same memory location
//         ref = 20;     // This changes the value of 'x' to 20

//         // int& ref_invalid = 5; // Error: cannot bind lvalue reference to an rvalue

//      *
//      * RVALUE EXPRESSION IS AN EXPRESSION WHICH IS USUALLY WRITTEN IN THE RIGHT SIDE OF THE ASSIGNEMTN OPERATOR,
//      * IT IS MORE LIKE A TEMPORARY OBJECT I.E. IT DOESN'T HAVE ANY MEMORY ADDRESS AND NAME

//         USES OF '&&' IN C++ :
//         1] SYMBOL FOR REPRESENTING RVLAUE EXPRESSION IS '&&'
//         bool a = true;
//         bool b = false;

//         if (a && b) {
//             // This block will not be executed
//         }

//         2] RVALUE REFERENCE DECLARATOR

//         int&& temp_ref = 5; // 'temp_ref' binds to the temporary rvalue '5'

//         // int x = 10;
//         // int&& ref_invalid = x; // Error: cannot bind rvalue reference to an lvalue

//     */

//     int y = 10; // here 10 is an rvalue expression
//     int z = y; // here z and y both are lvalue expressions
//     int b = (static_cast<int>(d)); // here static_cast<int>(d) is an rvalue expression and b is an lvalue expression


//     int& ref = y;
//     cout << ref << endl; // prints the value of ref i.e. the value of y
//     cout << &ref << endl; // prints the address of ref i.e. the address of y
//     cout << &x << endl; // prints the address of x
//     cout << *(&x) << endl; // prints the value of x i.e. * is the dereference operator

//     /*
//      * rules of lvalue
//      * 1] lvalues can be binded to lvalue or rvalues
//      * 2] lvalue references can be binede to lvalues or lvalue references
//      * 3] lvalue references can be binded to rvalue if the lvalue references is const
//      *
//      * rules of rvalue
//      * rvalues can only be binded to rvalues
//     */

//     int i = 10; // valid acc. 1]
//     print(i); // this is valid acc. 2]
//     print(10); // valid if lvalue reference is const acc. 3]

//     int& g = i;
//     print(g); // valid acc .2]



// // }
