// #include<iostream>
// #include"header_files/Log.h"

// // void log( string& message ){ // multiple definitons error as it is already defined in example1.cpp
// //     cout << message << endl;
// // }

// // if the above thing is uncommeneted then while compilation there will not be any errors but while linking
// // the linker will combine all the object files and then points the declaration of functions to the function definitions
// // so while linking the linker should only find a single function definition across all the object files if not then linker error will be generated

// // to know the functionality of the linker create a new file and add a function definition of log and then compile only example1.cpp and example2.cpp and
// // then run the .exe file generated and the program compiles successfully as we have not compiled example3.cpp so no object file is generated for example3 and hence no linker error
// // the linker will combine only those obj files which we have compiled ( for example : g++ example1.cpp example2.cpp -o example1 here the linker will only consider .obj files of example1 and example2 )


// void multiply(){
//     std::cout<<"multiply called" << std::endl;
//     log("ex2");
// }
