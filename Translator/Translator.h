/* 
Full name: San San Goh
Student ID: 2477595
Chapman email: sgoh@chapman.edu
Course number and section: CPSC 350-03
Assignment: PA1 - Robber Language Translaton
*/

#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <iostream>
#include "Model.h"
#include <string>

class Translator {
    private:
        Model model; 

    public:
        Translator();   // constructor
        ~Translator();  //destructor

        std::string translateEnglishWord(std::string word);
        std::string translateEnglishSentence(std::string sentence);

};

#endif