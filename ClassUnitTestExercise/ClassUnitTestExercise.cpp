// ClassUnitTestExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


float Add(float left_operand, float right_operand) 
{ 
float result = left_operand + right_operand;
return result; 
}


int main()
{
	std::cout << Add(3.5, 7.8);
}


