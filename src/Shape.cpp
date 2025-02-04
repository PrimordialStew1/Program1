// Shape.cpp : This file contains Shape Class implementation
// Class demonstration for program 1
// Author: Aaron Davis – This is my own work!
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// For: CS221-02, Spring 2025 Mrs. Delugach
// Using compiler g++

#include <iostream>
#include "Shape.h"

using std::cout;

Shape::Shape()
{
    shapeType = "undefined shape";
    numSides = 0;
    borderColor = "clear";
    fillColor = "clear";

    cout << "Shape Class by Aaron Davis for Elementary Graphics\n\n";
}
Shape::~Shape()
{
    cout << "This shape got eviscerated!";
}

string Shape::GetFillColor()
{
    return fillColor;
}
void Shape::SetFillColor(string p_color)
{
    fillColor = p_color;
}

string Shape::GetBorderColor()
{
    return borderColor;
}
void Shape::SetBorderColor(string p_color)
{
    borderColor = p_color;
}

string Shape::GetShapeType()
{
    return shapeType;
}

int Shape::GetNumSides()
{
    return numSides;
}

float Shape::CalcArea()
{
    return 0.0;
}
int Shape::CalcPerimeter()
{
    return 0;
}

void Shape::PrintInfo(int p_size)
{
    if (shapeType == "circle")
    {
        cout << "Circle Object:\n";
        cout << "Radius = " << p_size << '\n';
        cout << "Border color = " << borderColor << ", Fill color = " << fillColor << '\n';
    }
    else if(shapeType == "triangle")
    {
        cout << "Triangle Object:\n";
        cout << "Side length = " << p_size << '\n';
        cout << "Border color = " << borderColor << ", Fill color = " << fillColor << '\n\n';
    }
    else
    {
        cout << "Shape Object:\n";
        cout << "Size = " << p_size << '\n';
        cout << "Border color = " << borderColor << ", Fill color = " << fillColor << '\n\n';
    }
}

void Shape::SetShapeType(string p_shapeType)
{
    shapeType = p_shapeType;
}

void Shape::SetNumSides(int p_numSides)
{
    numSides = p_numSides;
}