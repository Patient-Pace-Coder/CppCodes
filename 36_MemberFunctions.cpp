// #include<iostream>
// using namespace std;

// struct Date{

//     // In c++ member variables and functions can be defined in any order and here is the code example

//     void print(){ // member function
//         cout << day << '/' << month << '/' << year << endl;
//     }

//     int day{};
//     int month{};
//     int year{};

//     Date compare( const Date& date ){
//         if( year < date.year ){
//             return *this; // this is a pointer to the implicit object so since the return type is Date so we have to deference this to pass the actual object
//         }
//         else if( month < date.month ){
//             return *this;
//         }
//         else if( day < date.day ){

//         }
//         return date;
//     }
// };

// /*
//  * member vs non member funtions
//  * we define member function inside the class type
//  * we can directly access the class members from the member function no need of passing the object as parameter
//  * we call member function with the help of class type objects
// */

// void print( const Date& date ){ // non-member function
//     cout << date.day << '/' << date.month << '/' << date.year << endl;
// }

// ostream& operator<<( ostream& out, Date& date ){
//     out << date.day << '/' << date.month << '/' << date.year << endl;
//     return out;
// }


// int main()
// {

//     Date d1{18,8,2025}; // d1 is the object of type Date
//     d1.print();
//     d1.day = 19;
//     d1.print();  // calling member function using class type objects, here d1 is the implicit object passed

//     print(d1); // calling non member function by passing the class type object

//     Date d2{20,8,2025};
//     Date d3 = d1.compare(d2);
//     // cout << "Most recent Date is" << d1.compare(d2) << endl; // this doesn't work as this is a rvalue and in the function operator<<() we are passing a reference type but rvalue doesn't have any reference
//     // to use this we have to modify the function parameter of Date from Date& date to Date date so that it takes as pass by copy and lvalue can be passed as pass by copy

//     cout << "Most recent Date is " << d3 << endl; // this works as d3 is a lvalue so passing it as a reference works
// }
