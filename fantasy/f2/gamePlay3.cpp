//****************************************************************************i                                                                         
//Name: Mariessa Logan
//Date: 2/13/2018
//Description: This will call the character functions and make them fight!
//the Blue men!
//****************************************************************************
#include <iostream>
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blue.hpp"
#include "medusa.hpp"
#include "harry.hpp"
#include "gamePlay.hpp"


bool gamePlay3(int c2)
{
  Vampire v2;
  Barbarian b2;
  Blue bl1;
  Blue bl2;
  Medusa m2;
  Harry h2;
  int round = 1;
  std::cout << "\n**************************************************************************************************************************\n";
    if(c2 == 1)//Blue Men vs. Vampire combat
    {
      int pts1 = bl1.getStrPts();                                                          
      int pts2 = v2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = bl1.getArmor();
      int arm2 = v2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = bl1.attack();
        int a2 = v2.attack();
        int d1 = bl1.defense(str1);
        int d2 = v2.defense();
        std::cout << "\nThe Blue men attack the Vampire!\n";
        std::cout << "The Blue Men attack with " << a1 << " versus Vampire's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = v2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for the Vampire.\n";
        if(str2 <= 0)
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nVampire attacks the Blue Men!\n";
          std::cout <<"Vampire attacks with " << a2 << " versus the Blue men's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = bl1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Blue Men.\n";
          if(str1 <= 0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 2)//Blue Men vs. Barbarian
    {
      int pts1 = bl1.getStrPts();                                                                  
      int pts2 = b2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = bl1.getArmor();
      int arm2 = b2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = bl1.attack();
        int a2 = b2.attack();
        int d1 = bl1.defense(str1);
        int d2 = b2.defense();
        std::cout << "\nThe Blue men attack the Barbarian!\n";
        std::cout << "Blue Men attack with " << a1 << " versus Barbarian's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = b2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for the Barbarian.\n";
        if(str2 <= 0)
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nThe Barbarian attacks the Blue Men!\n";
          std::cout <<"The Barbarian attacks with " << a2 << " versus the Blue Men's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = bl1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Blue Men.\n";
          if(str1 <= 0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 3)//Blue Men vs. Blue men                                                       
    {
      int pts1 = bl1.getStrPts();                                                                  
      int pts2 = bl2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = bl1.getArmor();
      int arm2 = bl2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = bl1.attack();
        int a2 = bl2.attack();
        int d1 = bl1.defense(str1);
        int d2 = bl2.defense(str2);
        std::cout << "\nThe 1st Blue Men attack the 2nd Blue men!\n";
        std::cout << "1st Blue Men attack with " << a1 << " versus the 2nd Blue men's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = bl2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for the 2nd Blue men.\n";
        if(str2 <= 0)
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nThe 2nd Blue men attack the 1st Blue Men!\n";
          std::cout <<"The 2nd Blue men attack with " << a2 << " versus the 1st Blue Men's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = bl1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the 1st Blue Men.\n";
          if(str1 <=0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 4)//Blue Men vs. Medusa
    {
      int pts1 = bl1.getStrPts();                                                                 
      int pts2 = m2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = bl1.getArmor();
      int arm2 = m2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = bl1.attack();
        int a2 = m2.attack();
        int d1 = bl1.defense(str1);
        int d2 = m2.defense();
        std::cout << "\nThe Blue Men attack Medusa!\n";
        std::cout << "Blue Men attacks with " << a1 << " versus Medusa's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = m2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Medusa.\n";
        if(str2 <=0)
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nMedusa attacks the Blue Men!\n";
          std::cout <<"Medusa attacks with " << a2 << " versus the Blue Men's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = bl1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Blue Men.\n";
          if(str1 <= 0)
          {
            return false;
          }
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 5)//Blue Men vs. Harry Potter
    {
      int pts1 = bl1.getStrPts();                                                         
      int pts2 = h2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = bl1.getArmor();
      int arm2 = h2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = bl1.attack();
        int a2 = h2.attack();
        int d1 = bl1.defense(str1);
        int d2 = h2.defense();
        std::cout << "\nThe Blue Men attack Harry Potter!\n";
        std::cout << "Blue Men attack with " << a1 << " versus Harry's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = h2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Harry Potter.\n";
        if(str2 <= 0 )
        {
          return true;
        }
        if(str2 > 0)
        {
          std::cout <<"\nHarry Potter uses Expelliarmus against the Blue Men!\n";
          std::cout <<"Harry attacks with " << a2 << " versus the Blue Men's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = bl1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for the Blue Men.\n";
          if(str1 <= 0)
          {
            return false;
          }  
        } 
       round++;
     }while(str1 > 0 && str2 > 0);
   }
  return false;
} 
