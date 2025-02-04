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
    side1 = DEFAULT_SIDE1;
    side2 = DEFAULT_SIDE2;
    side3 = DEFAULT_SIDE3;
    SetBorderColor(DEFAULT_BORDER_COLOR);
    SetFillColor(DEFAULT_FILL_COLOR);

    std::cout << "Triangle Class by Aaron Davis for Elementary Graphics\n\n";
}
Triangle::~Triangle()
{
    std::cout << "Triangle Destroyed!";
}
Triangle::Triangle(int p_side1, int p_side2, int p_side3)
{
    if(p_side1 != 0)
    {
        side1 = abs(p_side1);
    }
    else
    {
        side1 = DEFAULT_SIDE1;
    }
    if(p_side2 != 0)
    {
        side2 = abs(p_side2);
    }
    else
    {
        side2 = DEFAULT_SIDE2;
    }
    if(p_side3 != 0)
    {
        side3 = abs(p_side3);
    }
    else
    {
        side3 = DEFAULT_SIDE3;
    }
    SetBorderColor(DEFAULT_BORDER_COLOR);
    SetFillColor(DEFAULT_FILL_COLOR);

    std::cout << "Triangle Class by Aaron Davis for Elementary Graphics\n\n";
}

int Triangle::GetSide1()
{
    return side1;
}
void Triangle::SetSide1(int p_side1)
{
    if(p_side1 != 0)
    {
        side1 = abs(p_side1);
    }
}

int Triangle::GetSide2()
{
    return side2;
}
void Triangle::SetSide2(int p_side2)
{
    if(p_side2 != 0)
    {
        side2 = abs(p_side2);
    }
}

int Triangle::GetSide3()
{
    return side3;
}
void Triangle::SetSide3(int p_side3)
{
    if(p_side3 != 0)
    {
        side3 = abs(p_side3);
    }
}

string Triangle::GetFillColor()
{
    return fillColor;
}
void Triangle::SetFillColor(string p_color)
{
    fillColor = p_color;
}

string Triangle::GetBorderColor()
{
    return borderColor;
}
void Triangle::SetBorderColor(string p_color)
{
    borderColor = p_color;
}

float Triangle::CalcArea()
{
    float area = 0;
    if (isValidTriangle(side1, side2, side3))
    {
        area = sqrt(4 * pow(side1, 2) * pow(side2, 2) - pow(pow(side1, 2) + pow(side2, 2) - pow(side3, 2), 2)) / 4;
    }
    else
    {
        area = 0;
    }

    return area;
}
int Triangle::CalcPerimeter()
{
    int perimeter = 0;
    if (isValidTriangle(side1, side2, side3))
    {
        perimeter = side1 + side2 + side3;
    }

    return perimeter;
}

void Triangle::PrintInfo()
{
    std::cout << "Triangle Object:\nSide1 = " << side1 << ", Side2 = " << side2 << ", Side3 = " << side3 << "\nBorder Color = " << borderColor << ", Fill Color = " << fillColor << "\n\n";
}

// Private functions

int Triangle::isValidTriangle(int p_side1, int p_side2, int p_side3)
{
    int valid = 0;
    if ((p_side1 + p_side2 > p_side3) && (p_side1 + p_side3 > p_side2) && (p_side2 + p_side3 > p_side1))
    {
        valid = 1;
    }

    return valid;
}
