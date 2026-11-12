/**
 * @file Logger.cpp
 * @brief Implements the Logger class.
 */

#include "Logger.h"

/**
 * @brief Constructs a Logger using the supplied output stream.
 *
 * @param output Stream where log messages will be written.
 */
Logger::Logger(std::ostream& output)
    : output_(output) {
}

/**
 * @brief Prints a message preceded by its log level.
 *
 * @param level Severity of the message.
 * @param message Text to print.
 */
void Logger::log(LogLevel level, const std::string& message) const {
    switch (level) {
        case LogLevel::INFO:
            output_ << "[INFO] ";
            break;
        case LogLevel::WARNING:
            output_ << "[WARNING] ";
            break;
        case LogLevel::ERROR:
            output_ << "[ERROR] ";
            break;
    }

    output_ << message << '\n';
}
