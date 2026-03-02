#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<thread>
#include<chrono>
#include"../Include/include.h"
#include"../Include/func.h"
#include "../fileManager/file.h"
void mainPrint(char printArray[][columnIndex], std::vector<int> &arrayNum,int &index)
{
    int num=0;
    Game X, O;
    while (!((X.winComCheck(printArray)) || O.winComCheck(printArray)))
    {
        system("cls");
        X.printGame(printArray);
        std::cout << "Player X Choose Number: ";
        X.deleteAchoosenNumber(arrayNum,index,num);
        while (!(std::cin >> num) || !(X.deleteAchoosenNumber(arrayNum, index, num)))
        {
            std::cout << "invalid number try again\n";
        }
        X.choose(printArray, num, 1);
        system("cls");
        X.printGame(printArray);
        if (X.winComCheck(printArray))
        {
            break;
        }
      // checking
        if (index == 0)
        {
            int chooseNum;
            std::cout
                << "Drow" << std::endl;
            std::cout << "1.Another Game... \n 2.Playing Push Mode \n 3.Exist" << std::endl;

            while (!(std::cin >> chooseNum))
            {
                std::cout<<"wrong choose try again\n";
            }
            
            switch (chooseNum)
            {
            case 1:
            {
                index = 9;
                restmainPrint(printArray, arrayNum);
                mainPrint(printArray, arrayNum, index);

                break;
            }
                // case 2:
                // break;
            }
            break;

        }
// end checking
        std::cout << "Player O Choose Number: ";

        while (!(std::cin >> num) || !(O.deleteAchoosenNumber(arrayNum, index, num)))
        {
            std::cout << "invalid number try again\n";
        }
        O.choose(printArray, num, 2);
        system("cls");
        O.printGame(printArray);
        if (O.winComCheck(printArray))
        {
            break;
        }
    }
}
void botPrint(char printArray[][columnIndex], std::vector<int> &arrayNum)
{
    int index=9;
    int num;
    int countTimes = 0;
    Game X, O;
    while (!((X.winComCheck(printArray)) || O.winComCheck(printArray)))
    {
        system("cls");
        X.printGame(printArray);
        std::cout << "Player X Choose Number: ";
        X.deleteAchoosenNumber(arrayNum,index,num);
        while (!(std::cin >> num) || !(X.deleteAchoosenNumber(arrayNum, index, num)))
        {
            std::cout << "invalid number try again\n";
        }
        X.choose(printArray, num, 1);
        countTimes++;
        system("cls");
        X.printGame(printArray);
        if (X.winComCheck(printArray))
        {
            break;
        }
        if (countTimes == 9)
        {
            std::cout << "Drow";
            break;
        }
        std::cout << "Player O Choose Number: ";

        while (!(std::cin >> num) || !(O.deleteAchoosenNumber(arrayNum, index, num)))
        {
            std::cout << "invalid number try again\n";
        }
        O.choose(printArray, num, 2);
        countTimes++;
        system("cls");
        O.printGame(printArray);
        if (O.winComCheck(printArray))
        {
            break;
        }
    }
}

void restmainPrint(char printArray[][columnIndex], std::vector<int> &arrayNum)
{
    int reset=0;
    for (int i = 0; i < rowIndex; i++)
    {
        for (int j = 0; j < columnIndex; j++)
        {
            // convered it to ascii
                    printArray[i][j] = static_cast<char> (reset + 49);
                   reset++;
        }

    }
    for (int i = 0, indexValue = (rowIndex * columnIndex); i <indexValue ; i++)
        arrayNum.push_back(i + 1);

}

void BotPrint(char printArray[][columnIndex], std::vector<int> &arrayNum, int &index,int &points)
{
    int num = 0;
    Game X;
    GameWithBot Bot;
    while (!((X.winComCheck(printArray)) || Bot.winComCheck(printArray)))
    {
        system("cls");
        X.printGame(printArray);
        std::cout << "Player X Choose Number: ";
        X.deleteAchoosenNumber(arrayNum, index, num);
        while (!(std::cin >> num) || !(X.deleteAchoosenNumber(arrayNum, index, num)))
        {
            std::cout << "invalid number try again\n";
        }
        X.choose(printArray, num, 1);
        system("cls");
        X.printGame(printArray);
        if (X.winComCheck(printArray))
        {
            points+=50;
            std::cout << "you got "<<points<<" extra points keep pushing\n" ;
            update(points);
            break;
        }
        // checking
        if (index == 0)
        {
            int chooseNum;
            std::cout
                << "Drow" << std::endl;
            std::cout << "1.Another Game... \n 2.Playing Push Mode \n 3.Exist" << std::endl;

            while (!(std::cin >> chooseNum))
            {
                std::cout << "wrong choose try again\n";
            }

            switch (chooseNum)
            {
            case 1:
            {
                index = 9;
                restmainPrint(printArray, arrayNum);
                mainPrint(printArray, arrayNum, index);

                break;
            }
                // case 2:
                // break;
            }
            break;
        }
        // end checking
        std::cout << "Bot is Choosing a Number: ";
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
        while (!(Bot.deleteAchoosenNumber(arrayNum, index, num)))
        {
            num=Bot.playingWithBot();
        }
        num=Bot.playingWithBot();
        Bot.choose(printArray,num , 2);
        system("cls");
        Bot.printGame(printArray);
        if (Bot.winComCheck(printArray))
        {
            points -= 50;
            if(points<0)
            points=0;
            std::cout << "you got " <<points<<" extra points keep pushing\n";
            update(points);
            break;
        }
    }
}