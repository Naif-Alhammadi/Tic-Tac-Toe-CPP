#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Include/include.h"
#include"Include/func.h"
#include"../fileManager/file.h"
int main()
{
    int index=9;
    int chooseWith;
    std::cout
    << "starting point\n wait game is starting......." << std::endl;
    system("pause");
    system("cls");
    std::cout << "Choose Game Modifier,\n 1. Push Level \n 2. With Friend\n,\n 3. Creat Account \n 4. Delet Account\n";
    std::cin>>chooseWith;
    if(chooseWith==2)
    {
    
        char mainGameArray[rowIndex][columnIndex] =
        {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}};
            
            std::vector<int> arrayOfCheck={1,2,3,4,5,6,7,8,9};
            mainPrint(mainGameArray,arrayOfCheck,index);
        }
        
        // playing with bot
        else if(chooseWith==1)
        {
            reload();
            int points=rePoints();
            char botGameArray[rowIndex][columnIndex] =
            {
                {'1', '2', '3'},
                {'4', '5', '6'},
                {'7', '8', '9'}};
                
                std::vector<int> arrayBotCheck = {1, 2, 3, 4, 5, 6, 7, 8, 9};
                BotPrint(botGameArray,arrayBotCheck,index,points);
            }
            else if(chooseWith==3)
            {
                GameAccount B(" ",0);
                B.gameAccount();
            }
    else if(chooseWith==4)
    {
        char agreed;
        std::cout<<"Are You Sure You Want to Delet Your Account? yes/no\n";
        std::cin>>agreed;
        switch (agreed)
        {
        case 'y':
        case 'Y':
        {

            std::string name;
            std::cout<<"enter your name to confirm: ";
            std::cin>>name;
            if(isNameExists(name))
            remove("gameFile.txt");
            else std::cout<<"name is not correct\n";
            break;
        }
        case 'n':
        case 'N':
        {
            std::cout<<"Go and Touch Grass D)\n";
            break;
        }
        default:
        std::cout<<"wrong symbol\n";
            break;
        }
    }
    else 
    std::cout<<"There is no such a valid number, THX for Playing See You Later :)"<<std::endl;
    return 0;
}

