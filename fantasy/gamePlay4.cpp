//****************************************************************************i                                                                         
//Name: Mariessa Logan
//Date: 2/13/2018
//Description: This will call the character functions and make them fight!
//Medusa!
//****************************************************************************
#include <iostream>
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blue.hpp"
#include "medusa.hpp"
#include "harry.hpp"
#include "gamePlay.hpp"

void gamePlay4(int c2)
{
  Vampire v2;
  Barbarian b2;
  Blue bl2;
  Medusa m1;
  Medusa m2;
  Harry h2;
  int round = 1;
  std::cout << "\n**************************************************************************************************************************\n";
    if(c2 == 1)//Medusa vs. Vampire combat
    {
      int pts1 = m1.getStrPts();                                                          
      int pts2 = v2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = m1.getArmor();
      int arm2 = v2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = m1.attack();
        int a2 = v2.attack();
        int d1 = m1.defense();
        int d2 = v2.defense();
        std::cout << "\nMedusa attacks Vampire!\n";
        std::cout << "Medusa attacks with " << a1 << " versus Vampire's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = v2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Vampire.\n";
        if(str2 > 0)
        {
          std::cout <<"\nVampire attacks Medusa!\n";
          std::cout <<"Vampire attacks with " << a2 << " versus Medusa's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = m1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for Medusa.\n";
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 2)//Medusa vs. Barbarian
    {
      int pts1 = m1.getStrPts();                                                                  
      int pts2 = b2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = m1.getArmor();
      int arm2 = b2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = m1.attack();
        int a2 = b2.attack();
        int d1 = m1.defense();
        int d2 = b2.defense();
        std::cout << "\nMedusa attacks the Barbarian!\n";
        std::cout << "Medusa attacks with " << a1 << " versus Barbarian's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = b2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for the Barbarian.\n";
        if(str2 > 0)
        {
          std::cout <<"\nThe Barbarian attacks Medusa!\n";
          std::cout <<"The Barbarian attacks with " << a2 << " versus Medusa's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = m1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for Medusa.\n";
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 3)//Medusa vs. Blue men                                                         
    {
      int pts1 = m1.getStrPts();                                                                  
      int pts2 = bl2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = m1.getArmor();
      int arm2 = bl2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = m1.attack();
        int a2 = bl2.attack();
        int d1 = m1.defense();
        int d2 = bl2.defense(str2);
        std::cout << "\nMedusa attacks the Blue men!\n";
        std::cout << "Medusa attacks with " << a1 << " versus Blue men's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = bl2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for the Blue men.\n";
        if(str2 > 0)
        {
          std::cout <<"\nThe Blue men attack Medusa!\n";
          std::cout <<"The Blue men attack with " << a2 << " versus the Medusa's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = m1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for Medusa.\n";
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 4)//Medusa vs. Medusa
    {
      int pts1 = m1.getStrPts();                                                              
      int pts2 = m2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = m1.getArmor();
      int arm2 = m2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = m1.attack();
        int a2 = m2.attack();
        int d1 = m1.defense();
        int d2 = m2.defense();
        std::cout << "\nMedusa 1 attacks Medusa 2!\n";
        std::cout << "Medusa 1 attacks with " << a1 << " versus Medusa 2's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = m2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Medusa 2.\n";
        if(str2 > 0)
        {
          std::cout <<"\nMedusa 2 attacks the Medusa 1!\n";
          std::cout <<"Medusa 2 attacks with " << a2 << " versus the Medusa 1's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = m1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for Medusa 1.\n";
        } 
       round++;
      }while(str1 > 0 && str2 > 0 ); 
    }
    if(c2 == 5)//Medusa vs. Harry Potter
    {
      int pts1 = m1.getStrPts();                                                         
      int pts2 = h2.getStrPts(); 
      int &str1 = pts1;
      int &str2 = pts2;
      int arm1 = m1.getArmor();
      int arm2 = h2.getArmor();
      do{
        std::cout << "\n\n                        ROUND  " << round << "\n ";
        int a1 = m1.attack();
        int a2 = h2.attack();
        int d1 = m1.defense();
        int d2 = h2.defense();
        std::cout << "\nMedusa attacks Harry Potter!\n";
        std::cout << "Medusa attacks with " << a1 << " versus Harry's " << arm2;
        std::cout <<" armor and " << d2 << " defense.\n";
        str2 = h2.calcStrPts(a1, d2, a2, str2);
        std::cout << str2 << " strength points remaining for Harry Potter.\n";
        if(str2 > 0)
        {
          std::cout <<"\nHarry Potter uses Expelliarmus against Medusa!\n";
          std::cout <<"Harry attacks with " << a2 << " versus Medusa's " << arm1;
          std::cout <<" armor and " << d1 << " defense.\n";
          str1 = m1.calcStrPts(a2, d1, a1, str1);
          std::cout << str1 <<" strength points remaining for Medusa.\n";
        } 
       round++;
     }while(str1 > 0 && str2 > 0);
   }
} 
