// #include<iostream>
// #include<typeinfo>
// #include<type_traits>
// using namespace std;

// int main(){

//     int i = 210;

//     char ch = i; // this leads to warning by compiler as integer size is greater than size of char
//     cout << ch << endl;
//     // if we do explicit casting then as the compiler knows that the casting is intentionally done by the programmer it doesn't give any warnings

//     char ch1 = static_cast<char>(i);
//     cout << ch1 << endl;

//     // type alias
//     using sold = double;

//     sold value = 4.0; // the type alias has a block scope
//     cout << typeid(value).name() << endl;


// }
