/* 
Full name: San San Goh
Student ID: 2477595
Chapman email: sgoh@chapman.edu
Course number and section: CPSC 350-03
Assignment: PA1 - Robber Language Translaton
*/

#include "Translator.h" 
#include <cctype>
#include <sstream>
#include <string>

Translator::Translator() {}     // constructor
Translator::~Translator() {}    // destructor

std::string Translator::translateEnglishWord(std::string word) {
    std::string output;

    for (int i = 0; i < word.length(); i++) {   // loop through each letter in the word 
        if (model.isVowel(word[i])) {   // check to see if the letter is a vowel, if it is implment 'translateSingleVowel()' method
            output += model.translateSingleVowel(word[i]);

        } else if (model.isConsonant(word[i])) {    // otherwise, check if the letter is a consonant, if it is implement 'translalteSingleConsonant()' method
            output += model.translateSingleConsonant(word[i]);

        } else {    // otherwise, leave the letter unchanged
            output += word[i];
        }
    }

    return output; 

}

std::string Translator::translateEnglishSentence(std::string sentence) {
    std::string output;
    std::string currWord;
    
    std::stringstream ss(sentence); // create a stringstream object to initlised with the sentence 

    while (ss >> currWord) {    // loop through each word
        output += translateEnglishWord(currWord) + " "; // translate each word using the 'translateEnglishWord()' method
    }
    
    return output;

}