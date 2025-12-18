// #include<iostream>
// using namespace std;


// class Foo{

// private:
//     int m_x{};

// public:
//     // Foo( int val ) // converting constructors
//     //     : m_x{val}
//     // {
//     // }

//     // explicit keyword to tell the compiler that it shouldn't use the constructor as converting constructors
//     explicit Foo( int val )
//         : m_x{val}
//     {
//     }

//     int getVal(){
//         return m_x;
//     }
// };

// void print( Foo f ){
//     cout << f.getVal() << endl;
// }

// int main(){
//     Foo f{10};

//     // print(5); // here we are passing int argument but print expects us parameter of type Foo
//     // so compiler searches for constructors of type Foo(int val) so we can use Foo(int val) constructor to convert the value 5 to initialize m_x

//     // All the constructors are by default converting constructors
//     // if the declaration and definition of function exists then explicit keyword should be used only in the declaration

//     print(Foo{10}); // this will call print as we are explicitly passing Foo type object
// }
