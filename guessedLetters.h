//
//  GuessedLetter.h
//  Project 3 Hangman
//
//  Created by Brian Klumpp on 11/3/24.
//

#ifndef guessedLetters_h
#define guessedLetters_h


#include <vector>
#include <string>

using namespace std;

// Creating the class letters guessed
    class GuessedLetters {
    
    private:
        vector<char> m_guessed;

    protected:
        
    public:
        GuessedLetters();
        string getLetters();
   
        void addLetter(char letter);
};

#endif
