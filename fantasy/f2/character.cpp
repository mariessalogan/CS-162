//**********************************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the implementation file for the Character virtual class.
//*********************************************************************************************
#include <iostream>
#include "character.hpp"

Character::Character()
{
  armor = 10;
  strengthPts = 15; 
}

Character::Character(int arm, int pts)
{
  armor = arm;
  strengthPts = pts;
}

int Character::attack()
{
  int roll;
  srand(time(NULL));
  roll = rand();
  roll %= 2;//default roll is just a coin flip
  return roll;
}

int Character::defense()
{
  int roll;
  srand(time(NULL));
  roll = rand();
  roll %= 2;//default roll is a coin flip
  return roll; 
}

int Character::getArmor()
{
  return armor;
}

int Character::getStrPts()
{
  return strengthPts;
}

int Character::calcStrPts(int attack, int defense, int armor, int pts)
{
  int damage;
  int strength;
  damage = attack - defense - armor;
  strength = pts - damage;
  return strength; 
}

