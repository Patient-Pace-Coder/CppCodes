#include <algorithm>
#include <array>
#include <iostream>

bool greater(int a, int b)
{
    // Order @a before @b if @a is greater than @b. // this sorts the array in descending order
    return (a > b);
}

int main()
{
    std::array<int,6> arr{ 13, 90, 99, 5, 40, 80 };

    // Pass greater to std::sort using greater function pointer
    std::sort(arr.begin(), arr.end(), greater);

    // using lambda expression instead of function pointer
    std::sort(arr.begin(), arr.end(), [](int a,int b){ return a > b;});

    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    // using std::for_each to do something with each element of the array
    std::for_each(arr.begin(), arr.end(), [](int& i){ i *= 2; }); // double each element

    return 0;
}