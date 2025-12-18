// #include <iostream>
// using namespace std;
// class Shape
// {
// protected:
//     int width, height;

// public:
//     Shape(int a = 0, int b = 0)
//     {
//         width = a;
//         height = b;
//     }
//     // void area()  // without virtual keyword the function call is linked statically i.e. early binding happens
//     // {
//     //     cout << "Parent class area : 0" << endl;
//     // }

//     virtual void area(){ // with virtual keyword dynamic linking happens i.e. late binding happens
//         cout << "Parent class area : 0" << endl;
//     }
// };
// class Rectangle : public Shape
// {
// public:
//     Rectangle(int a = 0, int b = 0) : Shape(a, b) {}
//     void area()
//     {
//         cout << "Rectangle class area : " << (width * height) << " " << endl;
//     }
// };
// class Triangle : public Shape
// {
// public:
//     Triangle(int a = 0, int b = 0) : Shape(a, b) {}
//     void area()
//     {
//         cout << "Rectangle class area : " << (width * height)/2 << " " << endl;
//     }
// };
// // Main function for the program
// int main()
// {
//     Shape *shape;
//     Rectangle rec(10, 7);
//     Triangle tri(10, 5);
//     // store the address of Rectangle
//     shape = &rec;
//     // call rectangle area.
//     shape->area();
//     // store the address of Triangle
//     shape = &tri;
//     // call triangle area.
//     shape->area();

//     return 0;
// }