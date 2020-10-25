
void rivalpropertyLanding(int player)
{

    
    switch (player)
    {
    case 1:
        //if statements used to take player's health for landing on rival property
    if (hpValues[player1Space] == 10 && propertySpaceOwnership[player1Space] == 3)
        {
        cout << "Player 1 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player1Space] == 1)
        {
            cout << "Player 1 has lost 10HP " << endl;
            player1Hp = player1Hp - 10;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 2)
        {
            cout << "Player 1 has lost 15HP " << endl;
            player1Hp = player1Hp - 15;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 3)
        {
            cout << "Player 1 has lost 20HP " << endl;
            player1Hp = player1Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 4)
        {
            cout << "Player 1 has lost 30HP " << endl;
            player1Hp = player1Hp - 30;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
        else if (hpValues[player1Space] == 15 && propertySpaceOwnership[player1Space] == 3)
        {
        cout << "Player 1 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player1Space] == 1)
        {
            cout << "Player 1 has lost 15HP " << endl;
            player1Hp = player1Hp - 15;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 2)
        {
            cout << "Player 1 has lost 20HP " << endl;
            player1Hp = player1Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 3)
        {
            cout << "Player 1 has lost 25HP " << endl;
            player1Hp = player1Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 4)
        {
            cout << "Player 1 has lost 35HP " << endl;
            player1Hp = player1Hp - 35;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
        else if (hpValues[player1Space] == 20 && propertySpaceOwnership[player1Space] == 3)
        {
        cout << "Player 1 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player1Space] == 1)
        {
            cout << "Player 1 has lost 20HP " << endl;
            player1Hp = player1Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 2)
        {
            cout << "Player 1 has lost 25HP " << endl;
            player1Hp = player1Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 3)
        {
            cout << "Player 1 has lost 30HP " << endl;
            player1Hp = player1Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 4)
        {
            cout << "Player 1 has lost 40HP " << endl;
            player1Hp = player1Hp - 40;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
        else if (hpValues[player1Space] == 25 && propertySpaceOwnership[player1Space] == 3)
        {
        cout << "Player 1 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player1Space] == 1)
        {
            cout << "Player 1 has lost 25HP " << endl;
            player1Hp = player1Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 2)
        {
            cout << "Player 1 has lost 30HP " << endl;
            player1Hp = player1Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 3)
        {
            cout << "Player 1 has lost 35HP " << endl;
            player1Hp = player1Hp - 35;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 4)
        {
            cout << "Player 1 has lost 45HP " << endl;
            player1Hp = player1Hp - 45;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
        else if (hpValues[player1Space] == 30 && propertySpaceOwnership[player1Space] == 3)
        {
        cout << "Player 1 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player1Space] == 1)
        {
            cout << "Player 1 has lost 30HP " << endl;
            player1Hp = player1Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 2)
        {
            cout << "Player 1 has lost 35HP " << endl;
            player1Hp = player1Hp - 35;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 3)
        {
            cout << "Player 1 has lost 40HP " << endl;
            player1Hp = player1Hp - 40;
        }
        else if (propertySpaceUpgradeAmount[player1Space] == 4)
        {
            cout << "Player 1 has lost 50HP " << endl;
            player1Hp = player1Hp - 50;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }


        else if (hpValues[player1Space] == 10 && propertySpaceOwnership[player1Space] == 4)
        {
            cout << "Player 1 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player1Space] == 1)
            {
                cout << "Player 1 has lost 10HP " << endl;
                player1Hp = player1Hp - 10;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 2)
            {
                cout << "Player 1 has lost 15HP " << endl;
                player1Hp = player1Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 3)
            {
                cout << "Player 1 has lost 20HP " << endl;
                player1Hp = player1Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 4)
            {
                cout << "Player 1 has lost 30HP " << endl;
                player1Hp = player1Hp - 30;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player1Space] == 15 && propertySpaceOwnership[player1Space] == 4)
        {
            cout << "Player 1 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player1Space] == 1)
            {
                cout << "Player 1 has lost 15HP " << endl;
                player1Hp = player1Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 2)
            {
                cout << "Player 1 has lost 20HP " << endl;
                player1Hp = player1Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 3)
            {
                cout << "Player 1 has lost 25HP " << endl;
                player1Hp = player1Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 4)
            {
                cout << "Player 1 has lost 35HP " << endl;
                player1Hp = player1Hp - 35;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player1Space] == 20 && propertySpaceOwnership[player1Space] == 4)
        {
            cout << "Player 1 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player1Space] == 1)
            {
                cout << "Player 1 has lost 20HP " << endl;
                player1Hp = player1Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 2)
            {
                cout << "Player 1 has lost 25HP " << endl;
                player1Hp = player1Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 3)
            {
                cout << "Player 1 has lost 30HP " << endl;
                player1Hp = player1Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 4)
            {
                cout << "Player 1 has lost 40HP " << endl;
                player1Hp = player1Hp - 40;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player1Space] == 25 && propertySpaceOwnership[player1Space] == 4)
        {
            cout << "Player 1 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player1Space] == 1)
            {
                cout << "Player 1 has lost 25HP " << endl;
                player1Hp = player1Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 2)
            {
                cout << "Player 1 has lost 30HP " << endl;
                player1Hp = player1Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 3)
            {
                cout << "Player 1 has lost 35HP " << endl;
                player1Hp = player1Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 4)
            {
                cout << "Player 1 has lost 45HP " << endl;
                player1Hp = player1Hp - 45;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player1Space] == 30 && propertySpaceOwnership[player1Space] == 4)
        {
            cout << "Player 1 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player1Space] == 1)
            {
                cout << "Player 1 has lost 30HP " << endl;
                player1Hp = player1Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 2)
            {
                cout << "Player 1 has lost 35HP " << endl;
                player1Hp = player1Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 3)
            {
                cout << "Player 1 has lost 40HP " << endl;
                player1Hp = player1Hp - 40;
            }
            else if (propertySpaceUpgradeAmount[player1Space] == 4)
            {
                cout << "Player 1 has lost 50HP " << endl;
                player1Hp = player1Hp - 50;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }

            else if (hpValues[player1Space] == 10 && propertySpaceOwnership[player1Space] == 5)
            {
                cout << "Player 1 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player1Space] == 1)
                {
                    cout << "Player 1 has lost 10HP " << endl;
                    player1Hp = player1Hp - 10;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 2)
                {
                    cout << "Player 1 has lost 15HP " << endl;
                    player1Hp = player1Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 3)
                {
                    cout << "Player 1 has lost 20HP " << endl;
                    player1Hp = player1Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 4)
                {
                    cout << "Player 1 has lost 30HP " << endl;
                    player1Hp = player1Hp - 30;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player1Space] == 15 && propertySpaceOwnership[player1Space] == 5)
            {
                cout << "Player 1 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player1Space] == 1)
                {
                    cout << "Player 1 has lost 15HP " << endl;
                    player1Hp = player1Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 2)
                {
                    cout << "Player 1 has lost 20HP " << endl;
                    player1Hp = player1Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 3)
                {
                    cout << "Player 1 has lost 25HP " << endl;
                    player1Hp = player1Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 4)
                {
                    cout << "Player 1 has lost 35HP " << endl;
                    player1Hp = player1Hp - 35;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player1Space] == 20 && propertySpaceOwnership[player1Space] == 5)
            {
                cout << "Player 1 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player1Space] == 1)
                {
                    cout << "Player 1 has lost 20HP " << endl;
                    player1Hp = player1Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 2)
                {
                    cout << "Player 1 has lost 25HP " << endl;
                    player1Hp = player1Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 3)
                {
                    cout << "Player 1 has lost 30HP " << endl;
                    player1Hp = player1Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 4)
                {
                    cout << "Player 1 has lost 40HP " << endl;
                    player1Hp = player1Hp - 40;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player1Space] == 25 && propertySpaceOwnership[player1Space] == 5)
            {
                cout << "Player 1 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player1Space] == 1)
                {
                    cout << "Player 1 has lost 25HP " << endl;
                    player1Hp = player1Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 2)
                {
                    cout << "Player 1 has lost 30HP " << endl;
                    player1Hp = player1Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 3)
                {
                    cout << "Player 1 has lost 35HP " << endl;
                    player1Hp = player1Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 4)
                {
                    cout << "Player 1 has lost 45HP " << endl;
                    player1Hp = player1Hp - 45;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player1Space] == 30 && propertySpaceOwnership[player1Space] == 5)
            {
                cout << "Player 1 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player1Space] == 1)
                {
                    cout << "Player 1 has lost 30HP " << endl;
                    player1Hp = player1Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 2)
                {
                    cout << "Player 1 has lost 35HP " << endl;
                    player1Hp = player1Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 3)
                {
                    cout << "Player 1 has lost 40HP " << endl;
                    player1Hp = player1Hp - 40;
                }
                else if (propertySpaceUpgradeAmount[player1Space] == 4)
                {
                    cout << "Player 1 has lost 50HP " << endl;
                    player1Hp = player1Hp - 50;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }

        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        break;
        case 2:

            if (hpValues[player2Space] == 10 && propertySpaceOwnership[player2Space] == 2)
            {
                cout << "Player 2 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player2Space] == 1)
                {
                    cout << "Player 2 has lost 10HP " << endl;
                    player2Hp = player2Hp - 10;
                }
                else if (propertySpaceUpgradeAmount[player2Space] == 2)
                {
                    cout << "Player 2 has lost 15HP " << endl;
                    player2Hp = player2Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player2Space] == 3)
                {
                    cout << "Player 2 has lost 20HP " << endl;
                    player2Hp = player2Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player2Space] == 4)
                {
                    cout << "Player 2 has lost 30HP " << endl;
                    player2Hp = player2Hp - 30;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player2Space] == 15 && propertySpaceOwnership[player2Space] == 2)
        {
        cout << "Player 2 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player2Space] == 1)
        {
            cout << "Player 2 has lost 15HP " << endl;
            player2Hp = player2Hp - 15;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 2)
        {
            cout << "Player 2 has lost 20HP " << endl;
            player2Hp = player2Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 3)
        {
            cout << "Player 2 has lost 25HP " << endl;
            player2Hp = player2Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 4)
        {
            cout << "Player 2 has lost 35HP " << endl;
            player2Hp = player2Hp - 35;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
            else if (hpValues[player2Space] == 20 && propertySpaceOwnership[player2Space] == 2)
        {
        cout << "Player 2 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player2Space] == 1)
        {
            cout << "Player 2 has lost 20HP " << endl;
            player2Hp = player2Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 2)
        {
            cout << "Player 2 has lost 25HP " << endl;
            player2Hp = player2Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 3)
        {
            cout << "Player 2 has lost 30HP " << endl;
            player2Hp = player2Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 4)
        {
            cout << "Player 2 has lost 40HP " << endl;
            player2Hp = player2Hp - 40;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
            else if (hpValues[player2Space] == 25 && propertySpaceOwnership[player2Space] == 2)
        {
        cout << "Player 2 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player2Space] == 1)
        {
            cout << "Player 2 has lost 25HP " << endl;
            player2Hp = player2Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 2)
        {
            cout << "Player 2 has lost 30HP " << endl;
            player2Hp = player2Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 3)
        {
            cout << "Player 2 has lost 35HP " << endl;
            player2Hp = player2Hp - 35;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 4)
        {
            cout << "Player 2 has lost 45HP " << endl;
            player2Hp = player2Hp - 45;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
            else if (hpValues[player2Space] == 30 && propertySpaceOwnership[player2Space] == 2)
        {
        cout << "Player 2 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player2Space] == 1)
        {
            cout << "Player 2 has lost 30HP " << endl;
            player2Hp = player2Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 2)
        {
            cout << "Player 2 has lost 35HP " << endl;
            player2Hp = player2Hp - 35;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 3)
        {
            cout << "Player 2 has lost 40HP " << endl;
            player2Hp = player2Hp - 40;
        }
        else if (propertySpaceUpgradeAmount[player2Space] == 4)
        {
            cout << "Player 2 has lost 50HP " << endl;
            player2Hp = player2Hp - 50;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }



            else if (hpValues[player2Space] == 10 && propertySpaceOwnership[player2Space] == 4)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 10HP " << endl;
                player2Hp = player2Hp - 10;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 15HP " << endl;
                player2Hp = player2Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 20HP " << endl;
                player2Hp = player2Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 15 && propertySpaceOwnership[player2Space] == 4)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 15HP " << endl;
                player2Hp = player2Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 20HP " << endl;
                player2Hp = player2Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 25HP " << endl;
                player2Hp = player2Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 35HP " << endl;
                player2Hp = player2Hp - 35;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 20 && propertySpaceOwnership[player2Space] == 4)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 20HP " << endl;
                player2Hp = player2Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 25HP " << endl;
                player2Hp = player2Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 40HP " << endl;
                player2Hp = player2Hp - 40;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 25 && propertySpaceOwnership[player2Space] == 4)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 25HP " << endl;
                player2Hp = player2Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 35HP " << endl;
                player2Hp = player2Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 45HP " << endl;
                player2Hp = player2Hp - 45;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 30 && propertySpaceOwnership[player2Space] == 4)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 35HP " << endl;
                player2Hp = player2Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 40HP " << endl;
                player2Hp = player2Hp - 40;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 50HP " << endl;
                player2Hp = player2Hp - 50;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }



        else if (hpValues[player2Space] == 10 && propertySpaceOwnership[player2Space] == 5)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 10HP " << endl;
                player2Hp = player2Hp - 10;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 15HP " << endl;
                player2Hp = player2Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 20HP " << endl;
                player2Hp = player2Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 15 && propertySpaceOwnership[player2Space] == 5)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 15HP " << endl;
                player2Hp = player2Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 20HP " << endl;
                player2Hp = player2Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 25HP " << endl;
                player2Hp = player2Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 35HP " << endl;
                player2Hp = player2Hp - 35;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 20 && propertySpaceOwnership[player2Space] == 5)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 20HP " << endl;
                player2Hp = player2Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 25HP " << endl;
                player2Hp = player2Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 40HP " << endl;
                player2Hp = player2Hp - 40;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 25 && propertySpaceOwnership[player2Space] == 5)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 25HP " << endl;
                player2Hp = player2Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 35HP " << endl;
                player2Hp = player2Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 45HP " << endl;
                player2Hp = player2Hp - 45;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player2Space] == 30 && propertySpaceOwnership[player2Space] == 5)
        {
            cout << "Player 2 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player2Space] == 1)
            {
                cout << "Player 2 has lost 30HP " << endl;
                player2Hp = player2Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 2)
            {
                cout << "Player 2 has lost 35HP " << endl;
                player2Hp = player2Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 3)
            {
                cout << "Player 2 has lost 40HP " << endl;
                player2Hp = player2Hp - 40;
            }
            else if (propertySpaceUpgradeAmount[player2Space] == 4)
            {
                cout << "Player 2 has lost 50HP " << endl;
                player2Hp = player2Hp - 50;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }



        else
        {
        cout << "Problem in rivalpropertyLanding function " << endl;
        }

        break;
        case 3:

            if (hpValues[player3Space] == 10 && propertySpaceOwnership[player3Space] == 2)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 10HP " << endl;
                    player3Hp = player3Hp - 10;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 15HP " << endl;
                    player3Hp = player3Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 15 && propertySpaceOwnership[player3Space] == 2)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 15HP " << endl;
                    player3Hp = player3Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 20 && propertySpaceOwnership[player3Space] == 2)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 40HP " << endl;
                    player3Hp = player3Hp - 40;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 25 && propertySpaceOwnership[player3Space] == 2)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 45HP " << endl;
                    player3Hp = player3Hp - 45;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 30 && propertySpaceOwnership[player3Space] == 2)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 40HP " << endl;
                    player3Hp = player3Hp - 40;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 50HP " << endl;
                    player3Hp = player3Hp - 50;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }




            else if (hpValues[player3Space] == 10 && propertySpaceOwnership[player3Space] == 3)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 10HP " << endl;
                    player3Hp = player3Hp - 10;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 15HP " << endl;
                    player3Hp = player3Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 15 && propertySpaceOwnership[player3Space] == 3)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 15HP " << endl;
                    player3Hp = player3Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 20 && propertySpaceOwnership[player3Space] == 3)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 40HP " << endl;
                    player3Hp = player3Hp - 40;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 25 && propertySpaceOwnership[player3Space] == 3)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 45HP " << endl;
                    player3Hp = player3Hp - 45;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 30 && propertySpaceOwnership[player3Space] == 3)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 40HP " << endl;
                    player3Hp = player3Hp - 40;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 50HP " << endl;
                    player3Hp = player3Hp - 50;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }



            else if (hpValues[player3Space] == 10 && propertySpaceOwnership[player3Space] == 5)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 10HP " << endl;
                    player3Hp = player3Hp - 10;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 15HP " << endl;
                    player3Hp = player3Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 15 && propertySpaceOwnership[player3Space] == 5)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 15HP " << endl;
                    player3Hp = player3Hp - 15;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 20 && propertySpaceOwnership[player3Space] == 5)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 20HP " << endl;
                    player3Hp = player3Hp - 20;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 40HP " << endl;
                    player3Hp = player3Hp - 40;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 25 && propertySpaceOwnership[player3Space] == 5)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 25HP " << endl;
                    player3Hp = player3Hp - 25;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 45HP " << endl;
                    player3Hp = player3Hp - 45;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }
            else if (hpValues[player3Space] == 30 && propertySpaceOwnership[player3Space] == 5)
            {
                cout << "Player 3 has landed on an owned property! " << endl;

                if (propertySpaceUpgradeAmount[player3Space] == 1)
                {
                    cout << "Player 3 has lost 30HP " << endl;
                    player3Hp = player3Hp - 30;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 2)
                {
                    cout << "Player 3 has lost 35HP " << endl;
                    player3Hp = player3Hp - 35;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 3)
                {
                    cout << "Player 3 has lost 40HP " << endl;
                    player3Hp = player3Hp - 40;
                }
                else if (propertySpaceUpgradeAmount[player3Space] == 4)
                {
                    cout << "Player 3 has lost 50HP " << endl;
                    player3Hp = player3Hp - 50;
                }
                else
                {
                    cout << "Problem in rivalpropertyLanding function " << endl;
                }
            }


            else
        {
         cout << "Problem in rivalpropertyLanding function " << endl;
        }

        break;
        case 4:

            if (hpValues[player4Space] == 10 && propertySpaceOwnership[player4Space] == 2)
        {
        cout << "Player 4 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player4Space] == 1)
        {
            cout << "Player 4 has lost 10HP " << endl;
            player4Hp = player4Hp - 10;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 2)
        {
            cout << "Player 4 has lost 15HP " << endl;
            player4Hp = player4Hp - 15;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 3)
        {
            cout << "Player 4 has lost 20HP " << endl;
            player4Hp = player4Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 4)
        {
            cout << "Player 4 has lost 30HP " << endl;
            player4Hp = player4Hp - 30;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
            else if (hpValues[player4Space] == 15 && propertySpaceOwnership[player4Space] == 2)
        {
        cout << "Player 4 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player4Space] == 1)
        {
            cout << "Player 4 has lost 15HP " << endl;
            player4Hp = player4Hp - 15;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 2)
        {
            cout << "Player 4 has lost 20HP " << endl;
            player4Hp = player4Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 3)
        {
            cout << "Player 4 has lost 25HP " << endl;
            player4Hp = player4Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 4)
        {
            cout << "Player 4 has lost 35HP " << endl;
            player4Hp = player4Hp - 35;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
            else if (hpValues[player4Space] == 20 && propertySpaceOwnership[player4Space] == 2)
        {
        cout << "Player 4 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player4Space] == 1)
        {
            cout << "Player 4 has lost 20HP " << endl;
            player4Hp = player4Hp - 20;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 2)
        {
            cout << "Player 4 has lost 25HP " << endl;
            player4Hp = player4Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 3)
        {
            cout << "Player 4 has lost 30HP " << endl;
            player4Hp = player4Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 4)
        {
            cout << "Player 4 has lost 40HP " << endl;
            player4Hp = player4Hp - 40;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
            else if (hpValues[player4Space] == 25 && propertySpaceOwnership[player4Space] == 2)
        {
        cout << "Player 4 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player4Space] == 1)
        {
            cout << "Player 4 has lost 25HP " << endl;
            player4Hp = player4Hp - 25;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 2)
        {
            cout << "Player 4 has lost 30HP " << endl;
            player4Hp = player4Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 3)
        {
            cout << "Player 4 has lost 35HP " << endl;
            player4Hp = player4Hp - 35;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 4)
        {
            cout << "Player 4 has lost 45HP " << endl;
            player4Hp = player4Hp - 45;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }
            else if (hpValues[player4Space] == 30 && propertySpaceOwnership[player4Space] == 2)
        {
        cout << "Player 4 has landed on an owned property! " << endl;

        if (propertySpaceUpgradeAmount[player4Space] == 1)
        {
            cout << "Player 4 has lost 30HP " << endl;
            player4Hp = player4Hp - 30;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 2)
        {
            cout << "Player 4 has lost 35HP " << endl;
            player4Hp = player4Hp - 35;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 3)
        {
            cout << "Player 4 has lost 40HP " << endl;
            player4Hp = player4Hp - 40;
        }
        else if (propertySpaceUpgradeAmount[player4Space] == 4)
        {
            cout << "Player 4 has lost 50HP " << endl;
            player4Hp = player4Hp - 50;
        }
        else
        {
            cout << "Problem in rivalpropertyLanding function " << endl;
        }
        }



        else if (hpValues[player4Space] == 10 && propertySpaceOwnership[player4Space] == 3)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 10HP " << endl;
                player4Hp = player4Hp - 10;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 15HP " << endl;
                player4Hp = player4Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 20HP " << endl;
                player4Hp = player4Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 15 && propertySpaceOwnership[player4Space] == 3)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 15HP " << endl;
                player4Hp = player4Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 20HP " << endl;
                player4Hp = player4Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 25HP " << endl;
                player4Hp = player4Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 35HP " << endl;
                player4Hp = player4Hp - 35;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 20 && propertySpaceOwnership[player4Space] == 3)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 20HP " << endl;
                player4Hp = player4Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 25HP " << endl;
                player4Hp = player4Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 40HP " << endl;
                player4Hp = player4Hp - 40;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 25 && propertySpaceOwnership[player4Space] == 3)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 25HP " << endl;
                player4Hp = player4Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 35HP " << endl;
                player4Hp = player4Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 45HP " << endl;
                player4Hp = player4Hp - 45;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 30 && propertySpaceOwnership[player4Space] == 3)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 35HP " << endl;
                player4Hp = player4Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 40HP " << endl;
                player4Hp = player4Hp - 40;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 50HP " << endl;
                player4Hp = player4Hp - 50;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }



        else if (hpValues[player4Space] == 10 && propertySpaceOwnership[player4Space] == 4)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 10HP " << endl;
                player4Hp = player4Hp - 10;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 15HP " << endl;
                player4Hp = player4Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 20HP " << endl;
                player4Hp = player4Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 15 && propertySpaceOwnership[player4Space] == 4)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 15HP " << endl;
                player4Hp = player4Hp - 15;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 20HP " << endl;
                player4Hp = player4Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 25HP " << endl;
                player4Hp = player4Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 35HP " << endl;
                player4Hp = player4Hp - 35;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 20 && propertySpaceOwnership[player4Space] == 4)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 20HP " << endl;
                player4Hp = player4Hp - 20;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 25HP " << endl;
                player4Hp = player4Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 40HP " << endl;
                player4Hp = player4Hp - 40;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 25 && propertySpaceOwnership[player4Space] == 4)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 25HP " << endl;
                player4Hp = player4Hp - 25;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 35HP " << endl;
                player4Hp = player4Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 45HP " << endl;
                player4Hp = player4Hp - 45;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }
        else if (hpValues[player4Space] == 30 && propertySpaceOwnership[player4Space] == 4)
        {
            cout << "Player 4 has landed on an owned property! " << endl;

            if (propertySpaceUpgradeAmount[player4Space] == 1)
            {
                cout << "Player 4 has lost 30HP " << endl;
                player4Hp = player4Hp - 30;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 2)
            {
                cout << "Player 4 has lost 35HP " << endl;
                player4Hp = player4Hp - 35;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 3)
            {
                cout << "Player 4 has lost 40HP " << endl;
                player4Hp = player4Hp - 40;
            }
            else if (propertySpaceUpgradeAmount[player4Space] == 4)
            {
                cout << "Player 4 has lost 50HP " << endl;
                player4Hp = player4Hp - 50;
            }
            else
            {
                cout << "Problem in rivalpropertyLanding function " << endl;
            }
        }


            else
        {
        cout << "Did not land on rival property space " << endl;
        }

            break;
        default:
            break;

    }
}
