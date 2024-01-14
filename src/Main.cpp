#include "Library.h"
#include "Game.h"
#include <iostream>
    using std::cout;
    using std::cin;
#include <string>
    using std::string;
#include <array>
    using std::array;

int main()
{
    int var = 0;
    while (var =! 50182)
    {

    cout << "---------------------------------------------------" << std::endl;
    cout << "Select An Option From The Menu Below" << std::endl;
    cout << "1) Print Out Current Most Wanted List" << std::endl;
    cout << "2) Eliminate Most Wanted Game" << std::endl;
    cout << "3) Add Most Wanted Game" << std::endl;
    cout << "---------------------------------------------------" << std::endl;
    cout << "Input Option" << std::endl;
    cin >> var;

    if (var == 1)
    {
        cout << "Option 1"; 
    }
    else if (var == 2)
    {
        cout << "Option 2";
    }
    else if (var == 3)
    {
        string name;
        int year;
        string pub;

        cout << "Enter in the name of the game";
        cin >> name;
        cout << "Enter in the year of release";
        cin >> year;
        cout << "Enter in the publisher of the game";
        cin >> pub;

        game newGame();
        newGame.getGameName;
    }
    else if (var == 99)
    {
        cout << "Thank you for using my program. :)";
        return 50182;
    }
    else
    {
        cout << "Sorry that input was invalid";
    }
    }


return 0;
}