
#include "Triangle.h"
#include "Circle.h"
#include <iostream>

int main()
{

    Triangle triangle1(-5, 0, 0);

    triangle1.PrintInfo();

    std::cout << triangle1.CalcArea() << '\n';
    std::cout << triangle1.CalcPerimeter();

    Circle circle1(0, "Red", "Grey");
    circle1.PrintInfo();

    std::cout << circle1.CalcArea() << '\n';

    return 0;
}