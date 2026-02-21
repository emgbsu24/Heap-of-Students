#include <iostream>
#include <sstream>
#include "date.h"

Date::Date() {
	month = 0;
	day = 0;
	year = 0;
}
void Date::init(std::string dateString) {
	std::stringstream ss(dateString);
	char slash;
	ss >> month >> slash >> day >> slash >> year;
}
void Date::printDate() const {
	std::string monthNames[] = {
		" ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
	};

	std::cout << monthNames[month] << " " << day << ", " << year << std::endl;
}
