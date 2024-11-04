//
//  GameState.h
//  Project 3 Hangman
//
//  Created by Brian Klumpp on 11/3/24.
//

#ifndef GameState_h
#define GameState_h


#include <vector>
#include <string>

using namespace std;

// Creating the class for the state of where the game is
    class GameState {
    
    private:
        vector<string> m_allStates;
        string m_state;
        int m_nextState;

    protected:
        
        
    public:
        GameState();
        string getState();
        void addState();
        bool gameOver();
};

#endif
