// #include <iostream>
// #include <string>
// using namespace std;

// // problem of unscoped enumerations : comparing two objects of different types as they get implicitly converted to integers
// // Therefore the solution was to create a scoped enums i.e. enum class
// // int main()
// // {
// //     enum Color
// //     {
// //         red,
// //         blue,
// //     };

// //     enum Fruit
// //     {
// //         banana,
// //         apple,
// //     };

// //     Color color { red };
// //     Fruit fruit { banana };

// //     if (color == fruit) // The compiler will compare color and fruit as integers
// //         std::cout << "color and fruit are equal\n"; // and find they are equal!
// //     else
// //         std::cout << "color and fruit are not equal\n";

// //     return 0;
// // }

// enum class Color{

//     red, // The scope of the variables is not global scope , it is under the scope of Color, also they wont't implicitly get converted to integers
//     blue,
// };

// string getColorName(Color color){
//     switch (color)
//     {
//     case Color::red: return "red" ; break;
//     case Color::blue: return "blue" ; break;
//     default: return "???" ; break;
//     }
// }

// std::ostream& operator<<(std::ostream& out, Color color)
// {
//     out << getColorName(color); // print our color's name to whatever output stream out
//     return out;                 // operator<< conventionally returns its left operand

//     // The above can be condensed to the following single line:
//     // return out << getColorName(color)
// }

// enum class Fruit{
//     banana,
//     apple,
// };

// int main(){

//     Color color = Color :: red; // Color :: red since it is scoped enums
//     Fruit fruit = Fruit :: banana;

//     // if( color == fruit ){ // this will result in compiler error as compiler cannot compare two different types unlike in the case of unscoped enums
//     //     cout << "color and fruit are equal" << endl;
//     // }
//     // else{
//     //     cout << "color and fruit are not equal" << endl;
//     // }

//     Color shirt = Color :: blue;
//     if( shirt == Color :: blue ){ // this Color to Color comparison is ok
//         cout << "Shirt is blue" << endl;
//     }
//     else{
//         cout << "Shirt is red" << endl;
//     }


//     cout << static_cast<int>(shirt) << endl;
//     // we can do the reverse conversion also
//     int boots_color;
//     cin >> boots_color;

//     Color bc = static_cast<Color>(boots_color);
//     cout << bc << endl; // calls the overloaded operator<< function

//     // USING ENUM statements allows us to access the enumerators of the enum class without using the class scope

//     // using enum Color; c++ 20 feature

//     // Color pant = blue; // instead of Color :: blue we just used blue


// }
