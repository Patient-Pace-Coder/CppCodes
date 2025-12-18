// #include<iostream>
// using namespace std;

// // { GENERIC PROGRAMMING }

// template <typename T> // by this type template declaration we are telling the compiler that this maxi function can take inputs of any type
// // this mainly used because let's take example of maxi() function, without this type template parameter,we have to write overloaded functions for each data type available but now we can write a single function and call it for any data type
// // one cannot use nullptr type to call this function

// T maxi(T x, T y)
// {
//     std::cout << "called max<T>(T, T)\n";
//     return (x < y) ? y : x;
// }

// template<> int maxi<int>(int x, int y ){ // this is created implicitly at line no. 27
//     std :: cout << "called max<int>(int,int)" << '\n';
//     return (x < y) ? y : x;
// }

// int maxi(int x, int y)
// {
//     std::cout << "called max(int, int)\n";
//     return (x < y) ? y : x;
// }


// // another example

// template <typename T>
// T someFcn(T, double)
// {
//     std::cout << "called someFcn<T>(T, double)\n";
//     return 5;
// }

// // example of a template function with multiple parameters and multiple template types
// template <typename T,typename U>
// auto maxi(T x, U y ){ // we have used auto bcz since T and U are different types and we cannot guarantee the type of result
//     std::cout << "called max<T,U>(T,U)" << '\n';
//     return (x < y) ? y : x;
// }

// // example of template function with default arguments, so the instantiated functions will also have the same default arguments
// template <typename T>
// void print(T val, int times=1)
// {
//     while (times--)
//     {
//         std::cout << val;
//     }
// }

// int main()
// {
//     std::cout << maxi<int>(1, 2) << '\n'; // instantiates and calls max<int>(int, int) // instantiation is done only for the first time
//     std::cout << maxi<>(1, 2) << '\n';    // calls max<int>(int, int) as it is already instantiated (non-template functions not considered)
//     std::cout << maxi(1, 2) << '\n';      // calls max(int, int) as it is calling a non template function, if there is no non template function then it will call a template function

//     cout << someFcn(1,2.3) << '\n';
//     cout << someFcn(1,2.3f) << endl;
//     cout << someFcn(1.2,3) << endl;
//     cout << someFcn(1.2f,1.2) << endl;

//     cout << maxi<int,double>(2,3.5) << endl; // this will instantiate a template function of type (int,double)

//     return 0;
// }
