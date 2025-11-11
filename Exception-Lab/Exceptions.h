/**
 * @file Exceptions.h
 * @brief Declares custom exception classes for the shape parser.
 *
 * Defines FileOpenException and ParseException, which both inherit from std::exception.
 * These custom exceptions are used in the ShapeFile Parser to manage and report errors clearly and effectively.
 *
 * @author [Laiza Mae Galendez]
 * @date [November 5, 2025]
 * @version 1.0
 */

#pragma once

#include <exception>
#include <string>

/**
 * @class FileOpenException
 * @brief Exception thrown when a file fails to open.
 */
class FileOpenException : public std::exception {
private:
    std::string msg;

public:
    /**
     * @brief Constructor that takes a custom error message.
     * @param message The error message.
     */
    FileOpenException(const std::string& message) : msg(message) {}

    /**
     * @brief Returns the error message.
     * @return A C-style string describing the error.
     */
    virtual const char* what() const noexcept override;
};

/**
 * @class ParseException
 * @brief Exception thrown when a line in the data file is malformed.
 */
class ParseException : public std::exception {
private:
    std::string msg;

public:
    /**
     * @brief Constructor that takes a custom error message.
     * @param message The error message.
     */
    ParseException(const std::string& message) : msg(message) {}

    /**
     * @brief Returns the error message.
     * @return A C-style string describing the error.
     */
    virtual const char* what() const noexcept override;
};
