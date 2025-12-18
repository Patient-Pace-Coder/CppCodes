// #include <iostream>

// struct Date
// {
//     int year {};
//     int month {};
//     int day {};

//     void print() // non-const
//     {
//         std::cout << year << '/' << month << '/' << day << '\n';
//     }

//     void print() const{ // overloading of const and non const member functions can be done
//         std::cout << year << '/' << month << '/' << day << " const version called\n";
//     }
// };

// void doSomething(const Date& date)
// {
//     date.print(); // const object so calls const member function
// }

// void doSomething( Date& date)
// {
//     date.print(); // non-const object cannot call const member function so it will call non-const member function
// }

// int main()
// {
//     Date today { 2020, 10, 14 }; // non-const
//     today.print(); // calls non-const version of print()
//     doSomething(today);
//     return 0;
// }
