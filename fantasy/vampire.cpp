//**********************************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the implementation file for the Vampire class.
//*********************************************************************************************
#include <iostream>
#include "character.hpp"
#include "vampire.hpp"
#include <time.h>
Vampire::Vampire()
{
  srand(time(NULL));
  armor = 1;
  strengthPts = 18; 
}

Vampire::Vampire(int arm, int pts)
{
  srand(time(NULL));
  armor = arm;
  strengthPts = pts;
}

int Vampire::attack()
{
  int roll;
  roll = rand();
  roll %= 12;//d12
  roll +=1;
  return roll;
}

int Vampire::defense()
{
  int roll = 0;
  roll = rand();
  roll %= 6;//d6
  roll +=1;
  return roll; 
}

int Vampire::getArmor()
{
  return armor;
}

int Vampire::getStrPts()
{
  return strengthPts;
}

int Vampire::calcStrPts(int attack, int defense, int armor, int &pts)
{
  int damage;
  int strength;
  int charm;
  charm = rand();
  charm %= 2;
  if(charm == 0)
  { 
    damage = attack - defense - armor;
    if(damage < 0)
    {
      damage = 0;
    }
    strength = pts - damage;
    pts = strength;  
    return strength; 
  }
  else
  {
    std::cout << "The opponent was charmed! No attack points deducted.\n";
    return pts;
  } 
}

