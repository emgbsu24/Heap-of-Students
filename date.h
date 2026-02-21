#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date();
    void init(string dateString);
    void printDate() const;
};

#endif

