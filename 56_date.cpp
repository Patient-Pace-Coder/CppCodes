// #include "header_files/date.h"
// #include "header_files/date.h" // we are including date.h twice i.e. we are defining date class twice but
// //because of header guard (#ifndef DATE_H) this will get skipped so there is no compiler error stating redefinition of class Date
// #include<iostream>

// Date::Date( int day, int month, int year )
//     :   day{day}, month{month}, year{year} // since this is a constructor and  constructor is called before the object is created we cannot use 'this' keyword here

// {}

// void Date::print() const{
//     std::cout << this->day << " / " << this->month << " / " << this->year << std::endl;
// }

// int main(){

//     Date d1{22,8,2025};
//     d1.print();
// }

