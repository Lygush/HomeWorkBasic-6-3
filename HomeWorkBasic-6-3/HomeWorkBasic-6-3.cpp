#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"

void getInfo(Figure&);

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangleObj(10, 20, 30, 40, 50, 60);
    getInfo(triangleObj);

    RightTriangle right(10, 20, 30, 50, 60);
    getInfo(right);

    IsoscelesTriangle isoscele(10, 20, 30, 40);
    getInfo(isoscele);

    EquilateralTriangle equilateral(50);
    getInfo(equilateral);

    Quadrangle quadrangleObj(10, 20, 30, 40, 50, 60, 70, 80);
    getInfo(quadrangleObj);

    Parallelogram parallelogram(20, 30, 30, 40);
    getInfo(parallelogram);

    Rhomb rhomb(30, 40, 30);
    getInfo(rhomb);

    Square square(10);
    getInfo(square);

    Rectangle rectangle(10, 20);
    getInfo(rectangle);
}

void getInfo(Figure& info) {
    std::cout << info.Info();
}