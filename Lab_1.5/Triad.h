#pragma once
typedef double number;
class Triad {
private:
	number x;
	number y;
	number z;
public:
	void Set_x(number value) { x = value; }
	number Get_x()const { return x; }

	void Set_y(number value) { y = value; }
	number Get_y()const { return y; }

	void Set_z(number value) { z = value; }
	number Get_z()const { return z; }

	void Read();
	void Display();
	void Init(number, number, number);
	std::string toString();

	number Addition();
};