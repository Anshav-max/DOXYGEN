/**
 * @file main.cpp
 * @brief Entry point for the Simple Calculator with Logger example.
 *
 * @mainpage Simple Calculator with Logger
 *
 * @section intro Introduction
 * This small C++ project demonstrates how to document a multi-file
 * application using Doxygen. It contains a Logger and a
 * CalculationEngine.
 *
 * @section usage Usage
 * Run the program to calculate a number raised to a non-negative
 * integer exponent. The Logger prints status messages.
 */

#include "CalculationEngine.h"
#include "Logger.h"

#include <iostream>

/**
 * @brief Runs the calculator example.
 *
 * @return 0 when the program finishes successfully.
 */
int main() {
    Logger logger;
    CalculationEngine engine(logger);

    const double base = 2.0;
    const int exponent = 3;

    const double result = engine.power(base, exponent);

    std::cout << base << " raised to " << exponent
              << " = " << result << '\n';

    return 0;
}
