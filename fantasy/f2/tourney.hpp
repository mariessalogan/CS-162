//******************************************************************************************************************************
//Name: Mariessa Logan	
//Date: 3/2/2018
//Description: this will build the tournament requirements
//*******************************************************************************************************************************
#ifndef TOURNEY_HPP
#define TOURNEY_HPP
#include "vampire.hpp"
#include "character.hpp"
#include "barbarian.hpp"
#include "blue.hpp"
#include "medusa.hpp"
#include "harry.hpp"
class Tourney
{
  protected:
    struct Team1          
    {
      Team1 *next;
      Team1 *prev;
      int choice;
      std::string title;
      int count;
    };
    struct Team2          
    {
      Team2 *next;
      Team2 *prev;
      int choice;
      std::string title;
      int count;
    };
    struct Losers          
    {
      Losers *next;           
      Losers *prev;
      int choice;
      std::string title;
    };
  private:
    int team1; //This is for the count of team 1
    int team2; //This is for the count of team 2
    int point1; //This will keep the score for team 1
    int point2; //This will keep the score for team 2
    bool win1;//This will set a flag if team 1 wins
     Team1 *head1;
     Team2 *head2;
     Losers *headL;
  public:
    Tourney();
    void setTeam1(int t1);
    void setTeam2(int t2);
    void setLosers(bool w1);//create a loser team
    bool isEmpty(); 
   void printTeam1();
    void printTeam2();
    void printLosers();
    void removeTeam1();
    void removeTeam2();  
    bool play();
};
#endif
