// /*

// A class with atleast one pure virtual function is said to be an abstract class or an interface
// we cannot instantiate an abstract class
// we can only instantiate derived class if and only if that derived class provides implementation for that pure virtual function 
// i.e. if the dervied class doesn't provide implementation for pure virtual function then it is also treated as abstract class

// */

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

//     virtual void area() = 0; // pure virtual function as Shape can't have a definite area property
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
// class Quadruplet : public Shape // class Quadruplet is also abstract
// {
// public:
//     Quadruplet(int a = 0, int b = 0) : Shape(a, b) {}

//     //  no implementation provided for area() method
// };
// // Main function for the program
// int main()
// {
//     Rectangle rec(10, 7);

//     // Quadruplet quad(10, 5); // not allowed as Quadruplet is an abstract as it didn't implement pure virtual function
    
//     // call rectangle area.
//     rec.area();


//     return 0;
// }