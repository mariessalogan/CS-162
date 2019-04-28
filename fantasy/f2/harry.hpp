//*******************************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: The header file for the Harry character class.
//*******************************************************************************
#ifndef HARRY_HPP
#define HARRY_HPP

class Harry: public Character
{
  private:
    int armor;
    int strengthPts;
    int hogwarts;
  public:
  Harry();
  Harry(int arm, int pts, int warts);
  void setWarts(int warts);
  int getWarts();
  int attack();
  int defense();
  int getArmor();
  int getStrPts();
  int calcStrPts(int attack, int defense, int armor, int &pts);
};
#endif
