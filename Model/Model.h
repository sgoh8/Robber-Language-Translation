/* 
Full name: San San Goh
Student ID: 2477595
Chapman email: sgoh@chapman.edu
Course number and section: CPSC 350-03
Assignment: PA1 - Robber Language Translaton
*/

#ifndef MODEL_H
#define MODEL_H
#include <iostream>
#include <string>

class Model {
    private:

    public:
        Model();    // default constructor 
        ~Model();   // default destructor 

        bool isVowel(char c);
        bool isConsonant(char c);

        std::string translateSingleConsonant(char c);
        std::string translateSingleVowel (char c);

};

#endif