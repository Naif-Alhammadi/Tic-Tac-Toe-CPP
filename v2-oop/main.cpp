#include<iostream>
#include<string>
#include<vector>
#include"Include/include.h"
#include"Include/func.h"
int main()
{
    int index=9;
    int chooseWith;
    std::cout
    << "starting point\n wait game is starting......." << std::endl;
    system("pause");
    system("cls");
    std::cout<<"Choose Game Modifier,\n 1. Push Level \n 2. With Friend\n";
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

    // adding rand num
    else if(chooseWith==1)
    {
        char botGameArray[rowIndex][columnIndex] =
            {
                {'1', '2', '3'},
                {'4', '5', '6'},
                {'7', '8', '9'}};

        std::vector<int> arrayBotCheck = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    }
    else 
    std::cout<<"There is no such a valid number, THX for Playing See You Later :)"<<std::endl;
    return 0;
}

