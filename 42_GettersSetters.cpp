// #include<iostream>
// using namespace std;

// /*
//  * since the member variables are private so we cannot access them directly, so we use setters and getters to access and modify them
//  * setters and getters are member functions which are public and user can access the members variables through these
// */

// class Student{
// private:
//     string name{};
//     int rollNum{};

// public:
//     Student( string naam,int rn ){
//         name = naam;
//         rollNum = rn;
//     }
//     void setName( string newName ){
//         name = newName;
//     }
//     string getName(){
//         return name;
//     }
//     void setRollNum( int n ){
//         rollNum = n;
//     }
//     int getRollNum(){
//         return rollNum;
//     }
// };

// int main(){

//     Student s1{"rahul",1};
//     // cout << s1.name << endl; // this doesn't work as name is private variable

//     cout << s1.getName() << endl;
//     s1.setName("rakesh");
//     cout << s1.getName() << endl;

//     // string& naam = s1.getName();

// }
