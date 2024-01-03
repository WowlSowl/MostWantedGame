#include <iostream>
#include <vector>
    using std::vector;
#include <string>
    using std::string;

class Library{
    vector mostWanted; // will be a vector of ptrs to games
    string game; // game will consist of a name, a year and a publisher.

public:
    explicit Library(const vector mostWanted, string game);

string getGameName();
void setGameName(newName);
string getGameYear();
void setGameYear(newYear);
string getPub();
void setPub(newPub);
};