// Shape.h : This file contains Shape Class declaration
// Class demonstration for program 1
// Author: Aaron Davis – This is my own work!
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// For: CS221-02, Spring 2025 Mrs. Delugach
// Using compiler g++

#pragma once
#include <string>

using std::string;

class Shape
{
private:
    string shapeType = "";
    int numSides = 0;
    string fillColor = "";
    string borderColor = "";

public:
    Shape();
    ~Shape();
    
    string GetFillColor();
    void SetFillColor(string p_color);

    string GetBorderColor();
    void SetBorderColor(string p_color);

    string GetShapeType();

    int GetNumSides();

    float CalcArea();
    int CalcPerimeter();

    void PrintInfo(int p_size = 0);

protected:
    void SetShapeType(string p_shapeType);

    void SetNumSides(int p_numSides);

};
