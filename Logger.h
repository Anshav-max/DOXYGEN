/**
 * @file Logger.h
 * @brief Declares a simple logging utility.
 *
 * This file contains the LogLevel enumeration and the Logger class.
 * The Logger class prints messages with a level label.
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

/**
 * @enum LogLevel
 * @brief Represents the severity of a log message.
 *
 * The values help identify whether a message is informational,
 * a warning, or an error.
 */
enum class LogLevel {
    /** General information about program execution. */
    INFO,

    /** A situation that may need attention. */
    WARNING,

    /** An operation failed or encountered a problem. */
    ERROR
};

/**
 * @class Logger
 * @brief Prints messages with their corresponding log level.
 *
 * Logger provides a small, reusable way to display messages.
 * It is used by CalculationEngine to report calculations.
 */
class Logger {
public:
    /**
     * @brief Constructs a Logger object.
     *
     * @param output The output stream where messages will be written.
     *               Defaults to the standard output stream.
     */
    explicit Logger(std::ostream& output = std::cout);

    /**
     * @brief Writes a message with a level label.
     *
     * @param level The severity level of the message.
     * @param message The message text to display.
     */
    void log(LogLevel level, const std::string& message) const;

private:
    /** Stream used to print log messages. */
    std::ostream& output_;
};

#endif // LOGGER_H
