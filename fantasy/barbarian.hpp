//********************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: The header file for the barbariancharacter class.
//********************************************************************************
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

class Barbarian: public Character
{
  private:
    int armor;
    int strengthPts;
  public:
  Barbarian();
  Barbarian(int arm, int pts);
  int attack();
  int defense();
  int getArmor();
  int getStrPts();
  int calcStrPts(int attack, int defense, int armor, int &pts);
};
#endif
