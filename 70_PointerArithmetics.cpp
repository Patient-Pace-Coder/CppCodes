#include <iostream>
#include <array>

// int main()
// {
//     int x {};
//     const int* ptr{ &x }; // assume 4 byte ints

//     std::cout << ptr << ' ' << (ptr + 1) << ' ' << (ptr + 2) << '\n';

//     return 0;
// }


// int main()
// {
//     const int arr[] { 9, 7, 5, 3, 1 };

//     const int* ptr{ arr }; // a normal pointer holding the address of element 0
//     std::cout << ptr[2];   // subscript ptr to get element 2, prints 5

//     return 0;
// }


// int main()
// {
//     const int arr[] { 3, 2, 1 };

//     // First, let's use subscripting to get the address and values of our array elements
//     std::cout << &arr[0] << ' ' << &arr[1] << ' ' << &arr[2] << '\n';
//     std::cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';

//     // Now let's do the equivalent using pointer arithmetic
//     std::cout << arr<< ' ' << (arr+ 1) << ' ' << (arr+ 2) << '\n';
//     std::cout << *arr<< ' ' << *(arr+ 1) << ' ' << *(arr+ 2) << '\n';

//     return 0;
// }


// int main()
// {
//     const int arr[] { 9, 8, 7, 6, 5 };
//     const int *ptr { arr }; // arr decays into a pointer to element 0

//     // Prove that we're pointing at element 0
//     std::cout << *ptr << ptr[0] << '\n'; // prints 99
//     // Prove that ptr[1] is element 1
//     std::cout << *(ptr+1) << ptr[1] << '\n'; // prints 88

//     // Now set ptr to point at element 3
//     ptr = &arr[3];

//     // Prove that we're pointing at element 3
//     std::cout << *ptr << ptr[0] << '\n'; // prints 66
//     // Prove that ptr[1] is element 4!
//     std::cout << *(ptr+1) << ptr[1] << '\n'; // prints 55

//     return 0;
// }


// int main()
// {
//     const int arr[] { 9, 8, 7, 6, 5 };

//     // Set ptr to point at element 3
//     const int* ptr { &arr[3] };

//     // Prove that we're pointing at element 3
//     std::cout << *ptr << ptr[0] << '\n'; // prints 66
//     // Prove that ptr[-1] is element 2!
//     std::cout << *(ptr-1) << ptr[-1] << '\n'; // prints 77

//     return 0;
// }



// void printArray(const int* begin, const int* end)
// {
// 	for (; begin != end; ++begin)   // iterate from begin up to (but excluding) end
// 	{
// 		std::cout << *begin << ' '; // dereference our loop variable to get the current element
// 	}

// 	std::cout << '\n';
// }

// int main()
// {
// 	constexpr int arr[]{ 9, 7, 5, 3, 1 };

// 	const int* begin{ arr };                // begin points to start element
// 	const int* end{ arr + std::size(arr) }; // end points to one-past-the-end element

// 	printArray(begin, end);

// 	return 0;
// }