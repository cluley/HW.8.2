#pragma once
#include "quadrangle.h"

class Rhombus : public Quadrangle {
public:
	Rhombus(int a, int A, int B);
	bool check() override;
};