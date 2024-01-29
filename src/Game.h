#include <string>
    using std::string;
#include <iostream>

class GameClass{
private:
    string name;
    int year;
    string pub;
public:
    GameClass(string name, int year, string pub);

string getGameName();
void setGameName(string newName); // name is just title of game
int getGameYear();
void setGameYear(int newYear); // year is release date of game
string getPub();
void setPub(string newPub); // pub is publisher
};