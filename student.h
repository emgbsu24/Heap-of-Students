#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "address.h"
#include "date.h"

using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    Address address;
    Date birthDate;
    Date gradDate;
    int credits;

public:
    Student();
    void init(string csvLine);
    void printStudent() const;
    string getLastFirst() const;
};

#endif

