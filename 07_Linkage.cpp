
/*
 * internal linkage : its like a variable which is a private member of the class i.e. it is only accessible within that file
 * external linkage : its like a varaible which is a public member of the class i.e. it is accessibel in anyfile
 * internal linkage can be achieved by using static keyword,const or constexpr is by default internal
 * all other non const, non static variables or functions are external linkage. We can use extern keyword to make the const or constexpr variables external and then we can use the forward declaration of them in another file to use them.
 *
 * we can use a function which is defined in one file, by using a forward declaration of it in the current file
 *
 * In header file, say add.h first we define the name i.e. #define MY_HEADER_H and then in the header file we only create variables and funcitons and we dont initialize the values of the variables
 * and we dont define the function's body. Its like an interface and any file in which we want that method, we will include that header file and impliment the functions body
 */

// { a.cpp code }
//  global variable definitions
//     int g_x { 2 };              // non-constant globals have external linkage by default
//     extern const int g_y { 3 }; // this extern gives g_y external linkage

// // { main.cpp code }
//     extern int g_x;       // this extern is a forward declaration of a variable named g_x that is defined somewhere else
//     extern const int g_y; // this extern is a forward declaration of a const variable named g_y that is defined somewhere else

//     int mian(){
//         cout << g_x << ' ' << g_y << endl;
//     }


