// GDW Group 16_Text Boardgame.cpp 
//Nazifa Alam : 100787092
//Myles Beckett : 100790333
//Donovan Mills : 100801916
//Alexi Charles : 100651942
//Braedon Harris : 100572327

#include <iostream>
#include <string>


const int numSpaces = 24;

// Parallel arrays for the board
int hpValues[] = { 0, 0, 0, 10, 0, 10, 0, 0, 10, 0, 15, 15, 0, 0, 20, 20, 0, 0, 0, 0, 25, 0, 25, 35};
std::string propertyColour[] = { "None", "None", "None", "Green", "None", "Green", "None", "None", "Green", "None", "Lightble", "LightBlue", "None", "None", "Yellow", "Yellow", "None", "None", "None", "None", "Pink", "None", "Pink", "Blue"};
std::string gunname[] = { "None", "None", "None", "Kolibri", "None", "ASP Pistol", "None", "None", "Beretta M9", "None", "Supernova", "USAS-12", "None", "None", "Scorpion Evo", "PPSH-41", "None", "None", "None", "None", "AK-47", "None", "M-16", "RPG" };
bool isSecretStash[] = { false, true, false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, false, false, false, false, true, false, false };
bool isTrap[] = { false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false };
bool isProperty[] = { false, false, false, true, false, true, false, false, true, false, true, true, false, false, true, true, false, false, false, false, true, false, true, true };
bool isRiskySpace[] = { false, false, false, false, true, false, false, false, false, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false };
bool isCaptured[] = { false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
bool isTakenCaptive[] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false };
bool isNoMansLand[] = { false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false };
