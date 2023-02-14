#include "quadrangle.h"

Quadrangle::Quadrangle() {
	sides = 4;
	intro = "Четырехугольник: ";
	side_a = 10;
	side_b = 20;
	side_c = 30;
	side_d = 40;
	angle_A = 90;
	angle_B = 90;
	angle_C = 90;
	angle_D = 90;
	if (!check()) 
		throw std::domain_error(error_msg);
}

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
	sides = 4;
	intro = "Четырехугольник: ";
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
	angle_A = A;
	angle_B = B;
	angle_C = C;
	angle_D = D;
	if (!check()) 
		throw std::domain_error(error_msg);
}

bool Quadrangle::check() {
	if (sides == 4 && (angle_A + angle_B + angle_C + angle_D) == 360) {
		return true;
	}
	else {
		return false;
	}
}

void Quadrangle::print_info() {
	std::cout << intro << "(Стороны: a = " << side_a << " b = " << side_b << " c = " << side_c << " d = " << side_d 
		<< "; Углы: A = " << angle_A << " B = " << angle_B << " C = " << angle_C << " D = " << angle_D << ") создан" << std::endl;
}