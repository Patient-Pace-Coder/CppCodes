// #include <iostream>
// #include<utility> // for std::pair

// template <typename T, typename U>
// struct Pair
// {
//     T first{};
//     U second{};
// };

// // template <typename T,typename U>
// // struct Pair1{
// //     int first{};
// //     int second{};
// // };

// template <typename T, typename U>
// void print(Pair<T, U> p) // this will match arguments only of type Pair<T,U>
// {
//     std::cout << "Pair<T,U>" << '\n';
//     std::cout << '[' << p.first << ", " << p.second << ']' << std::endl;
// }

// // template <typename T>
// // void print( T t ){ // this will match arguments of any type not only Pair type
// //     std::cout << "T" << '\n';
// //     std::cout << '[' << t.first << "," << t.second << ']' << std::endl;
// // }

// // template<typename T,typename U>
// // void print( std::pair<T,U> p ){ // this will match arguments only of type std::pair<T,U>
// //     std::cout << "std::Pair<T,U>" << '\n';
// //     std::cout << '[' << p.first << "," << p.second << ']' << std::endl;
// // }

// // void print(int val) {
// //     std::cout << val;
// // }

// int main()
// {
//     Pair<int, double> p1{ 1, 2.3 }; // a pair holding an int and a double
//     Pair<double, int> p2{ 4.5, 6 }; // a pair holding a double and an int
//     Pair<int, int> p3{ 7, 8 };      // a pair holding two ints

//     // Pair1<int,double> p4{10,20};

//     // Pair1<int,double> p10{10,20};
//     // print(p4);
//     print(p2);
//     print(p3);
//     // print(p4);
//     // print(p4);
//     // print(p10);


//     // we can also use std::pair instead of defining a struct pair

//     // std::pair<int,double> p5{1,2};
//     // print(p5);

//     // // class template argument deduction (CTAD)

//     // std::pair<int, int> p6{ 1, 2 }; // explicitly specify class template std::pair<int, int> (C++11 onward)
//     // std::pair p7{ 1, 2 };           // CTAD used to deduce std::pair<int, int> from the initializers (C++17)

// }
