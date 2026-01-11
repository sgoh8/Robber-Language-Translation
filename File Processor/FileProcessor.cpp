/* 
Full name: San San Goh
Student ID: 2477595
Chapman email: sgoh@chapman.edu
Course number and section: CPSC 350-03
Assignment: PA1 - Robber Language Translaton
*/

#include "FileProcessor.h" 
#include <fstream>
#include <iostream>


FileProcessor::FileProcessor() {}
FileProcessor::~FileProcessor() {}

void FileProcessor::processFile(std::string inputFile, std::string outputFile) {
    std::ifstream inFile(inputFile);    // open input file
    std::string line;
    std::string output;
    std::ofstream outFile (outputFile);  // open output file


    if (inFile.is_open()) {     // check if input file was open successfully 
        std::cout << "in file open" << std::endl; 
        if (outFile.is_open()) { // check if output file was open successfully 
            std::cout << "out file open" << std::endl; 
            outFile << "<!DOCTYPE html>\n<html>\n<head>\n<title>English to Robber Translation</title>\n</head>\n<body>\n";

            while (std::getline(inFile, line)){     // read the input file content line by line
                std::cout << line << std::endl; 
                std::cout << "hello" << std::endl; 

                output += "<p><i>" + translator.translateEnglishSentence(line) + "</i><br></p>\n";   
                
                outFile << "<p><b>" + line +  "</b><br></p>"; // write the original line in the output file
            }
            outFile << "<p><b></b><br></p>" << output; // write the translated content into the output file
            outFile << "<p><i></i><br></p>\n</body>\n</html>";
            outFile.close();    // close output file

        } else {
            std::cout << "Error opening output file" << std::endl;
        }
        inFile.close(); // close input file

    } else {
        std::cout << "Error opening input file" << std::endl;

    }
}


