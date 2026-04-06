#include<iostream>
#include "circle.h"; // this allows us to use the variables and functions defined in this header file
#include "growth.h"; // this allows us to use the variables and functions defined in this header file
using namespace std;

void foo(){
    cout << "I M FOO" << endl;
}

int main(){

    cout << basicMaths :: pi << endl; // pi is defined inside circle.h but inside basicMaths namespace.
    cout << basicMaths :: e << endl; // e is defined inside growth.h but inside basicMaths namespace.

    // the way header files circle.h and growth.h are using the same namespace basicMaths, similary every stl i.e. vector,hashmap..etc in written in namespace std.
    // so whatever code is written inside same namespace is considered as one part.
}



