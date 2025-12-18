// #include<iostream>
// using namespace std;

// int main(){

//     const int x = 5;
//     const int* ptr = &x;

//     // *ptr = 6; // invalid as const int cannot be changed

//     const int y = 10;
//     ptr = &y; // this is valid bcz const int* ptr means, ptr will point to a const int value and so we can change the address to which ptr points to

//     int z = 15;
//     ptr = &z; // const int* ptr can also point to a non const variable but we cannot change the value of z through ptr as ptr's type is const int*
//     // but we can change the value of z and hence the value ptr is pointing to also changes

//     z = 10;
//     cout << *ptr << endl;

//     // constant pointers : pointers can be declared constant
//     int p = 10;
//     int* const ptr1 = &p;
//     // int* const ptr2; // error const pointer must be initialized

//     cout << &p << endl;
//     cout << ptr1 << endl;
//     cout << *ptr1 << endl;

//     // we cannot make ptr1 point to other integer variable bcz it is a const pointer
//     // ptr1 = &z; // compiler error

//     // we can store a const int in const pointer
//     const int g = 15;
//     const int* const ptr3 = &g;
//     // *ptr3 = 9; // cannot change the value as it stores const int type
// }
