#pragma once
#include "triangle.h"

class E_Triangle : public Triangle {
public:
	E_Triangle(int a, int A);
	bool check() override;
};