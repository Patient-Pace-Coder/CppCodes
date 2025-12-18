// #include<iostream>
// using namespace std;

// void print20();

// const int getNumber(){
//     return 6;
// }

// // const after a functions signature means it is a const member function so we cannot modify the object

// class student{

// public:
//     string name{};
//     int rollNum;
//     void print() const {
//         // cout << name << '\n' << rollNum << '\n';
//         cout << "member function print called" << '\n';
//         // print1(); // const member function cannot call a non const member function as there is chance of object getting modified
//         // this->rollNum = 10; // error as we are trying to modify const object value
//         print20(); // calling a non member function
//     }

//     void print(){
//         cout << "non const member function print called" << '\n';
//     }

//     // string& getName() const { // this will result in error as const member function must only return const reference of object or object's members, as const is a promise which promises it will not modify the object's properties directly
//     //     return name;
//     // }

//     // Const member functions can’t return non-const references to data members
//     const string& getName() const{
//         return name;
//     }
// };

// void print20(){
//     cout << "non member function print20 called" << '\n';
// }

// int main(){

//     /*
//      * a const object must be instantiated
//      * a const object can only call a const member function
//      * a const member function is a constant function which doesn't modify the properties of the object and also which doesn't call any non const member function but it can call non member functions
//      * a const member function can be called by both const and non const objects
//      * a const object cannot call a non const member function
//     */

//     const student s1{"rahul",1};
//     s1.print(); // const object calling a const member function

//     // print20(); // calling a non member function

//     student s2{"rakesh",2};
//     s2.print(); // non const object calling a const member function

//     const string& name = s2.getName();
//     // name = "maneesh"; // error as name is a const reference
//     cout << s2.getName();


// }
