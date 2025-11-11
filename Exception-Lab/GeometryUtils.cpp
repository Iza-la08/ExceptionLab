//
// Created by Christopher Vaughn on 10/29/25.
//
/**
 * @file GeometryUtils.cpp
 * @brief Implements the geometry utility functions.
 *
 * This handles squares, rectangles, and circles. Throws std::invalid_argument
 * for invalid (zero or negative) dimensions.
 *
 * @author [Laiza Mae Galendez]
 * @date [November 6, 2025]

 * @version 1.0
 */

#include "GeometryUtils.h"
#include <iostream>
#include <stdexcept>    // For std::invalid_argument
#include <string>       // For std::to_string

using namespace std;

/**
 * @brief Calculates the area of a square.
 */
double calculateArea(double side) {
    // STUDENT TODO: Replace this 'if' block with a
    // 'throw std::invalid_argument' exception.
    // Example: throw std::invalid_argument("Side cannot be zero or negative: " + std::to_string(side));
    if (side <= 0) {
        throw std::invalid_argument("Side cannot be zero or negative: " + std::to_string(side));
    }
    return side * side;
}

/**
 * @brief Calculates the area of a rectangle (Overloaded).
 */
double calculateArea(double length, double width) {
    // STUDENT TODO: Replace this 'if' block with a
    // 'throw std::invalid_argument' exception.
    if (length <= 0 || width <= 0) {
        throw std::invalid_argument("Rectangle dimensions cannot be zero or negative: " + std::to_string(length) + ", " + std::to_string(width));
    }
    return length * width;
}

/**
 * @brief Calculates the area of a circle.
 */
double calculateCircleArea(double radius) {
    // STUDENT TODO: Replace this 'if' block with a
    // 'throw std::invalid_argument' exception.
    if (radius <= 0) {
		throw std::invalid_argument("Circle radius cannot be zero or negative: " + std::to_string(radius));
    }
    const double PI = 3.1415926535; // A more precise PI
    return PI * radius * radius;
}

