#include "calculator.h"

//Lab 2 
//Computer architecture 2
//Pokydina Yelyzaveta 
//IO-03
// ...

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
