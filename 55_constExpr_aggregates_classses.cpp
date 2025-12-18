// #include <iostream>

// // for struct object,function should be declared constexpr to be able to compile at compile time

// // struct Pair // Pair is an aggregate
// // {
// //     int m_x {};
// //     int m_y {};

// //     constexpr int greater() const
// //     {
// //         return (m_x > m_y  ? m_x : m_y);
// //     }
// // };

// // int main()
// // {
// //     constexpr Pair p { 5, 6 };        // now constexpr
// //     std::cout << p.greater() << '\n'; // p.greater() evaluates at runtime or compile-time

// //     constexpr int g { p.greater() };  // p.greater() must evaluate at compile-time
// //     std::cout << g << '\n';

// //     return 0;
// // }

// // for classes : object,constructor and function should be declared constexpr to be able to compile at compile time

// class Pair
// {
// private:
//     int m_x {};
//     int m_y {};

// public:
//     constexpr Pair(int x, int y): m_x { x }, m_y { y } {} // now constexpr

//     constexpr int greater() const
//     {
//         return (m_x > m_y  ? m_x : m_y);
//     }
// };

// int main()
// {
//     constexpr Pair p { 5, 6 };
//     std::cout << p.greater() << '\n';

//     constexpr int g { p.greater() };
//     std::cout << g << '\n';

//     return 0;
// }
