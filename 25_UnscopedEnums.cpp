// #include<iostream>
// #include <bitset>
// #include<cstdint>
// using namespace std;

// // basic example of unscoped enums
// // enums are implicitly converted to integral value numbered from 0.. and we can also give other numbers as well
// // the specific integral type used to represent enums is called underlying type or base. we can modify the underlying integral type also
// // since enums underlying type is integer so it occupies 4 or 8 bytes of memory depending on the system

// // enum Color{ // the scope of the variables defined inside this enum is global scope
// //     blue, // assigned 0
// //     red, // assigned 1
// //     green, // assigned 2
// // };

// // int main(){
// //     Color shirt = blue;
// //     cout << shirt << endl; // prints 0
// //     cout << red << endl; // prints 1
// //     if( shirt == blue ){
// //         cout << "Shirt if of blue color" << endl;
// //     }
// //     else{
// //         cout << "Shirt color is not blue" << endl;
// //     }
// // }

// // one more use case of enums but this is scoped enum

// namespace Flags
// {
// enum State
// {                       // here the scope of variables defined inside this enum is scope of namespace Flags since the enum is defined inside the namespace
//     isHungry,
//     isSad,
//     isMad,
//     isHappy,
//     isLaughing,
//     isAsleep,
//     isDead,
//     isCrying,
// };
// }

// // enum Color : int8_t { // the scope of the variables defined inside this enum is global scope
// //     blue, // assigned 0
// //     red, // assigned 1
// //     green, // assigned 2
// // };

// enum Color { // we have not specified the base
//     blue,
//     red,
//     green,
// };

// enum Pen : int { // we have specified the base
//     ballpen,
//     gelpen,
//     inkpen,
//     stickpen,
// };

// int main()
// {
//     bitset<8> me{};
//     me.set(Flags::isHappy);
//     me.set(Flags::isLaughing);

//     cout << boolalpha; // print bool as true/false

//     // Query a few states (we use the any() function to see if any bits remain set)
//     cout << "I am happy? " << me.test(Flags::isHappy) << '\n';
//     cout << "I am laughing? " << me.test(Flags::isLaughing) << '\n';
//     cout << Flags :: isHungry << endl; // prints 0
//     cout << Flags :: isDead << endl; // prints 6
//     cout << sizeof(Flags :: State) << endl;
//     cout << sizeof(Color) << endl;

//     /*
//      * While the compiler will implicitly convert an unscoped enumeration to an integer,
//      * it will not implicitly convert an integer to an unscoped enumeration (refer line no. 87).so we have to explicitly convert using static_cast<>()
//      * if we have speicified the base then the compiler allows to list initialize specified type value
//     */

//     // Color x_color1 = 2; // error: cannot convert 'int' to 'Color' in initialization
//     Color x_color = static_cast<Color>(2); // x_color is now green
//     cout << x_color << endl;
//     x_color = red;
//     cout << x_color << endl;

//     // Pen pen {2}; // error as we cannot implicitly convert int to Pen even though we have specified the base type
//     // cout << pen << endl;
//     cout << stickpen << endl;

//     return 0;
// }
