//**********************************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the implementation file for the Vampire class.
//*********************************************************************************************
#include <iostream>
#include "character.hpp"
#include "barbarian.hpp"
#include <time.h>
Barbarian::Barbarian()
{
  srand(time(NULL));
  armor = 0;
  strengthPts = 12; 
}

Barbarian::Barbarian(int arm, int pts)
{
  srand(time(NULL));
  armor = arm;
  strengthPts = pts;
}

int Barbarian::attack()
{
  int roll1;
  int roll2;
  //srand(time(NULL));
  roll1 = rand();
  roll1 %= 6;//d6
  roll1 +=1;
  //srand(time(NULL)*8);
  roll2 = rand();
  roll2%= 6;
  roll2 = roll2+1+roll1; //final roll combines both rolls and adds 1
  return roll2;
}

int Barbarian::defense()
{
  int roll1;                                                          
  int roll2;
  //srand(time(NULL));
  roll1 = rand();
  roll1 %= 6;//d6
  roll1 +=1;
  //srand(time(NULL)*3);
  roll2 = rand();
  roll2%= 6;
  roll2 = roll2+1+roll1; //final roll combines both rolls and adds 1
  return roll2; 
}

int Barbarian::getArmor()
{
  return armor;
}

int Barbarian::getStrPts()
{
  return strengthPts;
}

int Barbarian::calcStrPts(int attack, int defense, int armor, int &pts)
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

