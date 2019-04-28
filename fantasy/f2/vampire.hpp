//********************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: The header file for the vampire character class.
//********************************************************************************
#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "character.hpp"

class Vampire: public Character
{
  private:
    int armor;
    int strengthPts;
  public:
  Vampire();
  Vampire(int arm, int pts);
  int attack();
  int defense();
  int getArmor();
  int getStrPts();
  int calcStrPts(int attack, int defense, int armor, int &pts);
};
#endif
