/**
 * @file CalculationEngine.h
 * @brief Declares a simple mathematical calculation engine.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"

/**
 * @class CalculationEngine
 * @brief Performs mathematical calculations and logs their results.
 *
 * @details
 * The CalculationEngine uses a Logger object to report when a
 * calculation starts and to display its result. This example
 * provides a power operation.
 */
class CalculationEngine {
public:
    /**
     * @brief Creates a calculation engine.
     *
     * @param logger Logger used to report calculation information.
     */
    explicit CalculationEngine(const Logger& logger);

    /**
     * @brief Calculates base raised to exponent.
     *
     * @param base The number being raised to a power.
     * @param exponent The non-negative integer exponent.
     * @return The result of base raised to exponent.
     *
     * @todo Add support for negative exponents and more operations.
     */
    double power(double base, int exponent) const;

private:
    /** Logger used by this calculation engine. */
    const Logger& logger_;
};

#endif // CALCULATION_ENGINE_H
