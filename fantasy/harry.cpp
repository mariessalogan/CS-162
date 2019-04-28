//*******************************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the implementation file for the Harry Potter class.
//*******************************************************************************************
#include <iostream>
#include "character.hpp"
#include "harry.hpp"
#include <time.h>
Harry::Harry()
{
  srand(time(NULL));
  armor = 0;
  strengthPts = 10;
  hogwarts = 1; 
}

Harry::Harry(int arm, int pts, int warts)
{
  srand(time(NULL));
  armor = arm;
  strengthPts = pts;
  hogwarts = warts;
}

void Harry::setWarts(int warts)
{
  hogwarts = warts;
}

int Harry::getWarts()
{
  return hogwarts;
}
int Harry::attack()
{
  int roll1;
  int roll2;
  roll1 = rand();
  roll1 %= 6;//d6
  roll1 +=1;
  roll2 = rand();
  roll2%= 6;
  roll2 = roll2+1+roll1; //final roll combines both rolls and adds 1
  return roll2;
}

int Harry::defense()
{
  int roll1;                                                          
  int roll2;
  roll1 = rand();
  roll1 %= 6;//d6
  roll1 +=1;
  roll2 = rand();
  roll2%= 6;
  roll2 = roll2+1+roll1; //final roll combines both rolls and adds 1
  return roll2; 
}

int Harry::getArmor()
{
  return armor;
}

int Harry::getStrPts()
{
  return strengthPts;
}

int Harry::calcStrPts(int attack, int defense, int armor, int &pts)
{
  int damage;
  int strength;
  damage = attack - defense - armor;
  if(damage <= 0)//check to see if Harry has a rez
  {
    damage = 0;
  }
  strength = pts - damage;
  pts = strength;  
  if(strength <=0)
  {
    int warts = getWarts();
    if(warts != 1)
    {
      return strength;  
    }
    if(warts == 1)
    {
      std::cout << "The boy who lived, lives again!!! He comes back stronger than when he started!\n";
      strength = 20;
      setWarts(0);
      return strength; 
    }
  }
    return strength; 
}

