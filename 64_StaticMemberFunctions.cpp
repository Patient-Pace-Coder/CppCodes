
// /*

//  * static member functions can directly access
//   other static members (variables or functions), but not non-static members
//  * Static member functions have no this pointer

//  */

// #include <iostream>
// class Something
// {
// private:
//     const static int s_value {1};
//     static int s_nextID;
//     int count = 0;

// public:
//     static int getValue() { return s_value; } // static member function
//     static int getNextID(); // Here's the declaration for a static function
// };

// int Something::s_nextID{10};

// // Here's the definition of the static function outside of the class.  Note we don't use the static keyword here.
// int Something::getNextID() { 
//     // std::cout << count << '\n'; // error as static member functions cannot access non static members
//     return s_nextID++; 
// }

// int main()
// {
//     std::cout << Something::getValue() << '\n';
//     std::cout << Something::getNextID() << '\n';
// }
