// #include<iostream>
// using namespace std;

// int main() {
//     int var = 10;

//     // Store the address of
//     // var variable
//     int* ptr1 = &var; // ptr1 will point to a variable which stores an integer value
//     int** ptr2 = &ptr1; // ptr2 will point to a pointer which pointes to a variable storing an integer value

//     // Access values using (*)
//     // operator
//     cout << "value of var is " << *ptr1 << endl;
//     cout << "address of var is " << ptr1 << endl;
//     cout << "address of ptr1 is " << &ptr1 << endl;
//     cout << "address of ptr1 is " << ptr2 << endl;
//     cout << "not sure of what will print " << *ptr2 << endl; // equivalent to *(&ptr1) = ptr1 = &var, so it prints address of var
//     cout << "not sure of what will print " << &ptr2 << endl; // will print the address of ptr2
//     cout << "value of ptr1 is " << **ptr2 << endl; // equivalent to **(&ptr1) = *(ptr1) = *(&var) = (var), so it prints the value of var
//     return 0;
// }
