#pragma once
#ifndef Calculo_H
#define Calculo_H
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "../exprtk/Expression_eval.h"

class Calculus
{
private:

	//variables

	double DeltaX, interval_Start, interval_End;
	double precision_Alg;
	std::string expression_string;
	Expression_eval expression_eval;

	//methods

	double rectangleHeight(int function_sector); // for the methods that use a rectangle in the bottom of the image, used only internally



public:

	//constructor

	Calculus(double precision_Alg, double interval_Start, double interval_End, std::string expression_string);

	//methods
	double rectangleArea(); //area using superposed rectangle over the function's image
	double trapezeArea(); //area using a superposed trapeze over the function's image
	double semicircunference(); //area using a superposed rectangle under a semicircuference over the function's image
	double isoscelesPike(); //area using a superposed rectangle under a isosceles triangle over the functions's image
	double equilateralPike(); //area using a superposed rectangle under a equilateral triangle over the functions's image
	double semihexagon_OUT(); //area using a superposed rectangle under a outwards semihexogonal over the functions's image
	double semihexagon_IN(); //area using a superposed rectangle under a inwards semihexogonal over the functions's image
	double semiellipse_OUT(); //area using a superposed rectangle under a outwards ellipse over the functions's image
	double semiellipse_IN(); //area using a superposed rectangle under a inwards ellipse over the functions's image
};


#endif // !Calculo_H