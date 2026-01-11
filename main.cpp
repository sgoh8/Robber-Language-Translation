/* 
Full name: San San Goh
Student ID: 2477595
Chapman email: sgoh@chapman.edu
Course number and section: CPSC 350-03
Assignment: PA1 - Robber Language Translaton
*/

#include "FileProcessor.h"
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {
    FileProcessor fileProcessor;

    std::string inputFile = argv[1];
    std::string outputFile = argv[2];

    fileProcessor.processFile(inputFile, outputFile);

}