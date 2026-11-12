/**
 * @file CalculationEngine.cpp
 * @brief Implements the CalculationEngine class.
 */

#include "CalculationEngine.h"

/**
 * @brief Constructs a CalculationEngine.
 *
 * @param logger Logger used to report operations.
 */
CalculationEngine::CalculationEngine(const Logger& logger)
    : logger_(logger) {
}

/**
 * @brief Computes the power using repeated multiplication.
 *
 * @param base The number being raised.
 * @param exponent A non-negative integer exponent.
 * @return The computed power.
 */
double CalculationEngine::power(double base, int exponent) const {
    logger_.log(LogLevel::INFO, "Starting power calculation.");

    if (exponent < 0) {
        logger_.log(LogLevel::ERROR,
                    "Negative exponents are not supported in this example.");
        return 0.0;
    }

    double result = 1.0;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    logger_.log(LogLevel::INFO, "Power calculation completed.");
    return result;
}
