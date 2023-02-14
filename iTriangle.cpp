#include "iTriangle.h"

I_Triangle::I_Triangle(int a, int b, int A, int B) {
	intro = "Равнобедренный треугольник: ";
	side_a = a;
	side_b = b;
	side_c = a;
	angle_A = A;
	angle_B = B;
	angle_C = A;
	error_msg = "Равнобедренный треугольник: ошибка создания фигуры. Причина: стороны a и c не равны и/или углы A и C не равны";
	if (!check()) 
		throw std::domain_error(error_msg);
}

bool I_Triangle::check() {
	if (side_a == side_c && angle_A == angle_C) {
		return true;
	}
	else {
		return false;
	}
}