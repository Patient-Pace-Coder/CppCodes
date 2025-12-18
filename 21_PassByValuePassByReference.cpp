// #include<iostream>
// using namespace std;

// void add( int y ){
//     y += 10; // copy of value of x is stored in y and the value of y is modified not the value of x
//     cout << y << endl;
// }

// void add1( int& y ){ // pass by reference so the reference of x is taken here so y points to the same memory address to which x points to so modifying y will result change in x
//     y += 10;
//     cout << y << endl;
// }
// int main(){
//     int x = 10;
//     add(x); // x is a pass by value lvalue
//     cout << x << endl; // the value of x is not modified
//     // pass by value is expensive as it creates a copy of the value

//     add1(x);
//     cout << x << endl; // the value of x is modified here

//     // pass by reference only accepts modifiable value as arguments ,if we want to pass non-modifiable value as arguments then the parameter should also be declared as const
//     // pass by reference is efficient as it doesnt creates a copy of the value

// }
