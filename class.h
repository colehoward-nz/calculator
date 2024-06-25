#pragma once


class calculator
{
private:
    double result;
public:
    calculator();
    double evaluate(double x, char operand, double y);
    double get_result();
    void display();
};