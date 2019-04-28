//*************************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the implementation file for the Blue men class.
//*************************************************************************************
#include <iostream>
#include "character.hpp"
#include "blue.hpp"
#include <time.h>
Blue::Blue()
{
  srand(time(NULL));
  armor = 3;
  strengthPts = 12; 
}

Blue::Blue(int arm, int pts)
{
  srand(time(NULL));
  armor = arm;
  strengthPts = pts;
}

int Blue::attack()
{
  int roll1;
  int roll2;
  //srand(time(NULL));
  roll1 = rand();
  roll1 %= 10;//d10
  roll1 +=1;
  //srand(time(NULL)*8);
  roll2 = rand();
  roll2%= 10;
  roll2 = roll2+1+roll1; //final roll combines both rolls and adds 1
  return roll2;
}

int Blue::defense(int &pts)
{
  int roll;
  int roll2;
  int mob = pts;
  roll = rand()%6; 
  roll = + 1;      
  if(mob >= 9)
  { 
    std::cout << "You have all 3 blue men!\n";                                

    for(int i = 0; i<2 ; i++)
    {
      roll2 = rand();
      roll2 %= 6;//d6
      roll2 +=1;
      roll += roll2; //final roll combines both rolls and adds 1
    }
  }
  else if(mob >= 5 && mob <=8)
  {
    std::cout << "You lost 1 blue man!\n";
    roll2 = rand();
    roll2 %=2;
    roll2 += 1;
    roll += roll2;
  }   
  else
  {
    std::cout << "Oh no! Only one blue man left!\n";
  }
  return roll; 
}

int Blue::getArmor()
{
  return armor;
}

int Blue::getStrPts()
{
  return strengthPts;
}

int Blue::calcStrPts(int attack, int defense, int armor, int &pts)
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

