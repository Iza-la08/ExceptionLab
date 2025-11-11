//
// Created by Christopher Vaughn on 10/29/25.
//
/**
 * @file FileUtils.cpp
 * @brief Implements utility functions for handling file operations.
 *
 * This tries to open a file and throws a FileOpenException if the file cannot be opened.
 * Prompts the user to re-enter the filename if the first attempt fails.
 * 
 * @author [Laiza Mae Galendez]
 * @date [November 5, 2025]
 * @version 1.0
 */

#include "FileUtils.h"
#include "Exceptions.h"     // Include for student's custom exceptions
#include <iostream>         // For cout, cerr, cin
#include <string>           // For string
#include <fstream>          // For ifstream

using namespace std;

/**
 * @brief Attempts to open a file, handling failures and retries.
 * * This function contains the logic that the student must
 * convert to use try...catch with FileOpenException.
 *
 * @param file The ifstream object to be opened (passed by reference).
 * @param initialFilename The first filename to try.
 */
void openFileForReading(std::ifstream& file, const std::string& initialFilename) {

    // STUDENT TODO: Replace the following 'if' block with a
    // try...catch block that throws and catches a FileOpenException.
    try {
        file.open(initialFilename);

        if (!file.is_open()) {
            throw FileOpenException("File could not be opened: " + initialFilename);
		}

		cout << "File opened successfully: " << initialFilename << endl;
    }
	catch (const FileOpenException& e) {
		cerr << "Error caught: " << e.what() << endl;

        // This logic should be inside your 'catch' block
        string alternativeFilename;
        cout << "Enter alternative filename: ";
        cin >> alternativeFilename;

        file.open(alternativeFilename);
        if (!file.is_open()) {
			throw FileOpenException("Alternative file could not be opened: " + alternativeFilename);
        }
        cout << "Alternative file opened successfully: " << alternativeFilename << endl;
    }
}