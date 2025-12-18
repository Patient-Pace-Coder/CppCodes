// #include <iostream>
// using namespace std;


// int value = 10;

// void foo(){
//     cout << value << endl; //The global variable value is printed
// }

// int main()
// { // outer block
//     int apples { 5 }; // here's the outer block apples

//     { // nested block
//         // apples refers to outer block apples here
//         std::cout << apples << '\n'; // print value of outer block apples

//         int apples{ 0 }; // define apples in the scope of the nested block

//         // apples now refers to the nested block apples
//         // the outer block apples is temporarily hidden

//         apples = 10; // this assigns value 10 to nested block apples, not outer block apples

//         std::cout << apples << '\n'; // print value of nested block apples
//     } // nested block apples destroyed


//     std::cout << apples << '\n'; // prints value of outer block apples

//     // Similar to how variables in a nested block can shadow variables in an outer block,
//     // local variables with the same name as a global variable will shadow the global variable wherever the local variable is in scope

//     cout << value << endl; //Global variable value is printed
//     int value = 7;
//     value++;

//     cout << value << endl; // Local variable value is printed

//     foo();

//     // if we want to explicitly use the global variable then since the global variable is a part of global namespace,we can use the scope operator(::)

//     ++(::value );
//     cout << (::value) << endl;// here the value printed is of global variable

//     return 0;
// } // outer block apples destroyed
