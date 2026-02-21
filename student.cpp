#include <iostream>
#include <sstream>
#include "student.h"

Student::Student() {
	firstName = " ";
	lastName = " ";
	credits = 0;
}
void Student::init(std::string csvLine) {
	std::stringstream ss(csvLine);
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string birth;
	std::string grad;
	std::string creditString;

	getline(ss, firstName, ',');
	getline(ss, lastName, ',');
	getline(ss, street, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zip, ',');
	getline(ss, birth, ',');
	getline(ss, grad, ',');
	getline(ss, creditString, ',');

	credits = std::stoi(creditString);

	address.init(street, city, state, zip);
	birthDate.init(birth);
	gradDate.init(grad);
}
void Student::printStudent() const {
	std::cout << firstName << " " << lastName << std::endl;

	address.printAddress();

	std::cout << "D.O.B. ";
	birthDate.printDate();
	
	std::cout << "Grad: ";
	gradDate.printDate();
	
	std::cout << "Credits: " <<credits << std::endl;
}
std::string Student::getLastFirst() const {
	return lastName + ", " + firstName;
}
