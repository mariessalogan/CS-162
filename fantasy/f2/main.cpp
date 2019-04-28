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
#include "tourney.hpp"
int main()
{
  int start;
  do{
    start = menu();
    if(start == 1)
    {
      int players1;                                                                          
      int players2;
      int point1;
      int point2;
      Tourney t1;
      bool lose;
      do{
        std::cout << "How many fighters would you like for Team 1?(Please choose between 1 and 10)\n";
        std::cin >> players1;
        std::cout << "\n";
      }while(players1 < 1 && players1 > 10);
      do{
        std::cout << "How many fighters would you like for Team 2? (Please choose between 1 and 10)\n";
        std::cin >> players2;
        std::cout << "\n";
      }while(players2 < 1 && players2 >10);
      t1.setTeam1(players1);
      t1.setTeam2(players1);
     do{
      t1.printTeam1();
      t1.printTeam2();
      bool win;
      win = t1.play();
      t1.setLosers(win);
      if(win == false)
      {
        t1.removeTeam1();
        point2++;
      } 
      else
      {
        t1.removeTeam2();
        point1++;
      }  
      std::cout << "Team 1 has " << point1 << " points.\n";
      std::cout << "Team 2 has " << point2 << " points.\n";
      t1.printLosers();
      lose = t1.isEmpty();
     }while(lose != true);
    }
  }while(start != 0);
  return 0; 
}
