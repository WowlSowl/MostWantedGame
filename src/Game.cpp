#include <string>
    using std::string;
#include "Game.h"

string name = "";
int year = 0;
string pub = "";

std::string GameClass::getGameName()
{
    return name;
}
void GameClass::setGameName(std::string newName) // name is just title of game
{
    name = newName;
} 
int GameClass::getGameYear()
{
    return year;
}
void GameClass::setGameYear(int newYear) // year is release date of game
{
    year = newYear;
}
std::string GameClass::getPub()
{
    return pub;
}
void GameClass::setPub(std::string newPub)
{
    pub = newPub;
}