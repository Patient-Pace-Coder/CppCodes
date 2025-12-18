// #include<iostream>
// using namespace std;

// // int add( int x, int y = 4, int z = 5); // here y and z are default arguments

// int add( int x, int y = 4, int z = 5 ){
//     return x + y + z;
// }

// int main(){
//     cout << add(3,4,5)  << endl;
//     // cout << add(3,5) << endl; // will not work as we shouldn't skip the default argument if there's any non default argument to its right 

// }
//  /*
//   * RULES FOR DEFAULT ARGUMENTS
//   * 1. IF THERE ARE ANY NON-DEFAULT ARGUMENTS TO THE RIGHT OF DEFAULT ARGUMENTS THEN IN THE FUNCTION CALL WE CANNOT SKIP THE DEFAULT ARGUMENTS
//   * 2. If a parameter is given a default argument, all subsequent parameters (to the right) must also be given default arguments.
//   * 3. Once declared, a default argument can not be redeclared in the same translation unit. That means for a function with a forward declaration and a function definition, the default argument can be declared in either the forward declaration or the function definition, but not both.

// Default arguments can easily lead to ambiguous function calls:

// void foo(int x = 0)
// {
// }

// void foo(double d = 0.0)
// {
// }

// int main()
// {
//     foo(); // ambiguous function call

//     return 0;
// }

// */
