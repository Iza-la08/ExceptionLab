/**
* @file Exceptions.cpp
 * @brief Implements the custom exception classes.
 *
 * This file implements the FileOpenException and ParseException classes, both derived from std::exception.
 * Each class stores a custom error message passed during construction and overrides the what() method to return it.
 *
 * @author [Laiza Mae Galendez]
 * @date [November 5, 2025]
 * @version 1.0
 */

#include "Exceptions.h"

/**
 * @brief Returns the error message for FileOpenException.
 */
const char* FileOpenException::what() const noexcept {
    // .c_str() returns a const char* representation of the std::string
    return msg.c_str();
}

/**
 * @brief Returns the error message for ParseException.
 */
const char* ParseException::what() const noexcept {
    // .c_str() returns a const char* representation of the std::string
    return msg.c_str();
}