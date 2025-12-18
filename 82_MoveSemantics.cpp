#include <iostream>

#include <utility>

#include <cstring>
 
class MyString {

    char* data;

public:

    MyString(const char* str) {

        std::cout << "Construct\n";

        data = new char[strlen(str) + 1];

        strcpy(data, str);

    }
 
    // Copy constructor

    MyString(const MyString& other) {

        std::cout << "Copy\n";

        data = new char[strlen(other.data) + 1];

        strcpy(data, other.data);

    }
 
    // Move constructor

    MyString(MyString&& other) noexcept {

        std::cout << "Move\n";

        data = other.data;

        other.data = nullptr;

    }
 
    ~MyString() { delete[] data; }

};
 
int main() {

    MyString s1("Rahul");
    std::cout << &s1 << std::endl;

    MyString s2 = std::move(s1); // triggers move constructor
    std::cout << &s2 << std::endl;
    MyString s3 = s2; // triggers copy constructor

    std::cout << &s1 << std::endl; // s1's data is now nullptr
    std::cout << &s2 << std::endl;


}
