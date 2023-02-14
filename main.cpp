#include "figure.h"
#include "triangle.h"
#include "rTriangle.h"
#include "iTriangle.h"
#include "eTriangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

int main(int argc, char** argv) {
	try {
		R_Triangle r_triangle(10, 20, 30, 40, 50);
		r_triangle.print_info();

		I_Triangle i_triangle(10, 20, 40, 80);
		i_triangle.print_info();

		E_Triangle e_triangle(30, 60);
		e_triangle.print_info();

		Quadrangle quadrangle(10, 20, 30, 40, 110, 80, 100, 70);
		quadrangle.print_info();

		Rectangle rectangle(20, 40);
		rectangle.print_info();

		Square square(20);
		square.print_info();

		Parallelogram parallelogram(20, 30, 40, 50);
		parallelogram.print_info();

		Rhombus rhombus(30, 40, 50);
		rhombus.print_info();

		Triangle triangle(10, 20, 30, 50, 60, 75);
		triangle.print_info();
	}
	catch (const std::domain_error& exc) { std::cout << exc.what() << std::endl; }

	return 0;
}