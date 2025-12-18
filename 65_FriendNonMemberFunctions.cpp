
/*

A friend can be a function, function template, or member function, or a class or
class template, in which case the entire class and all of its members are friends.

To declare all member functions of class ClassTwo as friends of class ClassOne,
place a following declaration in the definition of class ClassOne:

friend class ClassTwo;

*/

#include <iostream>
class Accumulator
{
private:
    int m_value { 0 };

public:
    int n_value { 0 };
    void add(int value) { 
        m_value += value;
        n_value += value;
    }

    // Two ways to declare friend non member functions
    // 1] Here is the friend declaration that makes non-member function void print(const Accumulator& accumulator) a friend of Accumulator
    friend void print(const Accumulator& accumulator);

    // 2] Friend functions defined inside a class are non-member functions
    // friend void print(const Accumulator& accumulator)
    // {
    //     std::cout << accumulator.m_value;
    // }
};

// non-member friend function
void print(const Accumulator& accumulator) // comes under 1]
{
    // Because print() is a friend of Accumulator
    // it can access the private members of Accumulator
    std::cout << accumulator.m_value << '\n';
    std::cout << accumulator.n_value << '\n';
}

// non-member non-friend function
void print1(const Accumulator& accumulator)
{
    std::cout << accumulator.n_value << '\n'; // can access public members of a class
    // std::cout << accumulator.m_value; // cannot access private members of a class
}

int main()
{
    Accumulator acc{};
    acc.add(5); // add 5 to the accumulator

    print(acc); // call the print() non-member friend function

    print1(acc); // call the print1() non-member non-friend function
    return 0;
}
