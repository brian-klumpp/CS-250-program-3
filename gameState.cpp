//
//  gameState.cpp
//  Project 3 Hangman
//
//  Created by Brian Klumpp on 11/3/24.
//

#include "gameState.h"

// Constructor for game state class
GameState::GameState() : m_nextState(0) {
    m_allStates = {
        "PLATFORM",
        "HEAD",
        "BODY",
        "LEFT_ARM",
        "RIGHT_ARM",
        "LEFT_LEG",
        "RIGHT_LEG"
    };
    m_state = m_allStates[m_nextState];
    }

    string GameState::getState() {
        
        return m_state;
    }

    void GameState::addState() {
        if (m_nextState < m_allStates.size() - 1) {
            m_nextState++;
            m_state = m_allStates[m_nextState];
    }
}

    bool GameState::gameOver() {
        
        return m_nextState >= m_allStates.size() - 1;
}
