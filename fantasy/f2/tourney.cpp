//***********************************************************************
//Name: Mariessa Logan
//Date: 3/2/2018	
//Description: This will implement the tourney class
//************************************************************************
#include <iostream>
#include "tourney.hpp"
#include "menu.hpp"
#include "gamePlay.hpp"
Tourney::Tourney()
{
  team1 = 0;
  team2 = 0;
  point1 = 0;
  point2 = 0;
  win1 = false;
  this->head1 = NULL;
  this->head2 = NULL;
  this->headL = NULL;
}


void Tourney::setTeam1(int t1)
{
  int player;
  for(;team1 < t1; team1++)
  {
    Team1 *ptr = new Team1();
    player = choose(); 
    std::string name;
    std::cout << "What would you like to name the fighter?\n";
    std::cin >> name;  
    if(head1 == NULL)
    {
      head1 = ptr;
      head1->prev = head1;
      head1->next = head1;
      head1->count = 1;
    }
    else
    {
      ptr->prev = head1->prev;
      head1->prev->next = ptr;
      ptr->next = head1;
      head1->prev = ptr;
      ptr->count = ptr->prev->count + 1;
    }
    ptr->choice = player;
    ptr->title = name;
  }   
}
void Tourney::setTeam2(int t2)
{
  for(;team2 < t2; team2++)
  {
    int player = choose(); 
    std::string name;
    std::cout << "What would you like to name the fighter?\n";
    std::cin >> name;  
    Team2 *ptr = new Team2();
    if(head2 == NULL)
    {
      head2 = ptr;
      head2->prev = ptr;
      head2->next = ptr;
      ptr->count = 1; 
    }
    else
    {
      ptr->prev = head2->prev;
      head2->prev->next = ptr;
      ptr->next = head2;
      head2->prev = ptr;
      ptr->count = ptr->prev->count +1;
    }
    ptr->choice = player;
    ptr->title = name;
  }   
}                                                                    
void Tourney::setLosers(bool w1)
{
  Losers *ptr = new Losers();
  if(headL == NULL)
  {
    headL = ptr;
    headL->prev = ptr;
    headL->next = ptr; 
  } 
  else
  {
    ptr->prev = headL->prev;
    headL->prev->next = ptr;
    ptr->next = headL;
    headL->prev = ptr;

  }
  if(w1 == false)//if team 1 lost
  {
    Team1 *lost = new Team1();
    lost = head1;
    ptr->title = lost->title;
    lost->prev = NULL;
    lost->next = NULL;
    delete lost;
  }
  else 
  {
    Team2 *lost = new Team2();
    lost = head2;
    ptr->title = lost->title;
    lost->prev = NULL;
    lost->next = NULL;
    delete lost;
  }
}                                      

void Tourney::printTeam1()
{
  Team1 *ptr = new Team1();
  ptr = head1;
  int choice;
  std::cout << "Team 1 line up:\n";
  do{
    std::cout << ptr->title;
    ptr = ptr->next;
    choice = ptr->choice;
    if(choice == 1)                                            
    {
      std::cout << " the Vampire.\n";
    }
    if(choice == 2)
    {
      std::cout << " the Barbarian.\n";
    }
    if(choice == 3)
    {
      std::cout << " the Blue Men.\n";
    }
    if(choice == 4)
    {
      std::cout << " the Medusa.\n";
    }
    if(choice == 5)
    {
      std::cout << " the Harry Potter.\n"; 
    }
  }while(ptr!= head1);
  ptr->prev = NULL;
  ptr->next = NULL;
  delete ptr;
}                

void Tourney::printTeam2()
{
  Team2 *ptr = new Team2();
  ptr = head2;
  int choice;
  std::cout << "Team 2 line up:\n";
  do{
    std::cout << ptr->title ;
    ptr = ptr->next;
    choice = ptr->choice;
    if(choice == 1)                                                
    {
      std::cout << " the Vampire.\n";
    }
    if(choice == 2)
    {
      std::cout << " the Barbarian.\n";
    }
    if(choice == 3)
    {
      std::cout << " the Blue Men.\n";
    }
    if(choice == 4)
    {
      std::cout << " the Medusa.\n";
    }
    if(choice == 5)
    {
      std::cout << " the Harry Potter.\n";
    }
  }while(ptr != head2);
  ptr->prev = NULL;
  ptr->next = NULL;
  delete ptr;
}

void Tourney::printLosers()
{
  Losers *ptr = new Losers();
  ptr = headL;
  do{
    std::cout << ptr->title << "\n";
    ptr = ptr->next;
  }while(ptr != headL);
  ptr->prev = NULL;
  ptr->next = NULL;
  delete ptr;
}  

void Tourney::removeTeam1()                      
{
  if(head1 == NULL)
  {
    std::cout << "Team 1 lost!\n";
  } 
  else{
    Team1 *garbage = head1;
    head1->next->prev = head1->prev;
    head1->prev->next = head1->next;
    if(head1->next == head1)
    {
      head1 = NULL;
      delete head1;
    }
    else
    {
      head1 = head1->next;
    }

    garbage->next = NULL;
    garbage->prev = NULL;
    delete garbage; 
  } 
}

bool Tourney::isEmpty()
{
  if(head1 == NULL && head2 == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}
void Tourney::removeTeam2()                                  
{
  if(head2 == NULL)
  {
    std::cout << "Team 2 lost!\n";
  }
  else{
    Team2 *garbage = head2;
    head2->next->prev = head2->prev;
    head2->prev->next = head2->next;
      if(head2->next == head2)
      {
        head2 = NULL;
        delete head2;
      }
      else
      {
        head2 = head2->next;
      }
    garbage->next = NULL;
    garbage->prev = NULL;
    delete garbage;  
  }
}  

bool Tourney::play()
{
    //  int p1 = head1->choice;                                      
      //int p2 = head2->choice;                                     
      bool win;
      if(head1->choice == 1)//Player 1 is a Vampire
      {
        win = gamePlay(head2->choice); 
      }
      if(head1->choice == 2)//Player 1 is a Barbarian
      {
        win = gamePlay2(head2->choice);
      }
      if(head1->choice ==3)//Player 1 is a Blue Man
      {
        win = gamePlay3(head2->choice);
      }
      if(head1->choice == 4)//Player 1 is Medusa
      {
        win = gamePlay4(head2->choice);
      }
      if(head1->choice == 5)//Player 1 is Harry Potter 
      {
        win = gamePlay5(head2->choice);
      }
  return win;
}                                                
