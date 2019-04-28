//********************************************************************
//Name: Mariessa Logan
//Date: 2/12/18
//Description: This is the menu function for the fantasy combat game
//********************************************************************
#include <iostream>

int menu()
{
  int start;
  char temp_string[20];  
  std::cout << "\n\n\n\n\n\nSalutations fair citizen! Welcome to the battlegrounds!\n\n\n";
  do{
    std::cout << "Would you like to watch some combat? \n Press 1 to start a battle \n Press 2 to depart\n";
    std::cin >> temp_string;
    start = atoi(temp_string);
    if(start == 1)
    {
      return 1;
    }
    else if(start == 2)
    {
      return 0;
    }
    else
    {
      std::cout << "You may only choose 1 or 2, peasant!\n";
    }
  }while(start != 1 && start != 2);	 
}

int choose()
{
  int P1 = 0;
  char temp_string[20];
  do{
  std::cout << "\n\n1. Vampire -Suave, debonair, but vicious and surprisngly resilient.\n     Special Ability - Charm, they can charm an opponent into not attacking. For every attack, there is a 50/50 chance that their opponent will not attack\n"; 
  std::cout << "2. Barbarian - Akin to Conan or Hercules, Big sword, big muscles, and a bare torso.\n    Special Ability - Barbarians have no special ability\n";
  std::cout << "3. Blue men -  They are small, 6 inches tall but fast and tough. They are hard to hit so they can take some damage. They can also do a lot of damage when they crawl inside enemies' armor.\n    Special Ability - Mob, Blue Men are a swarm of small men. For every 4 points of damage, they lose 1 defense die.\n";
  std::cout << "4. Medusa - Scrawny lady with snakes for hair which helps her during combat. Just don't look at her!\n    Special Ability - Glare, if Medusa rolls a 12 when attacking a target, they get turned to stone and die.\n";
  std::cout << "5. Harry Potter - Harry Potter is a wizard.\n    Special Ability - Hogwarts, if Harry Potter's strength is 0 or less, he immediately recovers and his strength becomes 20. 1 rez per battle.\n";
  std::cin >> temp_string;
  P1 = atoi(temp_string);
 } while(P1 != 1 && P1 != 2 && P1 != 3 && P1 != 4 && P1 !=5);
  return P1;
}		
