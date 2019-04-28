//********************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the main file that will call the other classes
//*******************************************************************
#include<iostream>
#include "menu.hpp"
#include "character.hpp"
#include "barbarian.hpp"
#include "vampire.hpp"
#include "medusa.hpp"
#include "harry.hpp"
#include "blue.hpp"
#include "gamePlay.hpp"

int main()
{
  int start;
  do{
    start = menu();
    if(start == 1)
    {
      int p1;
      int p2; 
      std::cout << "\n\nFantastic! Pick your first combattant!\n";
      p1 = choose();
      std::cout << "\n\nWho would you like them to fight?\n";
      p2 = choose();
      if(p1 == 1)//Player 1 is a Vampire
      {
        gamePlay(p2); 
      }
      if(p1 == 2)//Player 1 is a Barbarian
      {
        gamePlay2(p2);
      }
      if(p1 ==3)//Player 1 is a Blue Man
      {
        gamePlay3(p2);
      }
      if(p1 == 4)//Player 1 is Medusa
      {
        gamePlay4(p2);
      }
      if(p1 == 5)//Player 1 is Harry Potter 
      {
        gamePlay5(p2);
      }
    }
  }while(start != 0);
  return 0; 
}
