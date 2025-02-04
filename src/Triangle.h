// Triangle.h : This file contains Triangle Class declaration
// Class demonstration for program 1
// Author: Aaron Davis – This is my own work!
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// For: CS221-02, Spring 2025 Mrs. Delugach
// Using compiler g++

#pragma once
#include <string>

using std::string;

class Triangle
{
private:
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;
    string borderColor = "";
    string fillColor = "";

    const int DEFAULT_SIDE1 = 3;
    const int DEFAULT_SIDE2 = 4;
    const int DEFAULT_SIDE3 = 5;
    const string DEFAULT_BORDER_COLOR = "Red";
    const string DEFAULT_FILL_COLOR = "Grey";

    int isValidTriangle(int p_side1, int p_side2, int p_side3);

public:
    Triangle();
    ~Triangle();
    Triangle(int p_side1, int p_side2, int p_side3);

    int GetSide1();
    void SetSide1(int p_side1);

    int GetSide2();
    void SetSide2(int p_side2);

    int GetSide3();
    void SetSide3(int p_side3);

    string GetFillColor();
    void SetFillColor(string p_color);

    string GetBorderColor();
    void SetBorderColor(string p_color);

    float CalcArea();
    int CalcPerimeter();

    void PrintInfo();
};