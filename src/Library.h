#include <iostream>
#include <vector>
    using std::vector;
#include <string>
    using std::string;

class Library{
public:
    explicit Library(vector <string*> mostWanted);

string getGameName();
void setGameName(string newName); // name is just title of game
string getGameYear();
void setGameYear(int newYear); // year is release date of game
string getPub();
void setPub(int newPub); // pub is publisher
};