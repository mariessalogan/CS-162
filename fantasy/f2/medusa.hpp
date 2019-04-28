//********************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: The header file for the Medusa character class.
//********************************************************************************
#ifndef MEDUSA_HPP
#define MEDUSA_HPP

class Medusa: public Character
{
  private:
    int armor;
    int strengthPts;
  public:
  Medusa();
  Medusa(int arm, int pts);
  int attack();
  int defense();
  int getArmor();
  int getStrPts();
  int calcStrPts(int attack, int defense, int armor, int &pts);
};
#endif
