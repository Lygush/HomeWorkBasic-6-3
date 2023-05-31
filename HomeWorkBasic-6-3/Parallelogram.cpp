#include "Quadrangle.h"
#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B, "ֿאנאככוכמדנאלל") {}
Parallelogram::Parallelogram(int a, int b, int A, int B, std::string name) : Quadrangle(a, b, a, b, A, B, A, B, name) {}