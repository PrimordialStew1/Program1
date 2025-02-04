// Circle.cpp : This file contains Circle Class implementation
// Class demonstration for program 1
// Author: Aaron Davis – This is my own work!
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// For: CS221-02, Spring 2025 Mrs. Delugach
// Using compiler g++

#include "Circle.h"
#include <string>
#include <iostream>
#include <cmath>

using std::cout;
using std::string;

Circle::Circle()
{
    radius = DEFAULT_RADIUS;

    cout << "Circle Class by Aaron Davis for Elementary Graphics\n\n";
}
Circle::~Circle()
{
    cout << "Bye, bye circle!";
}
Circle::Circle(int p_rad, string p_fillColor, string p_borderColor)
{
    if (p_rad)
    {
        radius = abs(p_rad);
    }
    else
    {
        radius = DEFAULT_RADIUS;
    }

    cout << "Circle Class by Aaron Davis for Elementary Graphics\n\n";
}

int Circle::GetRadius()
{
    return radius;
}
void Circle::SetRadius(int p_rad)
{
    if (p_rad)
    {
        radius = abs(p_rad);
    }
}


float Circle::CalcArea()
{
    return PI * pow(radius, 2);
}
int Circle::CalcPerimeter()
{
    return 2 * PI * radius;
}

void Circle::PrintInfo()
{

}
