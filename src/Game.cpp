game::game(std::string name, int year, std::string pub){
    game::setGameName("");
    game::setGameYear(0);
    game::setGamePub("");
}
std::string game::getGameName()
{
    return game.name;
}
void game::setGameName(std::string newName) // name is just title of game
{
    game.name = newName;
} 
int game::getGameYear()
{
    return game.year;
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