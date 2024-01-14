#include <string>
#include <iostream>

class game{
public:
    std::string name;
    int year;
    std::string pub;
    explicit game(std::string name,int year,std::string pub);

string getGameName();
void setGameName(std::string newName); // name is just title of game
string getGameYear();
void setGameYear(int newYear); // year is release date of game
string getPub();
void setPub(std::string newPub); // pub is publisher
};