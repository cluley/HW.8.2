#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) {
	intro = "Параллелограмм: ";
	side_a = a;
	side_b = b;
	side_c = a;
	side_d = b;
	angle_A = A;
	angle_B = B;
	angle_C = A;
	angle_D = B;
	error_msg = "Параллелограмм: ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны и/или углы A,C и B,D попарно не равны";
	if (!check()) 
		throw std::domain_error(error_msg);
}

bool Parallelogram::check() {
	if (side_a == side_c && side_b == side_d && angle_A == angle_C && angle_B == angle_D) {
		return true;
	}
	else {
		return false;
	}
}