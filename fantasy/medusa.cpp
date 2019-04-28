//**********************************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the implementation file for the medusa class.
//*********************************************************************************************
#include <iostream>
#include "character.hpp"
#include "medusa.hpp"
#include <time.h>
Medusa::Medusa()
{
  srand(time(NULL));
  armor = 3;
  strengthPts = 8; 
}

Medusa::Medusa(int arm, int pts)
{
  srand(time(NULL));
  armor = arm;
  strengthPts = pts;
}

int Medusa::attack()
{
  int roll;
  int roll2;
  int glare = 20;
  roll = rand();
  roll %= 6;//d6
  roll +=1;
  roll2 = rand();
  roll2 %= 6;//d6
  roll2 +=1;
  roll += roll2;
  if(roll != 12)
  {
    return roll;
  }
  else
  {
    std::cout << "Medusa used glare for an insta-kill!\n";
    return glare;
  } 
}
int Medusa::defense()
{
  int roll = 0;
  roll = rand();
  roll %= 6;//d6
  roll +=1;
  return roll; 
}

int Medusa::getArmor()
{
  return armor;
}

int Medusa::getStrPts()
{
  return strengthPts;
}

int Medusa::calcStrPts(int attack, int defense, int armor, int &pts)
{
  int damage;
  int strength;
  damage = attack - defense - armor;
  if(damage < 0)
  {
    damage = 0;
  }
  strength = pts - damage;
  pts = strength;  
  return strength; 
}

