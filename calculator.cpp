#include <iostream>
#include "class.cpp" 


int main()
{
    calculator c;
    double x, y;
    char opperand;
    
    std::cin >> x >> opperand >> y;

    c.evaluate(x, opperand, y);
    
    c.display();
    x = c.get_result();
    std::cout << "The result is " << x << std::endl;
    
    return 0;
}