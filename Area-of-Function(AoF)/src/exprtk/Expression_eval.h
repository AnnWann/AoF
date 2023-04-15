#pragma once
#ifndef Expression_eval_H
#define Expression_eval_H

#include <iostream>
#include "exprtk.hpp"

class Expression_eval
{
public:
	Expression_eval();
	double result(double x, std::string Expression_string);

};

#endif // !Expression_eval_H

