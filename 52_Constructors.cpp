// // #include<iostream>
// // using namespace std;

// // class Something{

// // private:
// //     int m_x{3}; // default initializer will be ignored if member initializatio list assigns a value for this
// //     int m_y{}; // same case
// //     int m_z;

// // public:
// //     Something( int x, int y ) // constructor
// //         : m_x{ x }
// //         , m_y{ y } // member initialization list

// //     // this piece of code below results in undefined behaviour as the member variables
// //     // gets initialized in the order they are defined so here first m_x is defined so m_x will
// //     // get initialized to m_y which is not yet initialized
// //         // : m_y{ std::max(x,y) }
// //         // , m_x{ m_y }

// //     {
// //         cout << "construct has been called" << endl;
// //     }

// //     Something(){ // if there is no explicit constructor then compiler will implicitly create a constructor such as this
// //         cout << "called default constructor" << endl;
// //     }

// //     // Something( int x = 10, int y = 13 ) // ambiguous as it can be considered as default constructor if Something s{} is called
// //     //     : m_x {x}
// //     //     , m_y {y}
// //     // {
// //     // }


// //     // Something() = default; // generates an explicitly defaulted default constructor

// //     /*
// //      * NOTE : IF THERE IS A USER DEFINED NON-EMPTY CONSTRUCTOR THEN IF WE CREATE AN OBJECT AND CALL EMPTY CONSTRUCTOR THERE WILL BE AN ERROR AS COMPILER
// //      * WILL NOT PROVIDE AN EMPTY DEFAULT CONSTRCUTOR THEN
// //     */

// //     int getM_X() const {
// //        return m_x;
// //     }

// //     int getM_Y() const {
// //         return m_y;
// //     }
// //     int getM_Z() const {
// //         return m_z;
// //     }
// // };

// // int main(){

// //     // Something s1{}; // here implicitly the constructor is called
// //     // const Something s2{}; // normally const object cannot call non const functions but here const applies after s2's constrcutor is called so it is ok

// //     // cout << s1.getM_X() << endl;
// //     // cout << s2.getM_X() << endl;

// //     // Something s1{5,6};
// //     // cout << "{ " << s1.getM_X() << " , " << s1.getM_Y() << " , " << s1.getM_Z() << " }" << endl; // {5,6,0} is the output

// //     Something s3{};
// //     cout << "{ " << s3.getM_X() << " , " << s3.getM_Y() << " , " << s3.getM_Z() << " }" << endl; //


// // }

// #include <string>
// using namespace std;
// class Customer{

//     string name;
//     int accountNumber;
//     double balance;
// public:
//     Customer( Customer &b){
//         this->name = b.name;
//         this->accountNumber = b.accountNumber;      
//         this->balance = b.balance;
//     }

//     Customer( string name, int accountNumber, double balance)
//         : name{name}, accountNumber{accountNumber}, balance{balance}
//     {
//     }
// };

// int main(){
//     Customer c1{"abc", 12345, 1000.0};
//     Customer c2{c1}; // copy constructor is called here
// }