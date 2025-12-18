// #include <iostream>

// static local varibles

// // static int s_id{0};
// int generateID()
// {
//     static int s_id{ 0 }; // static local variable get's initialized only in the first call and in the subsequent calls it retains it's current value
//     return ++s_id;
// }

// int main()
// {
//     std::cout << generateID() << '\n';
//     std::cout << generateID() << '\n';
//     std::cout << generateID() << '\n';

//     return 0;
// }

// static member variables


// struct Student{

//     static int classNum; // this is shared by all the objects of the class, also static member variables are not allowed to initialize here
// };

// int Student::classNum{10};

// int main(){

//     // Student s1{10}; // error stating excess elements in struct initializer
//     Student s1{};
//     Student s2{};

//     std::cout << s1.classNum << '\n';
//     std::cout << s2.classNum << '\n';

//     s2.classNum++;
//     std::cout << s1.classNum << '\n';
//     std::cout << s2.classNum << '\n';

//     std::cout << Student::classNum << '\n'; // another way to access public static member variables

// }

//USE OF STATIC MEMBER VARIABLES : TO ASSIGN UNIQUE ID FOR EACH INSTANCE OF THE CLASS
// #include <iostream>

// class Something
// {
// private:
//     static inline int s_idGenerator { 1 };
//     int m_id {};

// public:
//     // grab the next value from the id generator
//     Something() : m_id { s_idGenerator++ }
//     {
//     }

//     int getID() const { return m_id; }
// };

// int main()
// {
//     Something first{};
//     Something second{};
//     Something third{};

//     std::cout << first.getID() << '\n';
//     std::cout << second.getID() << '\n';
//     std::cout << third.getID() << '\n';

//     return 0;
// }
