// #include <ios>       // for std::boolalpha
// #include <iostream>

// template <typename T>
// class Pair
// {
// private:
//     T m_first{};
//     T m_second{};

// public:
//     // When we define a member function inside the class definition,
//     // the template parameter declaration belonging to the class applies
//     Pair(const T& first, const T& second)
//         : m_first{ first }
//         , m_second{ second }
//     {
//     }

//     bool isEqual(const Pair<T>& pair);
// };

// // When we define a member function outside the class definition,
// // we need to resupply a template parameter declaration
// template <typename T>
// bool Pair<T>::isEqual(const Pair<T>& pair)
// {
//     return m_first == pair.m_first && m_second == pair.m_second;
// }

// /*
//  * INJECTED CLASS NAMES
//  * if we are in the scope of Pair class then we can directly use Pair(compiler will read it as Pair<T> ) instead of Pair<T> becuase of injected class names
// */

// int main()
// {
//     Pair p1{ 5, 6 }; // uses CTAD to infer type Pair<int>
//     std::cout << std::boolalpha << "isEqual(5, 6): " << p1.isEqual( Pair{5, 6} ) << '\n';
//     std::cout << std::boolalpha << "isEqual(5, 7): " << p1.isEqual( Pair{5, 7} ) << '\n';

//     return 0;
// }
