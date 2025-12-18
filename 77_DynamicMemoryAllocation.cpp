// #include <iostream>
// #include <new> // for std::nothrow

// // C++ supports three basic types of memory allocation, of which you’ve already seen two.

// // Static memory allocation happens for static and global variables. Memory for these types of variables is allocated once when your program is run and persists throughout the life of your program.
// // Automatic memory allocation happens for function parameters and local variables. Memory for these types of variables is allocated when the relevant block is entered, and freed when the block is exited, as many times as necessary.
// //  Dynamic memory allocation is a way for running programs to request memory from the operating system when needed. This memory does not come from the program’s limited stack memory -- instead, it is allocated from a much larger pool of memory managed by the operating system called the heap. We use new and delete keywords to allocate and free dynamic memory.
// // When you dynamically allocate memory, you’re asking the operating system to reserve some of that memory for your program’s use. If it can fulfill this request, it will return the address of that memory to your application. From that point forward, your application can use this memory as it wishes. When your application is done with the memory, it can return the memory back to the operating system to be given to another program.
// // Unlike static or automatic memory, the program itself is responsible for requesting and disposing of dynamically allocated memory.
// // ex : 
// // int* ptr{ new int }; // dynamically allocate an integer and assign the address to ptr so we can access it later
// // When we use operator new, it returns a pointer containing the memory address of the newly allocated object. We generally want to store that in a pointer so we can use that address later to access the object (and eventually, request its destruction).

// int main(){

//     // initializing a dynamically allocated variable
//     int* ptr{ new int (7)}; // dynamically allocate an integer and assign the address to ptr so we can access it later
//     int* ptr1{ new int {9}}; // another way of initializing a dynamically allocated variable
//     int* ptr2{ new int }; // dynamically allocate an integer without initializing it, so it contains a garbage value

//     std::cout << *ptr << " " << *ptr1 << " " << *ptr2 << std::endl;
//     std::cout << &ptr << " " << &ptr1 << " " << &ptr2 << std::endl;
//     // when we are done using the dynamically allocated memory, we should free it using delete operator
//     delete ptr; // return the memory pointed to by ptr to the operating system
//     ptr = nullptr; // set ptr to be a null pointer

//     std::cout << &ptr << std::endl; // undefined behavior, ptr is a dangling pointer

//     // sometimes new operator may fail to allocate memory, in that case it will throw a bad_alloc exception
//     // to avoid that we can use std::nothrow which will return a null pointer if memory allocation fails
//     int* value { new (std::nothrow) int }; // value will be set to a null pointer if the integer allocation fails


//     // memory leaks
//     int* leak { new int (99) }; // dynamically allocate an integer and assign the address to leak
//     leak = nullptr; // oops, we lost the address of the dynamically allocated integer, causing a memory leak
//     // we should have deleted the memory before setting leak to nullptr, now even the program cannot access that memory to free it and also the OS cannot reclaim it as it thinks the program is still using it

//     // another example of memory leak
//      int value = 5;
//     int* ptr3{ new int{} }; // allocate memory
//     // ptr3 = &value; // oops, we lost the address of the dynamically allocated integer, causing a memory leak
//     // we should have deleted the memory before assigning ptr3 to &value, now even the

// }