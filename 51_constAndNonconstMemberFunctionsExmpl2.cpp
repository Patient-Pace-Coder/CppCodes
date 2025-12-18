#include <iostream>
#include <string>

// version 1 : worst

// class Yogurt
// {
//     std::string m_flavor{ "vanilla" };

// public:
//     void setFlavor(std::string_view flavor)
//     {
//         m_flavor = flavor;
//     }

//     const std::string& getFlavor() const { return m_flavor; }

//     // Worst: member function print() uses direct access to m_flavor when getter exists
//     void print() const
//     {
//         std::cout << "The yogurt has flavor " << m_flavor << '\n';
//     }
// };

// int main()
// {
//     Yogurt y{};
//     y.setFlavor("cherry");
//     y.print();

//     return 0;
// }

// version 2 : better than version 1

// class Yogurt
// {
//     std::string m_flavor{ "vanilla" };

// public:
//     void setFlavor(std::string_view flavor)
//     {
//         m_flavor = flavor;
//     }

//     const std::string& getFlavor() const { return m_flavor; }

//     // Better: member function print() has no direct access to members
//     void print(std::string_view prefix) const
//     {
//         std::cout << prefix << ' ' << getFlavor() << '\n';
//     }
// };

// int main()
// {
//     Yogurt y{};
//     y.setFlavor("cherry");
//     y.print("The yogurt has flavor");

//     return 0;
// }

// version 3 : best

// class Yogurt
// {
//     std::string m_flavor{ "vanilla" };

// public:
//     void setFlavor(std::string_view flavor)
//     {
//         m_flavor = flavor;
//     }

//     const std::string& getFlavor() const { return m_flavor; }
// };

// // Best: non-member function print() is not part of the class interface
// void print(const Yogurt& y)
// {
//     std::cout << "The yogurt has flavor " << y.getFlavor() << '\n';
// }

// int main()
// {
//     Yogurt y{};
//     y.setFlavor("cherry");
//     print(y);

//     return 0;
// }
