#include "triangle.h"

Triangle::Triangle() {
	sides = 3;
	intro = "Треугольник: ";
	side_a = 30;
	side_b = 30;
	side_c = 50;
	angle_A = 50;
	angle_B = 50;
	angle_C = 80;
	if (!check())
		throw std::domain_error(error_msg);
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	sides = 3;
	intro = "Треугольник: ";
	side_a = a;
	side_b = b;
	side_c = c;
	angle_A = A;
	angle_B = B;
	angle_C = C;
	if (!check()) 
		throw std::domain_error(error_msg);
}

bool Triangle::check() {
	if (sides == 3 && (angle_A + angle_B + angle_C) == 180) {
		return true;
	}
	else {
		return false;
	}
}

void Triangle::print_info() {
	std::cout << intro << "(Стороны: a = " << side_a << " b = " << side_b << " c = " << side_c 
		<< "; Углы: A = " << angle_A << " B = " << angle_B << " C = " << angle_C << ") создан" << std::endl;
}