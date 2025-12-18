// # include<iostream>
// using namespace std;

// /*
//  * Assume there are two files foo.cpp and goo.cpp and there's a similar method in both the files,now what if we call a method in our main.cpp file,
//  * there's an ambuiguity for the compiler as it doesn't know which method to call,so we use the concept of namespaces
//  */

// namespace Foo {

//     void doSomething(){
//         cout << "There" << endl;
//     }
// }

// namespace Goo{

//     void doSomething(){
//         cout << "Hello" << endl;
//     }
// }

//     int main(){

//         // doSomething(); // it results in runtime error

//         Foo :: doSomething();
//         Goo :: doSomething();
//     }
