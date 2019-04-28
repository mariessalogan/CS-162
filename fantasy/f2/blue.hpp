//******************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: The header file for the blue character class.
//******************************************************************************
#ifndef BLUE_HPP
#define BLUE_HPP

class Blue: public Character
{
  private:
    int armor;
    int strengthPts;
  public:
  Blue();
  Blue(int arm, int pts);
  int attack();
  int defense(int &pts);
  int getArmor();
  int getStrPts();
  int calcStrPts(int attack, int defense, int armor, int &pts);
};
#endif
