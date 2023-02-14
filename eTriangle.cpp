#include "eTriangle.h"

E_Triangle::E_Triangle(int a, int A) {
	intro = "Равносторонний треугольник: ";
	side_a = a;
	side_b = a;
	side_c = a;
	angle_A = A;
	angle_B = A;
	angle_C = A;
	error_msg = "Равносторонний треугольник: ошибка создания фигуры. Причина: не все стороны равны и/или не все углы равны 60";
	if (!check()) 
		throw std::domain_error(error_msg);
}

bool E_Triangle::check() {
	if (side_a == side_c && side_c == side_b && angle_A == angle_C && angle_C == angle_B) {
		return true;
	}
	else {
		return false;
	}
}