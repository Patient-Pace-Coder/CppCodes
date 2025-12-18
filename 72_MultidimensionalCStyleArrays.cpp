// int array[3][5]
// {
//   { 1, 2, 3, 4, 5 },     // row 0
//   { 6, 7, 8, 9, 10 },    // row 1
//   { 11, 12, 13, 14, 15 } // row 2
// };

// int main() {
// int arr[3][4] {
//         { 1, 2, 3, 4 },
//         { 5, 6, 7, 8 },
//         { 9, 10, 11, 12 }
//     };

//     // double for-loop with indices
//     for (std::size_t row{0}; row < std::size(arr); ++row) // std::size(arr) returns the number of rows
//     {
//         for (std::size_t col{0}; col < std::size(arr[0]); ++col) // std::size(arr[0]) returns the number of columns
//             std::cout << arr[row][col] << ' ';

//         std::cout << '\n';
//     }

//     // double range-based for-loop
//     for (const auto& arow: arr)   // get each array row
//     {
//         for (const auto& e: arow) // get each element of the row
//             std::cout << e << ' ';

//         std::cout << '\n';
//     }

    
// }