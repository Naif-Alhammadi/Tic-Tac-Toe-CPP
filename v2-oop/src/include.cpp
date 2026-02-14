#include<iostream>
#include<vector>
#include"../Include/include.h"
#include <string>
#include<thread>
#include<chrono>
char checkPlayer(int player1Or2) ;

void Game::printGame(char gameArray[][columnIndex])
{
    for (int i = 0; i < rowIndex; i++)
    {
        for (int j = 0; j < columnIndex; j++)
        {
            std::cout << gameArray[i][j] << '\t'<<std::flush;
            // std::this_thread::sleep_for(std::chrono::milliseconds(250));
        }
        std::cout<<std::endl;
    }
}

void Game::choose(char gameArray[][columnIndex],int number,int player1Or2)
{
    // convert it to ascii
    number+=48;
    for (int i = 0; i < rowIndex; i++)
    {
        for (int j = 0; j < columnIndex; j++)
        {
          if(number==gameArray[i][j] && player1Or2==1)
          {
            gameArray[i][j]='X';
            return;
          }
          else if (number == gameArray[i][j] && player1Or2 == 2)
          {
              gameArray[i][j] = 'O';
              return;
          }
        }
    }

}

bool Game::com(char gameArray[][columnIndex],int player1Or2)
{
    bool checkX=true;
    for (int i = 0; i < rowIndex; i++)
    {
        for (int j = 0; j < columnIndex; j++)
        {
            if (gameArray[i][j] != checkPlayer(player1Or2))
                checkX = false;
        }
    }
    return checkX;
}
bool Game::winComCheck(const char gameArray[][columnIndex])
{
    bool winCheck;
     for (int i = 0; i < rowIndex; i++)
    {
        winCheck=true;
        if ((gameArray[i][0] == gameArray[i][1]) && (gameArray[i][1]==gameArray[i][2]))
        {
            if(gameArray[i][1]=='X')
            std::cout << "X won" << std::endl;
            else 
            std::cout << "O won" << std::endl;
            return winCheck;
        }
        else if ((gameArray[0][i] == gameArray[1][i]) && (gameArray[1][i] == gameArray[2][i]))
        {
            if(gameArray[1][i]=='X')
            std::cout << "X won" << std::endl;
            else 
            std::cout << "O won" << std::endl;
            return winCheck;
        }
        else if ((gameArray[0][0] == gameArray[1][1]) && (gameArray[1][1]== gameArray[2][2]))
        {
            if(gameArray[1][1]=='X')
            std::cout << "X won" << std::endl;
            else 
            std::cout << "O won" << std::endl;
            return winCheck;
        }
        else if ((gameArray[0][2] == gameArray[1][1]) && (gameArray[1][1]== gameArray[2][0]))
        {
            if (gameArray[1][1] == 'X')
                std::cout << "X won" << std::endl;
            else
                std::cout << "O won" << std::endl;
            return winCheck;
        }
        else
            winCheck = false;
    }
return winCheck;
}
char checkPlayer(int player1Or2)
{
    char player;
    if (player1Or2 == 1)
    {
        player = 'X';
    }
    else
    {
        player = 'O';
    }
        return player;
}

bool Game::deleteAchoosenNumber(std::vector<int> &arrayNum, int &indexArrayNum, int choose)
{
    bool isFound = false;
    for (int i = 0; i < (int)arrayNum.size(); i++)
    {
        if (choose == arrayNum.at(i))
        {
            arrayNum.erase(arrayNum.begin() + i);
            indexArrayNum--;
            isFound = true;
            return isFound;
        }
    }
    return isFound;
}
// BOT
void GameWithBot::playingWithBot()
{

    GameWithBot X;
    GameWithBot Bot;
    int botIndex = rowIndex * columnIndex;
    srand(time(0));
    int botChoosenNumber=(rand()%botIndex +1);
    // Bot.deleteAchoosenNumber(, botIndex, botChoosenNumber);
}