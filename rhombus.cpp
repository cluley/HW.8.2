#include "rhombus.h"

Rhombus::Rhombus(int a, int A, int B) {
	intro = "Ромб: ";
	side_a = a;
	side_b = a;
	side_c = a;
	side_d = a;
	angle_A = A;
	angle_B = B;
	angle_C = A;
	angle_D = B;
	error_msg = "Ромб: ошибка создания фигуры. Причина: не все стороны равны и/или углы A,C и B,D попарно не равны";
	if (!check())
		throw std::domain_error(error_msg);
}

bool Rhombus::check() {
	if (side_a == side_c && side_b == side_d && side_a == side_b && angle_A == angle_C && angle_B == angle_D) {
		return true;
	}
	else {
		return false;
	}
}