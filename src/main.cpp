
#include "Triangle.h"
#include "Circle.h"
#include <iostream>

int main() {

  Triangle triangle1(-6, 8, 10);

  triangle1.PrintInfo();

  std::cout << triangle1.CalcArea() << '\n';
  std::cout << triangle1.CalcPerimeter();

  Circle circle1;
  circle1.PrintInfo();
  
  std::cout << circle1.GetArea() << '\n';
  


  return 0;
}