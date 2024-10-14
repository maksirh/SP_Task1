#include "calculator.h"
#include <iostream>

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Del (double a, double b)
{
    return a / b;
}

int Calculator::raiseToPower (int a, int b)
{

    int c = 1;

    if (b == 0)
    {
        return c;
    }

    else if( b > 0) {
        
        for (int i = 0; i < b; i++) {
        c = c*a;
    }
    }

    else if (b < 0){
        cout << "Error. Only positive numbers" << endl;
    }

    return c;
}
