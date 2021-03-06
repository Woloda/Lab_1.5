#include <iostream>
#include <sstream>
#include "Triad.h"

void Triad::Read() {
	number a, b, c;
	std::cout << "\n\nEnter the number x: "; std::cin >> a;
	std::cout << "Enter the number y: "; std::cin >> b;
	std::cout << "Enter the number z: "; std::cin >> c;
	Init(a, b, c);
}

void Triad::Display() {
	std::cout << "\n\nEnter the number x: " << x;
	std::cout << "\nEnter the number y: " << y;
	std::cout << "\nEnter the number z: " << z;
}

void Triad::Init(number a, number b, number c) {
		x = a;
		y = b;
		z = c;
}

std::string Triad::toString() {
	std::string str;
	std::stringstream sout;
	sout << "\n\ncoordinate x: " << x;
	sout << "\ncoordinate y: " << y;
	sout << "\ncoordinate z: " << z;

	return sout.str();
}

number Triad::Addition() {
	return x + y + z;
}