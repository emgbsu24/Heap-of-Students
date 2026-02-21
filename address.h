#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zip;

public:
    Address();
    void init(string street,
              string city,
              string state,
              string zip);
    void printAddress() const;
};

#endif
