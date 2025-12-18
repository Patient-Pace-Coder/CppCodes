#include <iostream>
#include <iterator> // for std::size
#include <cstring> // for std::strlen

int main()
{
    // char rolls[255] {}; // declare array large enough to hold 254 characters + null terminator
    // std::cout << "Enter your rolls: ";
    // std::cin >> rolls; // user can enter as many characters as they want, but only first 254 will be stored
    // std::cout << "You entered: " << rolls << '\n';

    // fix for the above problem is to use std::cin.getline() function
    char rolls[255] {}; // declare array large enough to hold 254 characters + null terminator
    std::cout << "Enter your rolls: ";
    std::cin.getline(rolls, sizeof(rolls)/sizeof(rolls[0])); // portable version  
    std::cout << "You entered: " << rolls << '\n';

    // modifying c-style strings
    char str[] { "Hello" }; // compiler automatically adds null terminator
    // str = "World"; // error: cannot assign to an array
    str[0] = 'J'; // okay to modify individual characters
    std::cout << str << '\n'; // prints "Jello" 

    std::cout << sizeof(str)/sizeof(str[0]) - 1 << '\n'; // prints 5, the length of the string not counting the null terminator
    std::cout << std::strlen(str) << '\n';
    return 0;
}
