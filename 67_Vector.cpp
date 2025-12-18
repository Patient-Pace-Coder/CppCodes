// #include<iostream>
// #include<vector>
// // using namespace std;

// // void print( std::vector<int>& arr ){ // pass by ref
// //     std::cout << "called normal function" << '\n';
// //     std::cout << arr[0] << '\n';
// // }


// // template <typename T>
// // void print( std::vector<T>& arr ){
// //     std::cout << "called template funtion" << '\n';
// //     std::cout << arr[0] << '\n';
// // }

// template <typename T>
// void print( T& arr ){
//     std::cout << "called template funtion" << '\n';
//     std::cout << arr[0] << '\n';
// }


// int main(){

//     // std::vector<int> v1(10); // creates array of size 10 with values initialized as 0's
//     // std::cout << v1.size() << std::endl;
//     // for( int i = 0; i < v1.size(); i++ ){
//     //     std::cout << v1[i] << std::endl;
//     // }

//     std::vector<int> v2 {1,2,3,4,5,6,7,8,9,10}; // creates array whose elements are these
//     for( int i = 0; i < v2.size(); i++ ){
//         std::cout << v2[i] << std::endl;
//     }

//     std::cout << "The address of all array elements are" << std::endl;
//     for( int i = 0; i < v2.size(); i++ ){
//         std::cout << &v2[i] << std::endl;
//     }
//     // std::vector<int> v3 {(10)}; // creates array whose element is 10
//     // for( int i = 0; i < v3.size(); i++ ){
//     //     std::cout << v3[i] << std::endl;
//     // }

//     std::cout << v2.at(8) << std::endl;

//     // print<int>(v2);
//     print(v2); // uses CTAD if there is no normal function

//     // VECTOR IS RESIZABLE
//     v2.resize(13);

//     for( int i = 0; i < v2.size(); i++ ){
//         std::cout << v2[i] << " ";
//     }
//     std::cout << std::endl;
//     v2.resize(8);
//     for( int i = 0; i < v2.size(); i++ ){
//         std::cout << v2[i] << " ";
//     }

        // VECTOR SUPPORTS CONSTEXPR IN VERY LIMITED CONTEXTS, SO WHEN DEALING WITH CONSTEXPR WE USE STD::ARRAY

// }
