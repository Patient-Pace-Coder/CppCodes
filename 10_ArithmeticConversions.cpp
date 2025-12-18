// #include <iostream>
// #include <typeinfo> // for typeid()
// #include <type_traits> // for using common_type<>, common_type_t<>
// using namespace std;

// int main(){

//     /*  if there's any arithmetic operation performed on two different types of operands, then to know the datatype of
//         the resultant we can use this typeid(i).name, and the rankings/priorities are :
//         long double (highest rank)
//         double
//         float
//         long long
//         long
//         int (lowest rank)
//     */

//     int i = 3;
//     double d = 2.3;
//     float f = 1.2f;
    

//     cout << typeid(i).name() << endl;
//     cout << typeid(d).name() << endl;
//     cout << typeid(i + d).name() << " " << i + d << endl; // here double has higher priority than int so the value 3 is converted to 3.0 and then addition is performed

//     // actual syntax : std : common_type<int,double>::type

//     cout << typeid(common_type<int,double>::type).name() << endl ;
//     cout << sizeof(d) << endl;
//     cout << sizeof(f) << endl;
// }
