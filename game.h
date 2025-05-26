//
// Created by opal on 2025. 05. 26..
//

#ifndef GAME_H
#define GAME_H
#include <vector>

class  Game
{
    std::vector<std::vector<int>> board;
public:
    Game();
    std::string getInput();
    std::pair<int,int> getMove(const std::string& input);
    void mark(std::pair<int,int> pos, int player);
    bool hasWon();
    bool isFull();
    void printBoard();
    void printResult(int player);
    void run();
};

#endif //GAME_H
