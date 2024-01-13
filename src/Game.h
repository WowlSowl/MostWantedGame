#include <string>

class Game{
Public:
    explicit(string name*,int year*,string pub*);

string getGameName();
void setGameName(string newName); // name is just title of game
string getGameYear();
void setGameYear(int newYear); // year is release date of game
string getPub();
void setPub(int newPub); // pub is publisher
}