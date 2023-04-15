#include "Calculus.h"

//constructor

Calculus::Calculus(double precision_Alg, double interval_Start, double interval_End, std::string expression_string) {
	if (interval_Start > interval_End) {
		double temp = interval_Start;
		interval_Start = interval_End;
		interval_End = temp;
	}
	this->interval_Start = interval_Start;
	this->interval_End = interval_End;
	this->expression_string = expression_string;
	this->precision_Alg = precision_Alg;
	this->DeltaX = (interval_End - interval_Start) / precision_Alg;
}

//methods

//private:
double Calculus::rectangleHeight(int function_sector) {
	return this->expression_eval.result(this->interval_Start + (function_sector - 1) * this->DeltaX, this->expression_string);
}

//public
double Calculus::rectangleArea() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * expression_eval.result(this->interval_Start + function_sector * this->DeltaX, this->expression_string);
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::trapezeArea() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + static_cast<double>(1) / 2 * this->DeltaX * (expression_eval.result(this->interval_Start + function_sector * this->DeltaX, this->expression_string) - rectangleHeight(function_sector));
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::semicircunference() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + static_cast<double>(1) / 2 * pow(this->DeltaX, 2) * M_PI;
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::isoscelesPike() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + (this->DeltaX / 2) * (expression_eval.result(this->interval_Start + ((function_sector - 1) + 1 / 2) * this->DeltaX, this->expression_string) - rectangleHeight(function_sector));
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::equilateralPike() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + DeltaX * sqrt(3) / 4;
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::semihexagon_OUT() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + static_cast<double>(3) / 2 * this->DeltaX * (expression_eval.result(this->interval_Start + this->DeltaX * function_sector, this->expression_string) - rectangleHeight(function_sector));
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::semihexagon_IN() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + static_cast<double>(3) / 2 * this->DeltaX * (expression_eval.result(this->interval_Start + this->DeltaX / 2 + this->DeltaX * (function_sector - 1), this->expression_string) - rectangleHeight(function_sector));
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::semiellipse_OUT() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + (M_PI * this->DeltaX/2 * (expression_eval.result(this->interval_Start + DeltaX * function_sector, this->expression_string) - rectangleHeight(function_sector)));
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
double Calculus::semiellipse_IN() {
	double tempResult = 0.0, totalResult = 0.0;
	for (int function_sector = 1; function_sector <= this->precision_Alg; function_sector++)
	{
		tempResult = this->DeltaX * rectangleHeight(function_sector) + (M_PI * this->DeltaX/2 * (expression_eval.result(this->interval_Start + this->DeltaX / 2 + DeltaX * (function_sector - 1), this->expression_string) - rectangleHeight(function_sector)));
		totalResult = totalResult + tempResult;
	}
	return totalResult;
}
