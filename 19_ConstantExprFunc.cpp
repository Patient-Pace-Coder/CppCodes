#include<iostream>
using namespace std;

/*
 *  constexpr functions are functions that can be evaluated at compile time if all of their arguments are known at compile time.
 *  However, they can also be called at runtime if their arguments are not constant expressions. This flexibility is what makes them so useful.
 *  A constexpr function can have both constant and non-constant arguments, but it will only produce a compile-time constant if its arguments are
 *  compile-time constants.
 *
 *  consteval functions (introduced in C++20) are functions that must be evaluated at compile time. The compiler is mandated to execute them during
 *  compilation. This means that every argument passed to a consteval function must be a constant expression, and the return value must also be a
 *  compile-time constant. They cannot be called at runtime.
 *
 *  Example code :

 consteval int goo(int c)    // c is not constexpr, and cannot be used in constant expressions
{
    return c;
}

constexpr int foo(int b)    // b is not constexpr, and cannot be used in constant expressions
{
    constexpr int b2 { b }; // compile error: constexpr variable requires constant expression initializer

    return goo(b);          // compile error: consteval function call requires constant expression argument
}

int main()
{
    constexpr int a { 5 };

    std::cout << foo(a); // okay: constant expression a can be used as argument to constexpr function foo()

    return 0;
}


// constexpr functions are implicitly inline

The inline specifier tells the compiler that a function can be defined in multiple places without causing a linker error.
This implicit inline behavior allows you to define constexpr functions in a header file, include that header in multiple
source files, and use them for compile-time evaluation without violating the one-definition rule.

header.h

// Full definition of the constexpr function
constexpr int square(int x) {
    return x * x;
}

file1.cpp
#include "header.h"
// Now the compiler can see the full definition and evaluate `square(5)` at compile-time.
int main() {
    constexpr int result = square(5);
    // ...
}

file2.cpp
#include "header.h"
// The same applies here.
int another_func() {
    return square(10); // The compiler can evaluate this as well.
}


/*
 * Ways to tell the compiler that we need a function to be evaluated at compile time
 * 1. We should declare a constexpr variable and then equate that to the function call, this tells the compiler to evaluate our function at compile time
 * 2. we use the consteval keyword in the function declaration which means the function must be evaluated at compile time only
 *
*/


// double circumference1( double radius ){
//     constexpr double pi = 3.1415926;
//     return 2 * pi * radius;
// }

// constexpr double circumference2( double r ){ // constexpr function to be evaluated at compile time , all the values need to be available at compile time if not then it will be executed at runtime
//     constexpr double pi = 3.1415926;
//     return 2 * pi * r;
// }
// int main(){

//     // constexpr double circumference = circumference1(18.3473); // this will result in error as constexpr should be initialized with constexpression but the function returns a double

//     constexpr double circumference = circumference2(18.3473);
//     cout << circumference << endl;
// }
