/* 
Full name: San San Goh
Student ID: 2477595
Chapman email: sgoh@chapman.edu
Course number and section: CPSC 350-03
Assignment: PA1 - Robber Language Translaton
*/

#include "Model.h" 
#include <iostream>
#include <cctype> 

Model::Model() {}   // constructor
Model::~Model() {}  // destructor

bool Model::isVowel(char c) {   // checks if the character is a vowel and an alphabet 
    char lowerC = std::tolower(c);
    if ((lowerC == 'a') || (lowerC == 'e') || (lowerC == 'i') || (lowerC == 'o') || (lowerC == 'u')) {
        if (isalpha(lowerC)) {
            return true;
        }
        
    } else {
        return false;
    }
}

bool Model::isConsonant(char c) {
    char lowerC = std::tolower(c);
    if (isalpha(lowerC) && (!isVowel(lowerC))) {    // check if the character is an alphabet and is not a vowel
        return true;

    } else {
        return false;
    }
}

std::string Model::translateSingleConsonant(char c) {
    std::string output;
    output += c;

    if (isConsonant(c)) { // if the character is a consonant, then double the consonant and insert an 'o' inbetween
        output += "o";
        output += tolower(c);
        return output;

    } else {    // if is not consonant, leave unchanged
        return output;
    }
}

std::string Model::translateSingleVowel(char c) {
    std::string output;

    if (isVowel(c)) { // if the character is a vowel, leave unchanged
        output += c;
        return output;
    }
}

