//
//  main.cpp
//  Project 3 Hangman
//
//  Created by Brian Klumpp on 10/29/24.
//
// This program will use classes and a list to create a game of hangman spelling juggle

#include <iostream>
#include "Word.h"
#include "guessedLetters.h"
#include "gameState.h"

using namespace std;

int main()
{
    Word word("JUGGLE");
    GuessedLetters guessed = GuessedLetters();
    GameState state = GameState();
    char letter;

    do {
       cout << "Game state: " << state.getState() << endl;
       cout << "Guessed letters: " << guessed.getLetters() << endl;
       cout << "Guess this word: " << word.getWord() << endl << endl;
       cout << "Guess a letter: ";
       cin >> letter;
       letter = toupper(letter);
       if (word.findLetter(letter)) {
          word.addLetter(letter);
       }
       else {
          guessed.addLetter(letter);
          state.addState();
       }
    } while ( (!state.gameOver()) && (!word.solved()) );

    if (state.gameOver()) {
       cout << endl << "Game state: " << state.getState() << endl;
       cout << "Sorry you lose"  << endl;
       cout << "The word was: JUGGLE" << endl;
    }
    else {
        cout << endl << "Congratulations, you guessed the word: " <<  word.getWord() << endl;
    }

    return 0;
}
