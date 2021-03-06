#pragma once
#include "Triad.h"
typedef double angle;
class Triangle {    //клас --- трикутник
private:
	Triad side;     //трійка числе --- сторін трикутника
public:
	void Set_side(Triad value) { side = value; }
	Triad Get_side()const { return side; }

	void Read();
	void Display();
	bool Init(Triad);
	std::string toString();

	double Calcul_Square();                                  //обчислення площі
	void Calcul_Angles(angle&, angle&, angle&, double);      //обчислення кутів трикутника
};