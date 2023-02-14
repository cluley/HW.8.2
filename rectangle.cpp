#include "rectangle.h"

Rectangle::Rectangle(int a, int b) {
	intro = "Прямоугольник: ";
	side_a = a;
	side_b = b;
	side_c = a;
	side_d = b;
	angle_A = 90;
	angle_B = 90;
	angle_C = 90;
	angle_D = 90;
	error_msg = "Прямоугольник: ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны и/или не все углы равны 90";
	if (!check()) 
		throw std::domain_error(error_msg);
}

bool Rectangle::check() {
	if (side_a == side_c && side_b == side_d && angle_A == 90 && angle_B == 90 && angle_C == 90 && angle_D == 90) {
		return true;
	}
	else {
		return false;
	}
}