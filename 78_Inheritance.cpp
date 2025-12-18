// /*

// Access              public  protected  private
// Same class            yes     yes       yes
// Derived classes       yes     yes       no
// Outside classes       yes     no        no


// While using different type of inheritance, following rules are
// applied:

//      Public Inheritance: When deriving a class from a public base
//     class, public members of the base class become public members of the
//     derived class and protected members of the base class
//     become protected members of the derived class. A base
//     class's private members are never accessible directly from a derived
//     class, but can be accessed through calls to
//     the public and protected members of the base class.
    
//      Protected Inheritance: When deriving from a protected base
//     class, public and protected members of the base class
//     become protected members of the derived class.
    
//      Private Inheritance: When deriving from a private base
//     class, public and protected members of the base class
//     become private members of the derived class.

// */

// #include <iostream>
// using namespace std;

// // Base class
// class Shape
// {
//  public:
//     void setWidth(int w)
//     {
//     width = w;
//     }
//     void setHeight(int h)
//     {
//     height = h;
//     }
//  protected:
//     int width;
//     int height;

//  private :
//     int getArea( int width, int height ){
//         return width * height;
//     }
// };
// // Derived class
// class Rectangle: private Shape  // the more stricter access specifier between (defined access specifier and derived access specifier) applies to all the derived members
// {

//     // The Derived code inside Rectangle class would look like
//     // private:
//     //     void setWidth(int w)
//     //     {
//     //         width = w;
//     //     }
//     //     void setHeight(int h)
//     //     {
//     //         height = h;
//     //     }

//     // private:
//     //     int width;
//     //     int height;

//     // private:
//     //     int getArea( int width, int height ){
//     //         return width * height;
//     //     }

//     public:
//         int getWidth(){
//             return width;
//         }
//         int getHeight(){
//             return height;
//         }
//         void setWidth(int w)
//         {
//             width = w;
//         }
//         void setHeight(int h)
//         {
//             height = h;
//         }



// };
// int main(void)
// {
//     Rectangle rect;
//     rect.setWidth(5);
//     rect.setHeight(7);

//     // Print the area of the object.
//     // cout << "Total area: " << Rect.getArea() << endl; // cannot access getArea() as it is private member of base class

//     cout<< "Total area: " << rect.getWidth() * rect.getHeight() << '\n';
//     return 0;
// }