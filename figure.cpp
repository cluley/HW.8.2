#include "figure.h"

bool Figure::check() {
	if (sides == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Figure::print_info() {
	std::cout << intro << std::endl;
}