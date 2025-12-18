// #include <iostream>
// #include <string_view>
// using namespace std;

// /* USE OF OPERATOR OVERLOADING
//  * THERE EXISTS MANY OPERATORS AND THEIR FUNCTIONALITY IS DEFINED FOR FUNDAMENTAL DATA TYPES
//  * BUT IF WE WANT TO ADD FUNCTIONALITY TO THAT OPERATOR FOR USER DEFINED TYPES SUCH AS CLASSES,STRUCTS,ENUMS THEN WE HAVE TO DO OPERATOR OVERLOADING
//  * OPERATOR OVERLOADING IS SIMILAR TO FUNCITON OVERLOADING BUT THE FUNCITON NAME IN OPERATOR OVERLOADING SHOULD BE "OPERATOR+" OR "OPERATOR<<"
// */

// enum Color
// {
//     black,
//     red,
//     blue,
// };

// constexpr std::string_view getColorName(Color color)
// {
//     switch (color)
//     {
//     case black: return "black";
//     case red:   return "red";
//     case blue:  return "blue";
//     default:    return "???";
//     }
// }

// // Teach operator<< how to print a Color
// // std::ostream is the type of std::cout, std::cerr, etc...
// // The return type and parameter type are references (to prevent copies from being made)
// std::ostream& operator<<(std::ostream& out, Color color)
// {
//     out << getColorName(color); // print our color's name to whatever output stream out
//     return out;                 // operator<< conventionally returns its left operand

//     // The above can be condensed to the following single line:
//     // return out << getColorName(color)
// }

// int main()
// {
//     Color shirt{ blue };
//     cout << "Your shirt is " << shirt << '\n'; // it works! , first cout << str will call and return a out object and then out object and shirt will go through this overloaded function and return out and then out and 'n' will get called and then out is returned

//     return 0;
// }
