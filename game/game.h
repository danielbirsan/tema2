//
// Created by Daniel on 5/12/2024.
//

#ifndef OOP_GAME_H
#define OOP_GAME_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "../player.h"
#include "../word.h"

class Game {
private:
    Word word;
    Players players;

    void displayGameState(const Player &currentPlayer);
    void displayAllStatistics();
    std::string getValidGuess();
    void updateGameState(const std::string &guess, Player &currentPlayer);
    bool isWordGuessed();

public:
    Game(Word word, Players players);

    void play();

    friend std::ostream &operator<<(std::ostream &os, const Game &game);
};


#endif //OOP_GAME_H


