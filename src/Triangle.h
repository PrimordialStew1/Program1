// Triangle.h : This file contains Triangle Class declaration
// Class demonstration for program 1
// Author: Aaron Davis – This is my own work!
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// For: CS221-02, Spring 2025 Mrs. Delugach
// Using compiler g++

#pragma once
#include "Shape.h"

using std::string;

class Triangle : public Shape
{
private:
    int sides = 0;

    const int DEFAULT_SIDES = 2;
    
    const string DEFAULT_BORDER_COLOR = "Red";
    const string DEFAULT_FILL_COLOR = "Grey";

public:
    Triangle();
    ~Triangle();
    Triangle(int p_sides, string p_fillColor, string p_borderColor);

    int GetSides();
    void SetSides(int p_sides);

    float CalcArea();
    int CalcPerimeter();

    void PrintInfo();
};