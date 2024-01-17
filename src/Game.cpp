#include <string>
#include "Game.h"

std::string name = "";
int year = 0;
std::string pub = "";


std::string getGameName()
{
    return name;
}
void game::setGameName(std::string newName) // name is just title of game
{
    name = newName;
} 
int game::getGameYear()
{
    return year;
}
void game::setGameYear(int newYear) // year is release date of game
{
    game.year = newYear;
}
std::string game::getPub()
{
    return game.pub;
}
void game::setPub(std::string newPub)
{
    game.pub = newPub;
}