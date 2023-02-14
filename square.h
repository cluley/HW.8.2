#pragma once
#include "quadrangle.h"

class Square : public Quadrangle {
public:
	Square(int a);
	bool check() override;
};
