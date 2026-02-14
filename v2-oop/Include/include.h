#pragma once
#include<string>
#include<vector>
const int rowIndex=3;
const int columnIndex=3;
class Game{
    private:
    int chosenNumber;
    protected:
    char gameArray[rowIndex][columnIndex]=
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    
    public:
    
    void printGame(char gameArray[][columnIndex]);
    void choose(char gameArray[][columnIndex],int number, int player1Or2);
    bool com(char gameArray[][columnIndex], int player1Or2);
    bool winComCheck(const char gameArray[][columnIndex]);
    bool deleteAchoosenNumber(std::vector<int> &arrayNum, int &indexArrayNum, int choose);
};

class GameWithBot : public Game {
private:
void playingWithBot();
};