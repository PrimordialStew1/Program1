
#include "Triangle.h"
#include "Circle.h"
#include <iostream>

int main()
{

    // Triangle testing

    Triangle triangle1;
    Triangle triangle2(-5, 0, 10);

    triangle1.PrintInfo();
    triangle2.PrintInfo();

    triangle1.SetBorderColor("Magenta");
    triangle2.SetFillColor("Chartreuse");

    triangle1.PrintInfo();
    triangle2.PrintInfo();

    std::cout << "Triangle 1 Area: " << triangle1.CalcArea() << '\n';
    std::cout << "Triangle 2 Perimeter: " << triangle2.CalcPerimeter() << '\n';

    triangle1.SetSide1(0);  // Shouldn't affect object
    triangle2.SetSide2(-6); // Should be inverted

    triangle1.PrintInfo();
    triangle2.PrintInfo();

    std::cout << "Triangle 1 Area: " << triangle1.CalcArea() << '\n';
    std::cout << "Triangle 2 Perimeter: " << triangle2.CalcPerimeter() << '\n';

    // Circle testing

    Circle circle1;
    Circle circle2(-5, "Red", "Grey");

    circle1.PrintInfo();
    circle2.PrintInfo();

    circle1.SetRadius(4);
    circle2.SetRadius(0); // Shouldn't affect object

    circle1.SetBorderColor("Magenta");
    circle2.SetFillColor("Chartreuse");

    std::cout << "Circle 1 Area: " << circle1.CalcArea() << '\n';
    std::cout << "Circle 2 Perimeter: " << circle2.CalcPerimeter() << '\n';

    circle1.PrintInfo();
    circle2.PrintInfo();

    return 0;
}