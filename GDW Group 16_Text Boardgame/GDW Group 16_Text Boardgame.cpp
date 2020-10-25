// GDW Group 16_Text Boardgame.cpp 
//Nazifa Alam : 100787092
//Myles Beckett : 100790333
//Donovan Mills : 100801916
//Alexi Charles : 100651942
//Braedon Harris : 100572327


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int propertySpace[24] = { 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 };
int propertySpaceUpgradeAmount[24] = { 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 };
int hpValues[24] = { 0, 0, 0, 10, 0, 10, 0, 0, 10, 0, 15, 15, 0, 0, 20, 20, 0, 0, 0, 0, 25, 0, 25, 30 };
std::string propertyColours[24] = { "None", "None", "None", "Green", "None", "Green", "None", "None", "Green", "None", "LightBlue", "LightBlue", "None", "None", "Yellow", "Yellow", "None", "None", "None", "None", "Pink", "None", "Pink", "Blue" };
std::string gunName[24] = { "None", "None", "None", "Kolibri", "None", "ASP Pistol", "None", "None", "Beretta M9", "None", "Supernova", "USAS-12", "None", "None", "Scorpion Evo", "PPSH-41", "None", "None", "None", "None", "AK-47", "None", "M-16", "RPG" };
int propertyownership[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };


bool isRiskSpace[24] = { false, false, false, false, true, false, false, false, false, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false };
bool isSSSpace[24] = { false, true, false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, false, false, false, false, true, false, false };
bool isTrapSpace[24] = { false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false };

int player1Space = 0;
int player2Space = 0;
int player3Space = 0;
int player4Space = 0;

int player1Hp = 100;
int player2Hp = 100;
int player3Hp = 100;
int player4Hp = 100;

int player1Resources = 0;
int player2Resources = 0;
int player3Resources = 0;
int player4Resources = 0;

bool player1IsAlive = true;
bool player2IsAlive = true;
bool player3IsAlive = true;
bool player4IsAlive = true;

bool player1IsCaptured = false;
bool player2IsCaptured = false;
bool player3IsCaptured = false;
bool player4IsCaptured = false;

int numOfPlayers = 0;
int playerTurn = 0;
int numOfAlivePlayers = 0;
char quit = 'null';



int diceRoll()
{
    srand((unsigned)time(NULL));
    int roll = rand() % 8 + 1;
    return roll;
}

