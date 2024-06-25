#include "class.h"
#include <cmath>


calculator::calculator() : result(0.0) {}

double calculator::evaluate(double x, char opperand, double y)
{
    switch (opperand)
    {
        case '+':
            result = x+y;
            break;
        case '-':
            result = x-y;
            break;
        case '/':
            result = x/y;
            break;
        case '*':
            result = x*y;
            break;
        case '^':
            result = pow(x, y);
            break;
        default: break;
    }
    return result;
}

double calculator::get_result()
{
    return result;
}

void calculator::display()
{
    std::cout << result << std::endl;
}