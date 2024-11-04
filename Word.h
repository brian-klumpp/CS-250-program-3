//
//  Word.h
//  Project 3 Hangman
//
//  Created by Brian Klumpp on 10/29/24.
//

#ifndef Word_h
#define Word_h

#include <string>
#include <vector>

using namespace std;

// Creating the class for Word
    class Word {
        
    private:
        string m_word;
        vector<char> m_currentWord;

    protected:
        
        
    public:
        Word(string word);
        string getWord();
        void addLetter(char letter);
        bool findLetter(char letter);
        bool solved();
};

#endif
