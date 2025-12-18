// #include<iostream>
// using namespace std;


// struct Employee
// {
//     int id{};
//     int age{};
//     double wage{};
// };

// struct Point
// {
//     double x {};
//     double y {};
// };

// struct Triangle
// {
//     Point* a {};
//     Point* b {};
//     Point* c {};
// };

// int main()
// {

//     Employee joe{ 1, 34, 65000.0 };

//     ++joe.age;
//     joe.wage = 68000.0;

//     Employee* ptr{ &joe }; // ptr is a pointer which points to objects whose type is Employee

//     // to access members using pointers
//     // 1] using deference operator
//     cout << (*ptr).id << endl; // we must deference the pointer and then access the member we want

//     // 2] using an arrow operator which does the same thing as of line 23 but it is clean and easy to use i.e. there is no need to handle the paranthesis and deference operators
//     cout << ptr->id << '\n'; // Better: use -> to select member from pointer to object

//     Point a {1,2};
//     Point b {3,7};
//     Point c {10,2};

//     Triangle tr { &a, &b, &c };
//     Triangle* ptr1 {&tr};

//     // ptr is a pointer to a Triangle, which contains members that are pointers to a Point
//     // To access member y of Point c of the Triangle pointed to by ptr, the following are equivalent:

//     // access via operator.
//     std::cout << (*(*ptr1).c).y << '\n'; // the . operator has higher precedence than the * operator so we must use paranthesis to deference correctly

//     // access via operator->
//     std::cout << ptr1 -> c -> y << '\n'; // much nicer

// }
