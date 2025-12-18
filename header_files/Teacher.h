#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>
#include <string_view>
using namespace std;

// to know the usecase of this refer 39_AccessSpecifiers.cpp
class Teacher{
private:
    string name{};
    int empId{};

public: // best practice to make member functions public and member variables private
    Teacher( string n, int id ){
        name = n;
        empId = id;
    }
    string_view getName(){
        return name;
    }

    // this causes circular dependency : solution is to create a student class in student header file and then use both student and teacher in school class

    // void Teaches( student& sdt ){
    //     cout << name << " Teaches " << sdt.getName() << '\n';
    // }

    void print() const{
        cout << "I m a teacher" << '\n';
    }
};

#endif // TEACHER_H