void riskySpaceCardPicker(int player)
{
    srand((unsigned)time(NULL));
    int cardPicker = rand() % 3;
    switch (player)
    {
    case 1:
        switch (cardPicker)
        {
        case 0:
            cout << "Player 1 loses 10 resources!" << endl;
            player1Resources = player1Resources - 10;
            break;
        case 1:
            cout << "Player 1 gets Captured!" << endl;
            player1IsCaptured = true;
            player1Space = 6;
            break;
        case 2:
            cout << "Player 1 loses 5hp!" << endl;
            player1Hp = player1Hp - 5;
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (cardPicker)
        {
        case 0:
            cout << "Player 2 loses 10 resources!" << endl;
            player2Resources = player2Resources - 10;
            break;
        case 1:
            cout << "Player 2 gets Captured!" << endl;
            player2IsCaptured = true;
            player2Space = 6;
            break;
        case 2:
            cout << "Player 2 loses 5hp!" << endl;
            player2Hp = player2Hp - 5;
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (cardPicker)
        {
        case 0:
            cout << "Player 3 loses 10 resources!" << endl;
            player3Resources = player3Resources - 10;
            break;
        case 1:
            cout << "Player 3 gets Captured!" << endl;
            player3IsCaptured = true;
            player3Space = 6;
            break;
        case 2:
            cout << "Player 3 loses 5hp!" << endl;
            player3Hp = player3Hp - 5;
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (cardPicker)
        {
        case 0:
            cout << "Player 4 loses 10 resources!" << endl;
            player4Resources = player4Resources - 10;
            break;
        case 1:
            cout << "Player 4 gets Captured!" << endl;
            player4IsCaptured = true;
            player4Space = 6;
            break;
        case 2:
            cout << "Player 4 loses 5hp!" << endl;
            player4Hp = player4Hp - 5;
            break;
        default:
            break;
        }
        break;
    }

}

void propertyanalyzer(int player)
{
    switch (player)
    {
    case 1:
    {
        if (propertyownership[player1Space] == 0)
        {
            cout << "This property is unowned. " << endl;
            player1Hp = player1Hp - hpValues[player1Space];
            cout << " your remaing HP is " << player1Hp;
            propertyownership[player1Space] = 1;
        }
        else if (propertyownership[player1Space] == 1)
        {
            cout << "You already own this property. " << endl;
        }
        else if (propertyownership[player1Space] == 2)
        {
            cout << "This property is owned by Player 2" << endl;
            player1Hp = player1Hp - hpValues[player1Space];
            cout << "Your remaining HP is " << player1Hp;
        }

        else if (propertyownership[player1Space] == 3)
        {
            cout << "This property is owned by Player 3" << endl;
            player1Hp = player1Hp - hpValues[player1Space];
            cout << "Your remaining HP is " << player1Hp;
        }
        else if (propertyownership[player1Space] == 4)
        {
            cout << "This property is owned by Player 4" << endl;
            player1Hp = player1Hp - hpValues[player1Space];
            cout << "Your remaining HP is " << player1Hp;
        }

        else
        {
            cout << "An error has occured" << endl;
        }
        break;
    case 2:
    
        if (propertyownership[player2Space] == 0)
        {
            cout << "This property is unowned. " << endl;
            player2Hp = player2Hp - hpValues[player2Space];
            cout << " your remaing HP is " << player1Hp;
            propertyownership[player2Space] = 2;
        }
        else if (propertyownership[player2Space] == 2)
        {
            cout << "You already own this property. " << endl;
        }
        else if (propertyownership[player2Space] == 1)
        {
            cout << "This property is owned by Player 1" << endl;
            player2Hp = player2Hp - hpValues[player2Space];
            cout << "Your remaining HP is " << player2Hp;
        }

        else if (propertyownership[player2Space] == 3)
        {
            cout << "This property is owned by Player 3" << endl;
            player2Hp = player2Hp - hpValues[player2Space];
            cout << "Your remaining HP is " << player2Hp;
        }
        else if (propertyownership[player2Space] == 4)
        {
            cout << "This property is owned by Player 4" << endl;
            player2Hp = player2Hp - hpValues[player2Space];
            cout << "Your remaining HP is " << player2Hp;
        }

        else
        {
            cout << "An error has occured" << endl;
        }
        break;
    case 3:
        if (propertyownership[player3Space] == 0)
        {
            cout << "This property is unowned. " << endl;
            player3Hp = player3Hp - hpValues[player3Space];
            cout << " your remaing HP is " << player3Hp;
            propertyownership[player3Space] = 3;
        }
        else if (propertyownership[player3Space] == 3)
        {
            cout << "You already own this property. " << endl;
        }
        else if (propertyownership[player3Space] == 2)
        {
            cout << "This property is owned by Player 2" << endl;
            player3Hp = player3Hp - hpValues[player3Space];
            cout << "Your remaining HP is " << player3Hp;
        }

        else if (propertyownership[player3Space] == 1)
        {
            cout << "This property is owned by Player 1" << endl;
            player3Hp = player3Hp - hpValues[player3Space];
            cout << "Your remaining HP is " << player3Hp;
        }
        else if (propertyownership[player3Space] == 4)
        {
            cout << "This property is owned by Player 4" << endl;
            player3Hp = player3Hp - hpValues[player3Space];
            cout << "Your remaining HP is " << player3Hp;
        }

        else
        {
            cout << "An error has occured" << endl;
        }
        break;
    case 4:
        if (propertyownership[player4Space] == 0)
        {
            cout << "This property is unowned. " << endl;
            player4Hp = player4Hp - hpValues[player4Space];
            cout << " your remaing HP is " << player4Hp;
            propertyownership[player4Space] = 4;
        }
        else if (propertyownership[player4Space] == 4)
        {
            cout << "You already own this property. " << endl;
        }
        else if (propertyownership[player4Space] == 2)
        {
            cout << "This property is owned by Player 2" << endl;
            player4Hp = player4Hp - hpValues[player4Space];
            cout << "Your remaining HP is " << player4Hp;
        }

        else if (propertyownership[player4Space] == 3)
        {
            cout << "This property is owned by Player 3" << endl;
            player4Hp = player4Hp - hpValues[player4Space];
            cout << "Your remaining HP is " << player1Hp;
        }
        else if (propertyownership[player4Space] == 1)
        {
            cout << "This property is owned by Player 1" << endl;
            player4Hp = player4Hp - hpValues[player4Space];
            cout << "Your remaining HP is " << player4Hp;
        }

        else
        {
            cout << "An error has occured" << endl;
        }


    }
    }
    }






void secretStashCardPicker(int player)
{

    srand((unsigned)time(NULL));
    int cardPicker = rand() % 3;
    switch (player)
    {
    case 1:
        switch (cardPicker)
        {
        case 0:
            player1Resources = player1Resources + 20;
            break;
        case 1:
            player1Space = 23;
            break;
        case 2:
            player2Hp = player2Hp - 10;
            player4Hp = player3Hp - 10;
            player3Hp = player4Hp - 10;
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (cardPicker)
        {
        case 0:
            player2Resources = player2Resources + 20;
            break;
        case 1:
            player2Space = 23;
            break;
        case 2:
            player1Hp = player1Hp - 10;
            player3Hp = player3Hp - 10;
            player4Hp = player4Hp - 10;
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (cardPicker)
        {
        case 0:
            player3Resources = player3Resources + 20;
            break;
        case 1:
            player3Space = 23;
            break;
        case 2:
            player1Hp = player1Hp - 10;
            player2Hp = player2Hp - 10;
            player4Hp = player4Hp - 10;
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (cardPicker)
        {
        case 0:
            cout << "Player 4 gains 20 resources!" << endl;
            player4Resources = player4Resources + 20;
            break;
        case 1:
            cout << "Player 4 advances to RPG!" << endl;
            player4Space = 23;
            break;
        case 2:
            cout << "All other players lose 10hp!" << endl;
            player1Hp = player1Hp - 10;
            player2Hp = player2Hp - 10;
            player3Hp = player3Hp - 10;
            break;
        default:
            break;
        }
        break;
    }

}

void checkSpace(int player)
{
    switch (player)
    {
    case 1:
        if (propertySpace[player1Space] == 1)
        {
            cout << "On space " << player1Space << " there is a property.\nThe property is a " << gunName[player1Space] << endl;
            propertyanalyzer(player);
        }
        else if (isRiskSpace[player1Space] == true)
        {
            cout << "On space " << player1Space << " there is a Risky Space." << endl;
        }
        else if (isSSSpace[player1Space] == true)
        {
            cout << "On space " << player1Space << " there is a Secret Stash." << endl;
            secretStashCardPicker(player);
        }
        else if (isTrapSpace[player1Space] == true)
        {
            cout << "On space " << player1Space << " there is a trap." << endl;
        }
        else if ((player1Space == 6) && (player1IsCaptured == false))
        {
            cout << "On space " << player1Space << " player 1 is passing by the jail." << endl;
        }
        else if (player1Space == 12)
        {
            cout << "On space " << player1Space << " player 1 is in No man's Land." << endl;
        }
        else if (player1Space == 18)
        {
            cout << "Player 1 has been taken captive on space " << player1Space << "." << endl;
            player1IsCaptured = true;
            player1Space = 6;
        }
        else
        {
            cout << "Something horibly wrong has happened and the player has gone off the board or something idk." << endl;
        }
        break;
    case 2:
        if (propertySpace[player2Space] == 1)
        {
            cout << "On space " << player2Space << " there is a property.\nThe property is a " << gunName[player2Space] << endl;
        }
        else if (isRiskSpace[player2Space] == true)
        {
            cout << "On space " << player2Space << " there is a Risky Space." << endl;
        }
        else if (isSSSpace[player2Space] == true)
        {
            cout << "On space " << player2Space << " there is a Secret Stash." << endl;
        }
        else if (isTrapSpace[player2Space] == true)
        {
            cout << "On space " << player2Space << " there is a trap." << endl;
        }
        else if ((player2Space == 6) && (player2IsCaptured == false))
        {
            cout << "On space " << player2Space << " player 2 is passing by the jail." << endl;
        }
        else if (player2Space == 12)
        {
            cout << "On space " << player2Space << " player 2 is in No man's Land." << endl;
        }
        else if (player2Space == 18)
        {
            cout << "Player 2 has been taken captive on space " << player2Space << "." << endl;
            player2IsCaptured = true;
            player2Space = 6;
        }
        else
        {
            cout << "Something horibly wrong has happened and the player has gone off the board or something idk." << endl;
        }
        break;
    case 3:
        if (propertySpace[player3Space] == 1)
        {
            cout << "On space " << player3Space << " there is a property.\nThe property is a " << gunName[player3Space] << endl;
        }
        else if (isRiskSpace[player3Space] == true)
        {
            cout << "On space " << player3Space << " there is a Risky Space." << endl;
        }
        else if (isSSSpace[player3Space] == true)
        {
            cout << "On space " << player3Space << " there is a Secret Stash." << endl;
        }
        else if (isTrapSpace[player3Space] == true)
        {
            cout << "On space " << player3Space << " there is a trap." << endl;
        }
        else if ((player3Space == 6) && (player3IsCaptured == false))
        {
            cout << "On space " << player3Space << " player 3 is passing by the jail." << endl;
        }
        else if (player3Space == 12)
        {
            cout << "On space " << player3Space << " player 3 is in No man's Land." << endl;
        }
        else if (player3Space == 18)
        {
            cout << "Player 3 has been taken captive on space " << player3Space << "." << endl;
            player3IsCaptured = true;
            player3Space = 6;
        }
        else
        {
            cout << "Something horibly wrong has happened and the player has gone off the board or something idk." << endl;
        }
        break;
    case 4:
        if (propertySpace[player4Space] == 1)
        {
            cout << "On space " << player4Space << " there is a property.\nThe property is a " << gunName[player4Space] << endl;
        }
        else if (isRiskSpace[player4Space] == true)
        {
            cout << "On space " << player4Space << " there is a Risky Space." << endl;
        }
        else if (isSSSpace[player4Space] == true)
        {
            cout << "On space " << player4Space << " there is a Secret Stash." << endl;
        }
        else if (isTrapSpace[player4Space] == true)
        {
            cout << "On space " << player4Space << " there is a trap." << endl;
        }
        else if ((player4Space == 6) && (player4IsCaptured == false))
        {
            cout << "On space " << player4Space << " player 4 is passing by the jail." << endl;
        }
        else if (player4Space == 12)
        {
            cout << "On space " << player4Space << " player 4 is in No man's Land." << endl;
        }
        else if (player4Space == 18)
        {
            cout << "Player 4 has been taken captive on space " << player4Space << "." << endl;
            player4IsCaptured = true;
            player4Space = 6;
        }
        else
        {
            cout << "Something horibly wrong has happened and the player has gone off the board or something idk." << endl;
        }
        break;
    default:
        break;

    }
}

void pauseCheck()
{
    char userInput;
    cout << "Please input something to continue";
    cin >> userInput;
}

int main()
{
    do
    {
        do {
            cout << "How many players are playing this round: ";
            cin >> numOfPlayers;
        } while ((numOfPlayers < 2) && (numOfPlayers < 5));
        playerTurn = 1;
        numOfAlivePlayers = numOfPlayers;
        while (numOfAlivePlayers > 1) {
            if ((playerTurn == 1) && player1IsAlive == true)
            {
                if (player1Hp == 0) {
                    numOfAlivePlayers--;
                    player1IsAlive = false;
                }
                cout << "Player 1 is on space " << player1Space << endl;
                cout << "Player 1 has " << player1Hp << "hp" << endl;
                for (int i = 0; i < diceRoll(); i++) {
                    player1Space++;
                    if (player1Space > 24) {
                        player1Space = 0;
                    }
                }
                cout << "After the roll, Player 1 is on space " << player1Space << endl;
                pauseCheck();
                playerTurn = 2;
                system("CLS");
            }
            else if ((playerTurn == 2) && player2IsAlive == true)
            {
                if (player2Hp == 0) {
                    numOfAlivePlayers--;
                    player2IsAlive = false;
                }
                cout << "Player 2 is on space " << player2Space << endl;
                cout << "Player 2 has " << player2Hp << "hp" << endl;
                for (int i = 0; i < diceRoll(); i++) {
                    player2Space++;
                    if (player2Space > 24) {
                        player2Space = 0;
                    }
                }
                cout << "After the roll, Player 2 is on space " << player2Space << endl;
                pauseCheck();
                playerTurn = 3;
                system("CLS");
            }
            else if ((playerTurn == 3) && (numOfPlayers >= 3) && (player3IsAlive == true))
            {
                if (player3Hp == 0) {
                    numOfAlivePlayers--;
                    player3IsAlive = false;
                }
                cout << "Player 3 is on space " << player3Space << endl;
                cout << "Player 3 has " << player3Hp << "hp" << endl;
                for (int i = 0; i < diceRoll(); i++) {
                    player3Space++;
                    if (player3Space > 24) {
                        player3Space = 0;
                    }
                }
                cout << "After the roll, Player 3 is on space " << player3Space << endl;
                pauseCheck();
                playerTurn = 4;
                system("CLS");
            }
            else if ((playerTurn == 4) && (numOfPlayers >= 4) && (player4IsAlive == true))
            {
                if (player4Hp == 0) {
                    numOfAlivePlayers--;
                    player4IsAlive = false;
                }
                cout << "Player 4 is on space " << player4Space << endl;
                cout << "Player 4 has " << player4Hp << "hp" << endl;
                for (int i = 0; i < diceRoll(); i++) {
                    player4Space++;
                    if (player4Space > 24) {
                        player4Space = 0;
                    }
                }
                cout << "After the roll, Player 4 is on space " << player4Space << endl;
                pauseCheck();
                playerTurn = 1;
                system("CLS");
            }
            else
            {
                playerTurn = 1;
                system("CLS");
            }
        }

        do
        {
            cout << "Would you like to continue playing? (y/n)";
            cin >> quit;
            if (quit != 'y' && quit != 'n')
            {
                cout << "Not a valid answer, please try again";
            }
        } while (quit != 'y' && quit != 'n');
    } while (quit == 'y');
}