// #include <iostream>
// #include <string>
// #include <string_view>

// class Employee
// {
// private:
//     std::string m_name { "???" };
//     int m_id { 0 };

// public:
//     Employee(std::string_view name)
//         : Employee{ name, 0 } // delegate initialization to Employee(std::string_view, int) constructor
//     {
//     }

//     Employee(std::string_view name, int id)
//         : m_name{ name }, m_id { id } // actually initializes the members
//     {
//         std::cout << "Employee " << m_name << " created\n";
//     }

//     // explicitly defined copy constructor
//     // the copy constructor's parameter must be a lvalue reference no matter if it is const or non-const
//     Employee( const Employee& e )
//         : m_name{e.m_name}
//         , m_id{e.m_id}
//     {
//     }

//     // Employee( const Employee& e) = default; // explicitly request default copy constructor when there is no copy constructor available

//     // Employee( const Employee& e ) = delete; // deleting copy constructor so no copies can be made

//     std::string getName() const{
//         return m_name;
//     }
    
//     int getId() const{
//         return m_id;
//     }

// };

// void print( Employee e ){
//     std::cout << e.getName() << " " << e.getId() << std::endl;
// }

// Employee generated( std::string name, int id ){
//     Employee e{name,id};
//     return e;
// }

// int main()
// {
//     Employee e1{ "James" };
//     Employee e2{ "Dave", 42 };

//     print(e1); // instead of this we can pass temp objects
//     print(Employee {"rahul",50}); // temp object
//     print({"rakesh",30});

//     Employee e3{e2}; // this will call implicitly defined copy constrcutor if there is no explicitly defined copy constructor

//     print(e3); // here print's parameter is pass by value so copy is made by implicitly calling copy constructor

//     Employee e4{generated("ramesh",90)}; // when the return type is value then again copoy constructor does the copy and returns
// }
