// #include"header_files/date.h" // we are including date.h in multiple
// // files so this should violate ODR but types(classes,structs) are exempted from ODR
// #include<iostream>

// Date::Date( int day, int month, int year )
//     :   day{day}, month{month}, year{year} // since this is a constructor and  constructor is called before the object is created we cannot use 'this' keyword here
// {}
// void Date::print() const{ // this will result in ODR violation, only the class definition is excluded from ODR not the member functions defintion
//     std::cout << this->day << " / " << this->month << " / " << this->year << std::endl;
// }

// int main(){

//     Date d1{22,8,2025};
//     d1.print();
// }

