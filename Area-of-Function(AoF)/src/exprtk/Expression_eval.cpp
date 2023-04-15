#include "Expression_eval.h"

Expression_eval::Expression_eval() {}
double Expression_eval::result(double x, std::string expression_string) {
    double result;

    exprtk::symbol_table<double> symbol_table;
    symbol_table.add_variable("x", x);
    symbol_table.add_constants();
    exprtk::expression<double> expression;
    expression.register_symbol_table(symbol_table);

    exprtk::parser<double> parser;
    parser.compile(expression_string, expression);

    result = expression.value();

    return result;
}