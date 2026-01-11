/* 
Full name: San San Goh
Student ID: 2477595
Chapman email: sgoh@chapman.edu
Course number and section: CPSC 350-03
Assignment: PA1 - Robber Language Translaton
*/

#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <iostream>
#include <string>
#include "Translator.h"

class FileProcessor {
    private:
        Translator translator;
    public:
        FileProcessor();    // defaut constructor 
        ~FileProcessor();   // default destructor
        
        void processFile(std::string inputFile, std::string outputFile);
};

#endif