// Circle.h : This file contains Circle Class declaration
// Class demonstration for program 1
// Author: Aaron Davis – This is my own work!
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// For: CS221-02, Spring 2025 Mrs. Delugach
// Using compiler g++

#pragma once
#include "Shape.h"

using std::string;

class Circle : public Shape
{
private:
    int radius = 0;

    const int DEFAULT_RADIUS = 10;
    const float PI = 3.14159;
    const string DEFAULT_FILL_COLOR = "Red";
    const string DEFAULT_BORDER_COLOR = "Grey";

public:
    Circle();
    ~Circle();
    Circle(int p_rad, string p_fillColor, string p_borderColor);

    int GetRadius();
    void SetRadius(int p_rad);

    float CalcArea();
    int CalcPerimeter();

    void PrintInfo();
};