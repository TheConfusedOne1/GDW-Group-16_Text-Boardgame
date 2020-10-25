//Variables to add, first checks if the user wants to buy the property, second stores the ownership of property spaces
char propertyBuy;
int propertySpaceOwnership[24] = { 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 };

void propertyLanding(int player)
{
    switch (player)
    {
    case 1:
        //if statements used to by properties
        if (hpValues[player1Space] == 10 && propertySpaceOwnership[player1Space] == 1 && player1Hp > 10)
        {
            //user's answer to question
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 1 has bought " << gunName[player1Space] << endl;
                propertySpaceOwnership[player1Space] = propertySpaceOwnership[player1Space] + 1;
                player1Hp = player1Hp - 10;
            }
            else
            {
                cout << "Player 1 has not bought " << gunName[player1Space] << endl;
            }
        }
        else if (hpValues[player1Space] == 15 && propertySpaceOwnership[player1Space] == 1 && player1Hp > 15)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 1 has bought " << gunName[player1Space] << endl;
                propertySpaceOwnership[player1Space] = propertySpaceOwnership[player1Space] + 1;
                player1Hp = player1Hp - 15;
            }
            else
            {
                cout << "Player 1 has not bought " << gunName[player1Space] << endl;
            }
        }
        else if (hpValues[player1Space] == 20 && propertySpaceOwnership[player1Space] == 1 && player1Hp > 20)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 1 has bought " << gunName[player1Space] << endl;
                propertySpaceOwnership[player1Space] = propertySpaceOwnership[player1Space] + 1;
                player1Hp = player1Hp - 20;
            }
            else
            {
                cout << "Player 1 has not bought " << gunName[player1Space] << endl;
            }
        }
        else if (hpValues[player1Space] == 25 && propertySpaceOwnership[player1Space] == 1 && player1Hp > 25)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 1 has bought " << gunName[player1Space] << endl;
                propertySpaceOwnership[player1Space] = propertySpaceOwnership[player1Space] + 1;
                player1Hp = player1Hp - 25;
            }
            else
            {
                cout << "Player 1 has not bought " << gunName[player1Space] << endl;
            }
        }
        else if (hpValues[player1Space] == 30 && propertySpaceOwnership[player1Space] == 1 && player1Hp > 30)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 1 has bought " << gunName[player1Space] << endl;
                propertySpaceOwnership[player1Space] = propertySpaceOwnership[player1Space] + 1;
                player1Hp = player1Hp - 30;
            }
            else
            {
                cout << "Player 1 has not bought " << gunName[player1Space] << endl;
            }
        }

        else
        {
            cout << "Not enough HP left to get property " << endl;
        }
        break;
    case 2:
        if (hpValues[player2Space] == 10 && propertySpaceOwnership[player2Space] == 1 && player2Hp > 10)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 2 has bought " << gunName[player2Space] << endl;
                propertySpaceOwnership[player2Space] = propertySpaceOwnership[player2Space] + 2;
                player2Hp = player2Hp - 10;
            }
            else
            {
                cout << "Player 2 has not bought " << gunName[player2Space] << endl;
            }
        }
        else if (hpValues[player2Space] == 15 && propertySpaceOwnership[player2Space] == 1 && player2Hp > 15)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 2 has bought " << gunName[player2Space] << endl;
                propertySpaceOwnership[player2Space] = propertySpaceOwnership[player2Space] + 2;
                player2Hp = player2Hp - 15;
            }
            else
            {
                cout << "Player 2 has not bought " << gunName[player2Space] << endl;
            }
        }
        else if (hpValues[player2Space] == 20 && propertySpaceOwnership[player2Space] == 1 && player2Hp > 20)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 2 has bought " << gunName[player2Space] << endl;
                propertySpaceOwnership[player2Space] = propertySpaceOwnership[player2Space] + 2;
                player2Hp = player2Hp - 20;
            }
            else
            {
                cout << "Player 2 has not bought " << gunName[player2Space] << endl;
            }
        }
        else if (hpValues[player2Space] == 25 && propertySpaceOwnership[player2Space] == 1 && player2Hp > 25)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 2 has bought " << gunName[player2Space] << endl;
                propertySpaceOwnership[player2Space] = propertySpaceOwnership[player2Space] + 2;
                player2Hp = player2Hp - 25;
            }
            else
            {
                cout << "Player 2 has not bought " << gunName[player2Space] << endl;
            }
        }
        else if (hpValues[player2Space] == 30 && propertySpaceOwnership[player2Space] == 1 && player2Hp > 30)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 2 has bought " << gunName[player2Space] << endl;
                propertySpaceOwnership[player2Space] = propertySpaceOwnership[player2Space] + 2;
                player2Hp = player2Hp - 30;
            }
            else
            {
                cout << "Player 2 has not bought " << gunName[player2Space] << endl;
            }
        }



        else
        {
            cout << "Not enough HP left to get property " << endl;
        }
        break;
    case 3:
        if (hpValues[player3Space] == 10 && propertySpaceOwnership[player3Space] == 1 && player3Hp > 10)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 3 has bought " << gunName[player3Space] << endl;
                propertySpaceOwnership[player3Space] = propertySpaceOwnership[player3Space] + 3;
                player3Hp = player3Hp - 10;
            }
            else
            {
                cout << "Player 3 has not bought " << gunName[player3Space] << endl;
            }
        }
        else if (hpValues[player3Space] == 15 && propertySpaceOwnership[player3Space] == 1 && player3Hp > 15)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 3 has bought " << gunName[player3Space] << endl;
                propertySpaceOwnership[player3Space] = propertySpaceOwnership[player3Space] + 3;
                player3Hp = player3Hp - 15;
            }
            else
            {
                cout << "Player 3 has not bought " << gunName[player3Space] << endl;
            }
        }
        else if (hpValues[player3Space] == 20 && propertySpaceOwnership[player3Space] == 1 && player3Hp > 20)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 3 has bought " << gunName[player3Space] << endl;
                propertySpaceOwnership[player3Space] = propertySpaceOwnership[player3Space] + 3;
                player3Hp = player3Hp - 20;
            }
            else
            {
                cout << "Player 3 has not bought " << gunName[player3Space] << endl;
            }
        }
        else if (hpValues[player3Space] == 25 && propertySpaceOwnership[player3Space] == 1 && player3Hp > 25)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 3 has bought " << gunName[player3Space] << endl;
                propertySpaceOwnership[player3Space] = propertySpaceOwnership[player3Space] + 3;
                player3Hp = player3Hp - 25;
            }
            else
            {
                cout << "Player 3 has not bought " << gunName[player3Space] << endl;
            }
        }
        else if (hpValues[player3Space] == 30 && propertySpaceOwnership[player3Space] == 1 && player3Hp > 30)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 3 has bought " << gunName[player3Space] << endl;
                propertySpaceOwnership[player3Space] = propertySpaceOwnership[player3Space] + 3;
                player3Hp = player3Hp - 30;
            }
            else
            {
                cout << "Player 3 has not bought " << gunName[player3Space] << endl;
            }
        }



        else
        {
            cout << "Not enough HP left to get property " << endl;
        }
        break;
    case 4:
        if (hpValues[player4Space] == 10 && propertySpaceOwnership[player4Space] == 1 && player4Hp > 10)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 4 has bought " << gunName[player4Space] << endl;
                propertySpaceOwnership[player4Space] = propertySpaceOwnership[player4Space] + 4;
                player4Hp = player4Hp - 10;
            }
            else
            {
                cout << "Player 4 has not bought " << gunName[player4Space] << endl;
            }
        }
        else if (hpValues[player4Space] == 15 && propertySpaceOwnership[player4Space] == 1 && player4Hp > 15)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 4 has bought " << gunName[player4Space] << endl;
                propertySpaceOwnership[player4Space] = propertySpaceOwnership[player4Space] + 4;
                player4Hp = player4Hp - 15;
            }
            else
            {
                cout << "Player 4 has not bought " << gunName[player4Space] << endl;
            }
        }
        else if (hpValues[player4Space] == 20 && propertySpaceOwnership[player4Space] == 1 && player4Hp > 20)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 4 has bought " << gunName[player4Space] << endl;
                propertySpaceOwnership[player4Space] = propertySpaceOwnership[player4Space] + 4;
                player4Hp = player4Hp - 20;
            }
            else
            {
                cout << "Player 4 has not bought " << gunName[player4Space] << endl;
            }
        }
        else if (hpValues[player4Space] == 25 && propertySpaceOwnership[player4Space] == 1 && player4Hp > 25)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 4 has bought " << gunName[player4Space] << endl;
                propertySpaceOwnership[player4Space] = propertySpaceOwnership[player4Space] + 4;
                player4Hp = player4Hp - 25;
            }
            else
            {
                cout << "Player 4 has not bought " << gunName[player4Space] << endl;
            }
        }
        else if (hpValues[player4Space] == 30 && propertySpaceOwnership[player4Space] == 1 && player4Hp > 30)
        {
            cout << "Would you like to buy this property?(Type y for yes or anything else for no)" << endl;
            cin >> propertyBuy;

            if (propertyBuy == 'y')
            {
                cout << "Player 4 has bought " << gunName[player4Space] << endl;
                propertySpaceOwnership[player4Space] = propertySpaceOwnership[player4Space] + 4;
                player4Hp = player4Hp - 30;
            }
            else
            {
                cout << "Player 4 has not bought " << gunName[player4Space] << endl;
            }
        }

        else
        {
            cout << "Not enough HP left to get property " << endl;
        }
        break;
    default:
        break;

    }
}