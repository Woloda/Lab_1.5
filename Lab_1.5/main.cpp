#include <iostream>
#include <iomanip>
#include "Triangle.h"     //підключає --- "#include Triangle.h" і "#include Triad.h"

int main(void) {
	Triad a;
	std::cout << "\nThe first object --- Triad: ";
	a.Read();

	std::cout << "\n\nDisplay first object --- Triad: ";
	a.Display();

	std::cout << "\n\nAdding object numbers is : " << a.Addition();

	std::cout << "\n\nletter string conversion method: ";
	std::cout << a.toString();

	Triangle b;
	std::cout << "\nThe second object --- Triangle: ";
	b.Read();

	std::cout << "\n\nDisplay second object --- Triangle: ";
	b.Display();

	std::cout << "\n\nThe area of the triangle is: " << std::setprecision(3) <<  b.Calcul_Square();

	angle alpha, beta, sigma;
	std::cout << "\n\nThe angles of the triangle are: ";

	b.Calcul_Angles(alpha, beta, sigma, b.Calcul_Square());
	std::cout << "\n\nThe first angle of the triangle is: " << std::setprecision(3) << alpha;
	std::cout << "\nThe second angle of the triangle is: " << std::setprecision(3) << beta;
	std::cout << "\nThe third angle of the triangle is: " << std::setprecision(3) << sigma;

	std::cout << "\n\nletter string conversion method: ";
	std::cout << b.toString();

	return 0;
}