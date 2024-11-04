//
//  Word.cpp
//  Project 3 Hangman
//
//  Created by Brian Klumpp on 10/29/24.
//

#include "Word.h"

// Constructor for the Word class
    Word::Word(string word) {
    m_word = word;
    m_currentWord.resize(word.length(), '_');
    
    }

    bool Word::findLetter(char c) {
    
        return m_word.find(c) != string::npos;
    }

    string Word::getWord() {
   
        return string(m_currentWord.begin(), m_currentWord.end());
    }

    void Word::addLetter(char letter) {
    for (size_t i = 0; i < m_word.size(); ++i) {
        if (m_word[i] == letter) {
            m_currentWord[i] = letter;
        }
    }
}

    bool Word::solved() {
  
        return string(m_currentWord.begin(), m_currentWord.end()) == m_word;
}
