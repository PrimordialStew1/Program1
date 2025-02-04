// Triangle.cpp : This file contains Triangle Class implementation
// Class demonstration for program 1
// Author: Aaron Davis – This is my own work!
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// For: CS221-02, Spring 2025 Mrs. Delugach
// Using compiler g++

#include "Triangle.h"
#include <string>
#include <iostream>
#include <cmath>

using std::string;

Triangle::Triangle()
{
    SetShapeType("triangle");
    SetNumSides(3);
    SetSides(DEFAULT_SIDES);
    SetBorderColor(DEFAULT_BORDER_COLOR);
    SetFillColor(DEFAULT_FILL_COLOR);

    std::cout << "Triangle Class by Aaron Davis for Elementary Graphics\n\n";
}
Triangle::~Triangle()
{
    std::cout << "Triangle Destroyed!";
}
Triangle::Triangle(int p_sides, string p_fillColor, string p_borderColor)
{
    SetSides(p_sides);

    SetBorderColor(DEFAULT_BORDER_COLOR);
    SetFillColor(DEFAULT_FILL_COLOR);

    std::cout << "Triangle Class by Aaron Davis for Elementary Graphics\n\n";
}

int Triangle::GetSides()
{
    return sides;
}

void Triangle::SetSides(int p_sides)
{
    if(p_sides)
    {
        sides = abs(p_sides);
    }
    else
    {
        sides = DEFAULT_SIDES;
    }
}


float Triangle::CalcArea()
{
    float area = (sqrt(3) / 4) * pow(sides, 2);
    return area;
}
int Triangle::CalcPerimeter()
{
    int perimeter = 3 * sides;
    return perimeter;
}

void Triangle::PrintInfo()
{
    Shape::PrintInfo(sides);
}
