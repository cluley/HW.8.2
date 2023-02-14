#pragma once
#include "triangle.h"

class I_Triangle : public Triangle {
public:
	I_Triangle(int a, int b, int A, int B);
	bool check() override;
};