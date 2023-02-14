#pragma once
#include "triangle.h"

class R_Triangle : public Triangle {
public:
	R_Triangle(int a, int b, int c, int A, int B);
	bool check() override;
};