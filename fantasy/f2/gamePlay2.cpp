//****************************************************************************i                                                                         
//Name: Mariessa Logan
//Date: 2/13/2018
//Description: This will call the character functions and make them fight
//against the Barbarian!
//****************************************************************************
#include <iostream>
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blue.hpp"
#include "medusa.hpp"
#include "harry.hpp"
#include "gamePlay.hpp"

bool gamePlay2(int c2)
{
  Vampire v2;
  Barbarian b1;
  Barbarian b2;
  Blue bl2;
  Medusa m2;
  Harry h2;
  int round = 1;
  std::cout << "\n**************************************************************************************************************************\n";
    if(c2 == 1)//Barbarian vs. Vampire 
    {
      int pts1 = b1.getStrPts();                                                                     
      int pts2 = v2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = b1.getArmor();
      int arm2 = v2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = b1.attack();
        int a2 = v2.attack();
        int d1 = b1.defense();
        int d2 = v2.defense();
        std::cout << "\nThe Barbarian attacks the Vampire!\n";
        std::cout << "The Barbarian attacks with " << a1 << " versus the Vampire's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = v2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for the Vampire.\n";
        if(str2 <=0)
        {
          return true;
        }    
        if(str2 > 0)
        {
          std::cout <<"\nThe Vampire attacks the Barbarian!\n";
          std::cout <<"The Vampire attacks with " << a2 << " versus the Barbarian's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = b1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Barbarian.\n";
          if(str1 <=0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 2)//barbarian vs barbarian
    {
      int pts1 = b1.getStrPts();                                                                     
      int pts2 = b2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = b1.getArmor();
      int arm2 = b2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = b1.attack();
        int a2 = b2.attack();
        int d1 = b1.defense();
        int d2 = b2.defense();
        std::cout << "\nBarbarian 1 attacks the other Barbarian!\n";
        std::cout << "Barbarian 1 attacks with " << a1 << " versus the other Barbarian's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = b2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Barbarian 2.\n";
        if(str2 <=0)
        {
          return true;
        } 
        if(str2 > 0)
        {
          std::cout <<"\nBarbarian 2 attacks Barbarian 1!\n";
          std::cout <<"Barbarian 2 attacks with " << a2 << " versus Barbarian 1's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = b1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for Barbarian 1.\n";
          if(str1 <= 0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
      std::cout << "\n\n\nThere can only be one Barbarian!\n";
    }
    if(c2 == 3)//Barbarian vs. Blue men                                                               
    {
      int pts1 = b1.getStrPts();                                                                  
      int pts2 = bl2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = b1.getArmor();
      int arm2 = bl2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = b1.attack();
        int a2 = bl2.attack();
        int d1 = b1.defense();
        int d2 = bl2.defense(str2);
        std::cout << "\nThe Barbarian attacks the Blue men!\n";
        std::cout << "Barbarian attacks with " << a1 << " versus Blue men's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = bl2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for the Blue men.\n";
        if(str2 <= 0)
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nThe Blue men attack the Barbarian!\n";
          std::cout <<"The Blue men attack with " << a2 << " versus the Barbarian's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = b1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Barbarian.\n";
          if(str1 <= 0)
          {
            return false;
          } 
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 4)//Barbarian vs. Medusa
    {
      int pts1 = b1.getStrPts();                                                                 
      int pts2 = m2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = b1.getArmor();
      int arm2 = m2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = b1.attack();
        int a2 = m2.attack();
        int d1 = b1.defense();
        int d2 = m2.defense();
        std::cout << "\nThe Barbarian attacks Medusa!\n";
        std::cout << "The Barbarian attacks with " << a1 << " versus Medusa's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = m2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Medusa.\n";
        if(str2 <= 0)
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nMedusa attacks the Barbarian!\n";
          std::cout <<"Medusa attacks with " << a2 << " versus the Barbarian's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = b1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Barbarian.\n";
          if(str1 <= 0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 5)//Barbarian vs. Harry Potter
    {
      int pts1 = b1.getStrPts();                                                         
      int pts2 = h2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = b1.getArmor();
      int arm2 = h2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = b1.attack();
        int a2 = h2.attack();
        int d1 = b1.defense();
        int d2 = h2.defense();
        std::cout << "\nThe Barbarian attacks Harry Potter!\n";
        std::cout << "The Barbarian attacks with " << a1 << " versus Harry's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = h2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Harry Potter.\n";
        if(str2 <= 0)
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nHarry Potter uses Expelliarmus against the Barbarian!\n";
          std::cout <<"Harry attacks with " << a2 << " versus the Barbarian's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = b1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Barbarian.\n";
          if(str1 <= 0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
  return false;
}
