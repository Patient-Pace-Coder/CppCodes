#include <iostream>
#include <cmath> // include this header file to use the built in functions in the cmath header file
#include <algorithm> // for std::max

using namespace std;

void greet( string name ); // forward declaration of the function or also called as function prototype , name is the parameter and the value passed is the argument
void print(int x); // print now takes an int parameter
int five1();

constexpr int five2(){
    return 5;
}
const string& getName();



// Return true if the difference between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

// Return true if the difference between a and b is less than or equal to absEpsilon, or within relEpsilon percent of the larger of a and b
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    // Check if the numbers are really close -- needed when comparing numbers near zero.
    if (std::abs(a - b) <= absEpsilon)
        return true;

    // Otherwise fall back to Knuth's algorithm
    return approximatelyEqualRel(a, b, relEpsilon);
}

int main()
{
    // cout << "Hello World!" << endl;
    greet("rahul");

    // { sizeof function }

    int n1;
    cout << "size of n in terms of bytes is : " << sizeof(n1) << endl;

    float n2;
    cout << "size of n in terms of bytes is : " << sizeof(n2) << endl;

    double n3;
    cout << "size of n in terms of bytes is : " << sizeof(n3) << endl;

    long int n4;
    cout << "size of n in terms of bytes is : " << sizeof(n4) << endl;

    long long int n5;
    cout << "size of n in terms of bytes is : " << sizeof(n5) << endl;

    char n6;
    cout << "size of n in terms of bytes is : " << sizeof(n6) << endl;

    string n7;
    cout << "size of n in terms of bytes is : " << sizeof(n7) << endl;

    // { bool }

    cout << true << endl; // prints 1
    cout << false << endl; // prints 0

    // we have to enable the boolalpha
    cout << boolalpha;

    cout << true << endl; // prints true
    cout << false << endl;// prints false

    // code to disable the boolalpha
    cout << noboolalpha;

    // { character }

    char ch = 65;
    cout << ch << endl;

    char ch1 = 'A';
    cout << ch1 << endl;


    // assume user enters "a b" : cin skips the whitespace entered in the input
    // char ch4;
    // cin >> ch4;
    // cout << "The character you entered is " << ch4 << endl; // it will print "a"

    // cin >> ch4;
    // cout << "The character you entered is " << ch4 << endl; // it skips the whitespace and it will print "b"

    // assume user enters "a b" : cin.get() doesn't skip the whitespace entered in the input
    // char ch3;
    // cin.get(ch3);
    // cout << "The character you entered is " << ch3 << endl; // it will print "a"

    // cin.get(ch3);
    // cout << "The character you entered is " << ch3 << endl; // it will print " "

    // cin.get(ch3);
    // cout << "The character you entered is " << ch3 << endl; // it will print "b"

    // { Type casting }

    print(5.5); // warning: we're passing in a double value, c++ converts it implicitly but there's a risk of 
    // losing the data
    char ch6 = 97;
    cout << ch6 << endl;
    cout << "The ascii value of " << ch6 << " is " << ch6 + 0 << endl;

    // for explicity conversion, we use static_cast<int>(expression) : here we won't get any warnings as conversion 
    // is done on our wish
    print(static_cast<int>(5.5));

    char ch5 = 97;
    cout << ch5 << endl;

    cout << "The ascii value of " << ch5 << " is " << static_cast<int>(ch5) << endl;

    // { optimization techniques used by compiler but it depends on the platform,compiler version and etc}

    // constant propagation

    int x = 7 ;
    cout << x << '\n'; // since the compiler has to go to memory twice,compiler fetches the value 7 and replaces 
    // x by 7 in this line

    // constant folding

    int y = 3 + 4; // if the program is run multiple times, then compiler has to spend some cycles for calculation 
    // of 3 + 4 but constant folding will replace 3 + 4 with 7 in the first time.
    cout << y << endl;

    // dead code elimination

    int z = 4;
    cout << 7 << endl; // here z is of no use so the compiler eliminates the variable z as it takes memory and 
    // time but its of no use

    // using constant variables help the compiler for performing constant propagation with ease

    // { compile time programming }

    // -- we can selectively write code which we want to be executed at compile time and run time....we use constant expression

/*
    Constant expressions are values that are known and fixed at the time the code is compiled, before the program runs. 
    The compiler can substitute these values directly into the machine code, which allows for significant optimizations.
    A constant expression can be:
    A literal value (like 10, 3.14, or "hello").
    A variable declared with const and initialized with a constant expression.
    A variable declared with constexpr.
    The result of a mathematical operation on other constant expressions (e.g., 5 * 2 + 1).
    The return value of a constexpr function when all its arguments are constant expressions.
*/

    // Const integral variables with a constant expression initializer can be used as constant expressions:
    const int a { 5 };           // a is usable in constant expressions
    const int b { a };           // b is usable in constant expressions (a is a constant expression per the prior statement)
    const long c { a + 2 };      // c is usable in constant expressions (operator+ has constant expression operands)

    // Other variables cannot be used in constant expressions (even when they have a constant expression initializer):
    int d { 5 };                 // d is not usable in constant expressions (d is non-const)
    const int e { d };           // e is not usable in constant expressions (initializer is not a constant expression)
    const double f { 1.2 };      // f is not usable in constant expressions (not a const integral variable)

    const int x1 { 3 + 4 }; // constant expression 3 + 4 must be evaluated at compile-time
    int y1 { 3 + 4 };// constant expression 3 + 4 may be evaluated at compile-time or runtime as y1 is declared non-const 
    // although the initializer is a constant expression
    const int x2 = five1(); // this is a valid const expression as the type is const int and the initializer is also a const
    //  expression

/*
    { THE INTRODUCTION OF constexpr }
    IN GENERAL FOR AN EXPRESSION TO RUN AT COMPILE TIME THE EXPRESSION SHOULD HAVE A CONST KEYWORD WITH INTEGER DATA TYPE AND 
    ALSO THE EXPRESSION SHOULD BE INITIALIZED WITH A CONSTANT EXPRESSION BUT WHEN USING CONST KEYWORD ITS AGAIN A TASK FOR 
    THE COMPILER TO EVALUATE WHETHER THE VARIABLE IS DECLARED CONST AND ALSO THE INITIALIZER IS A CONSTANT EXPRESSION SO 
    INSTEAD WE USE constexpr keyword
    constexpr keyword TELLS THE COMPILER THAT THE EXPRESSION MUST BE EVALUATED AT COMPILE TIME AND THE INITIALIZER MUST BE A 
    CONSTANT EXPRESSION OR ELSE COMPILER WILL THROW AN ERROR AND THERE IS NO DATA TYPE CONSTRAINT. WHILE USING THE CONST 
    KEYWORD THE VALUE OF THE INTIALIZER CANNOT BE CHANGED ONCE INTITIALIZED , BUT THE VALUE OF INITIALIZER MAY OR MAY NOT BE
    KNOWN AT COMPILE TIME. WHILE USING THE constexpr KEYWORD THE VALUE OF THE INITIALIZER CANNOT BE CHANGED ONCE INTITIALIZED, 
    BUT THE VALUE OF THE INITIALIZER MUST BE KNOWN AT COMPILE TIME

*/


    constexpr int a1 = 10;
    constexpr int a2 = 3 + 4;

    // constexpr int res1 = five1(); // this results in an error as five1() is not a constant expression
    constexpr int res2 = five2(); // this is correct as the function type is constexpr and will be evaluated at compile time only

    /*int a3 = 6;
    constexpr int a4 = a3;*/ // this will result in error as a3 is not a constant expression

    const double res3 = 4.9; // not a constant expression since it is of type double

    constexpr double res4 = 4.9; // this is considered a constant expression

    // { Arithmetic operators }

    constexpr int x3{ 7 };
    constexpr int y3{ 4 };

    std::cout << "int / int = " << x3 / y3 << '\n';
    std::cout << "double / int = " << static_cast<double>(x3) / y3 << '\n';
    std::cout << "int / double = " << x3 / static_cast<double>(y3) << '\n';
    std::cout << "double / double = " << static_cast<double>(x3) / static_cast<double>(y3) << '\n';

    // the mod operator for negative sign , the remainder will take the sign of the first operand
    // a = (a / n) * n + (a % n)
    // so for (-6 % 4)
    // -6 = (-6/4) * 4 + (-6 % 4 )
    // -6 = (-1) * 4 + (-6 % 4 )
    // -6 = -4 + (-6 % 4)
    // (-6 % 4) = -2 , it contrasts with the mathematics value of -6 % 4 = 2

    int x7 = 6;
    cout << ++x7 << endl; // first increment and then print the value
    cout << x7++ << endl; // print the value and then increment

    // { ternary operator }

    /*int num1,num2;
    cin >> num1;
    cin >> num2;
    int min = ( num1 < num2 ) ? num1 : num2; // here both the 2nd and 3rd operands should be of same type or else it will result in compiler error*/

    cout << ( (x7 == 6) ? x7 : x7 - 1 ) << endl; // this is correct
    // cout << ( (x7 == 6) ? x7 : "x7 is not equal to 6" ); // this contains error, as both 2nd and 3rd operands should be of same type

    // {  code for comparing two boolean values, since using relational operators results in descripencies }

    // a is really close to 1.0, but has rounding errors
    constexpr double a6 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 ;
    constexpr double a7 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

    constexpr double relEps { 1e-8 };
    constexpr double absEps { 1e-12 };

    std::cout << std::boolalpha; // print true or false instead of 1 or 0
    approximatelyEqualAbsRel(a6,a7,absEps,relEps); // we need to use a function which calculates both the relEps and absEps


    // bool , 0 is false and all other numbers is true
    int bool1 = 1;
    int bool2 = 1;

    cout << (bool1 && bool2) << endl;
    cout << (bool1 and bool2) << endl;

/*
 * CONST VS CONSTEXPR VS CONSTEVAL
 *
 * WRT VARIABLES
 * A VARIABLE DECLARED AS CONST MUST BE INTIALIZED WITH A CONSTANT EXPRESSION OR A NON CONSTANT EXPRESSION I.E. IT'S 
   VALUE CAN BE KNOWN AT COMPILE TIME OR RUN TIME
 * A VARIABLE DECLARED AS CONSTEXPRESSION MUST BE INITIALIZED WITH A CONSTANT EXPRESSION I.E. IT'S VALUE SHOULD 
   BE KNOWN AT COMPILE TIME ONLY OR ELSE IT WOULD RESULT IN A COMPILATION ERROR
 * NOT APPLICABLE TO A CONSTEVAL TYPE
 *
 * WRT FUNCTIONS
 * A FUNCTION WHOSE RETURN TYPE IS CONST REFERENCE THEN IT MEANS THAT THE VARIABLE WHICH IS GOING TO STORE THE RETURNED CONST 
   VALUE SHOULD ALSO BE A CONST VARIABLE
 * A FUNCTION WHOSE RETURN TYPE IS DECLARED AS CONSTEXPR THEN IT CAN BE RUN IN COMPILE TIME OR RUN TIME BASED ON THE 
   AVAILABILITY OF THE FUNCTION ARGUMENTS
 * A FUNCTION WHOSE RETURN TYPE IS DECLARED AS CONSTEVAL THEN IT MUST BE EVALUATED AT COMPILE TIME I.E. ALL THE ARGUMENTS
   MUST BE A CONSTEXPR I.E. MUST BE KNOWN AT COMPILE TIME ONLY
*/

    string n = getName(); // this is ok
    cout << &n << endl;
    n = "rakesh";
    cout << &n << endl;

    const string& name1 = getName();
    // name1 = "rebel"; // error as we cannot change the value of const variable

    return 0;
}
int five1(){
    return 5;
}

void print(int x) // print now takes an int parameter
{
    std::cout << x << '\n';
}

void greet( string name ){
    cout << "Hello " << name << "!!" << endl;
}
string name = "rahul";
// function demonstrating use of const keyword in function
const string& getName(){
    return name;
}


