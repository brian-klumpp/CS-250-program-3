//
//  guessedLetters.cpp
//  Project 3 Hangman
//
//  Created by Brian Klumpp on 11/3/24.
//

#include "guessedLetters.h"

// Constructor for guessed letters class
GuessedLetters::GuessedLetters() {}

    string GuessedLetters::getLetters() {
    
        return string(m_guessed.begin(), m_guessed.end());
    }

    void GuessedLetters::addLetter(char letter) {
    if (find(m_guessed.begin(), m_guessed.end(), letter) == m_guessed.end()) {
       
        m_guessed.push_back(letter);
    }
}


