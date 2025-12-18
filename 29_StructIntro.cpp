// #include<iostream>
// using namespace std;

// struct Employee{ // aggregate data type : any type that can contain multiple data members
//     string name; // member variables
//     int age;
//     int id;
//     double wage;
//     // the use of {} will let the member variables to get initialized to default values of the data type i.e. for int it is 0
//     // if we are not using the curly braces and if we try to print the value of variable then it will result in undefined behaviour
// };

// struct Employee1
// {
//     int age;
//     int id;
//     double wage{76000};
//     double whatever;
// };

// struct Something
// {
//     int x;       // no initialization value (bad)
//     int y {};    // value-initialized by default
//     int z { 2 }; // explicit default value
// };

// // passing structs by reference
// void printEmployee( const Employee& emp ){
//     cout << emp.name << ' ' << emp.age << ' ' << emp.id  << ' ' << emp.wage << endl;
// }

// // overloading '<<' as cout doesn't know how to print objects of type Employee1
// ostream& operator<<( ostream& out, Employee1& emp ){
//     out << emp.age << " " << emp.id << " " << emp.wage << " " << emp.whatever << endl;
//     return out;
// }

// int main(){

//     Employee rahul; // once declared it gets all the member variables
//     cout << rahul.name << endl;
//     cout << rahul.age << endl;
//     cout << rahul.id << endl;
//     cout << rahul.wage << endl;


//     rahul.name = "Rahul katteda";
//     rahul.age = 14;
//     rahul.id = 1224334;
//     rahul.wage = 12000;

//     // 2 ways to aggregate initialize the members of the object
//     // 1] copy-list initialization using braced list
//     Employee rakesh = {"rakesh",20,24545,1232.0};
//     // 2] list initialization using braced list - prefer this
//     Employee madhu{"madhu",22,24525,23522};

//     // Employee1 joe{}; // adding {} will initialize the members with default values, if not added then accessing the values will result in undefined behaviour
//     // cout << joe.age << endl;
//     // cout << joe.id << endl;
//     // cout << joe.wage << endl;
//     // cout << joe.whatever << endl;

//     Employee1 prateek{2,2825};
//     cout << prateek.age << endl; // 2 is assigned to age
//     cout << prateek.id << endl; // 2825 is assigned to id
//     cout << prateek.wage << endl; // default value of 76000 is assigned to wage as we have not explicitly assigned the value
//     cout << prateek.whatever << endl; // takes the default value of 0 as we have not assigned it to anything and doesn't even have the default value

//     const Employee1 rajesh{}; // const structs must be list initialized

//     // // designated initializers
//     // Employee1 praveen{.age{19}, .whatever{30}};
//     // cout << praveen << endl;

//     Employee praveen1 = rakesh; // copy initialization
//     Employee praveen2(madhu); // direct initialization
//     praveen2.name = "praveen";
//     Employee1 prajwal{prateek}; // direct list initialization

//     Something s1; // s1.x is uninitialized, s1.y is 0, and s1.z is 2
//     Something s2 { 5, 6, 7 }; // use explicit initializers for s2.x, s2.y, and s2.z (explicit initializers have higher priority than default values)
//     Something s3 {}; // value initialize s3.x since x is not initialized, uses default values for s3.y and s3.z

//     printEmployee(praveen2);
//     printEmployee(Employee{"Rahul",13,2452465,123124.00});

// }

