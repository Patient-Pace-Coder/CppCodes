/*
 * THERE ARE THREE TYPES OF ARRAY'S AVAILABLE IN C++
 * THEY ARE C STYLE ARRAYS, STD::ARRAY AND STD::VECTOR
 * C STYLE ARRAYS AND STD::ARRAY ARE FIXED SIZE ARRAY'S OR STATIC ARRAYS
 * ONLY STD::VECTOR IS DYNAMIC ARRAY I.E. CAN BE RESIZED AT RUNTIME
*/


#include <array>  // for std::array
#include<iostream>

void passByRef(const std::array<int, 5>& arr) // we must explicitly specify <int, 5> here
{
    std::cout << arr[0] << '\n';
}


int main()
{
    std::array<int, 5> a {};  // a std::array of 5 ints

    /*
     * The length of a std::array must be a constant expression
    */

    std::array<int, 7> c {}; // Using a literal constant

    constexpr int len { 8 };
    std::array<int, len> b {}; // Using a constexpr variable

    enum Colors
    {
        red,
        green,
        blue,
        max_colors
    };

    std::array<int, max_colors> d {}; // Using an enumerator

    // int numStudents{};
    // std::cin >> numStudents; // numStudents is non-constant

    // std::array<int, numStudents> {}; // error: numStudents is not a constant expression

    // std::array is an aggregate, it has no constructors

    std::array<int, 6> fibonnaci = { 0, 1, 1, 2, 3, 5 }; // copy-list initialization using braced list
    std::array<int, 5> prime { 2, 3, 5, 7, 11 };         // list initialization using braced list (preferred)
    std::cout << prime[3] << '\n';
    // std::array also has full support for constexpr

    // array elements can be accessed in three  ways
    // prime[3] // no bound checking
    // prime.at(3) // run time bound checking
    // std::get<3>(prime) // compile time bound checking

    // how to pass array objects
    std::array arr{ 9, 7, 5, 3, 1 }; // CTAD deduces type std::array<int, 5>
    passByRef(arr);

    return 0;
}
