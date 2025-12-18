// #include <iostream>

// // template struct
// template <typename T>
// struct Pair
// {
//     T first{};
//     T second{};
//     int id{};
// };

// // template function whose parameter is a struct
// template <typename T>
// constexpr T max(Pair<T> p)
// {
//     return (p.first < p.second ? p.second : p.first);
// }

// int main()
// {
//     Pair<int> p1{ 5, 6,324242 };
//     std::cout << max<int>(p1) << " is larger\n"; // explicit call to max<int>

//     Pair<double> p2{ 1.2, 3.4,234242 };
//     std::cout << max(p2) << " is larger\n"; // call to max<double> using template argument deduction (prefer this)

//     return 0;
// }
