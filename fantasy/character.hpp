//***********************************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: The header file for the character class.
//**********************************************************************************************
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character
{
  protected:
    int armor;
    int strengthPts;
  public:
  Character();
  Character(int arm, int pts);
  int attack();
  int defense();
  int getArmor();
  int getStrPts();
  int calcStrPts(int attack, int defense, int armor, int pts);
};
#endif
