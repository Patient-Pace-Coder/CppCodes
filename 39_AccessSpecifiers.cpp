/*

Access              public  protected  private
Same class            yes     yes       yes
Derived classes       yes     yes       no
Outside classes       yes     no        no

*/


// #include<iostream>
// using namespace std;
// #include"Teacher.h" // this works, we can also create a file Teacher.cpp and then inlcude it but it's a bad practice
// #include"Student.h"

// // the members of a class are private by default
// class school{
// private:
//     string name{};
//     int sch_id{};
// public:
//     void studies( Teacher& th, Student& sdt ){
//         cout << sdt.getName() << " studies under " << th.getName() << '\n';
//     }
//     void teaches( Student& sdt, Teacher& th ){
//         cout << th.getName() << " Teaches " << sdt.getName() << '\n';
//     }
//     void print() const ;
// };

// void school::print() const {
//     cout << "print called1 " << '\n';
// }

// int main(){

//     Student s1{"rahul",1}; // this type of initialization is called aggregate initialization
//     Student s2{"rakesh",2}; // aggregate initialization can only be done to public members not private members

//     Teacher t1{"ramesh",111};
//     Teacher t2{"suresh",222};

//     school sc1;

//     sc1.studies(t1,s1);
//     sc1.teaches(s2,t2);

//     s1.print();
//     t1.print();

//     sc1.print();

//     // cout << sc1.name << endl; // won't work as name is private
// }
