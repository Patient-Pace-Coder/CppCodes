// #ifndef DATE_H  // header guards : checks if date class is already defined in the current file and if not defined then it will go to next line and define the class date.h
// #define DATE_H  // defines the date.h header file

_Pragma("once") // this is an alternative to header guards

// refer to 56_Date.cpp 57_Date1.cpp

class Date
{
private:
    int day{};
    int month{};
    int year{};
public:
    Date( int day, int month, int year );
    void print() const;

    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }
    int getDay() const {
        return day;
    }
};

// #endif // DATE_H
