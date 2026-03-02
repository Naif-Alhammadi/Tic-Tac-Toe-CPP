#include<iostream>
#include<fstream>
#include"../Include/include.h"
int gAge;
std::string gName;
void registration(GameAccount player)
{

    std::ofstream Save;
    Save.open("gameFile.txt",std::ios::out);
    Save<<player.name<<' ';
    Save<<player.age<<' ';
    Save<<player.points;
}
void reload()
{
    std::string name;
    int age;
    int points;
    std::ifstream Reload;
    Reload.open("gameFile.txt",std::ios::in);
    while(Reload>>name>>age>>points);
}
bool isNameExists(std::string n)
{
    std::string name;
    int age;
    int points;
    std::ifstream Reload;
    Reload.open("gameFile.txt", std::ios::in);
    while (Reload >> name >> age >> points)
    {
        if(name==n)
        return true;
    }
    return false;
}
int rePoints()
{
    std::string name;
    int p;
    int age;
    int points;
    std::ifstream Reload;
    Reload.open("gameFile.txt", std::ios::in);
    while (Reload >> name >> age >> points)
    {
        p=points;
        gName=name;
        gAge=age;
    }
    return p;
}
void update(int p)
{
    std::ofstream Save;
    Save.open("gameFile.txt", std::ios::out);
    Save<<gName<<' ';
    Save<<gAge<<' ';
    Save << p;
}