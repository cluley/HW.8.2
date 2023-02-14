#include "rTriangle.h"

R_Triangle::R_Triangle(int a, int b, int c, int A, int B) {
	intro = "Прямоугольный треугольник: ";
	side_a = a;
	side_b = b;
	side_c = c;
	angle_A = A;
	angle_B = B;
	angle_C = 90;
	error_msg = "Прямоугольный треугольник: ошибка создания фигуры. Причина: угол C не равен 90";
	if (!check()) 
		throw std::domain_error(error_msg);
}

bool R_Triangle::check() {
	if (angle_C == 90) {
		return true;
	}
	else {
		return false;
	}
}