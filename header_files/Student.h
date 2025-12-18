#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;


// refer 39_AcessSpecifiers.cpp
class Student{
private:
    string name{};
    int rollNum{};

public:
    Student( string n, int rn ){
        name = n;
        rollNum = rn;
    }
    string_view getName(){
        return name;
    }
    // this causes circular dependencies i.e. we have to include Teacher.h and Teacher.h needs us to include student.h
    // void studies( Teacher& th ){
    //     cout << name << " studies under " << th.getName() << '\n';
    // }
    // void print(); // this is a forward declaration of a member function

    void print() const{
        cout << "i m a student " << '\n';
    }
};

#endif // STUDENT_H
