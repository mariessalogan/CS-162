//*****************************************************************************
//Name: Mariessa Logan
//Date: 2/16/18
//Description: The Implementation for the node class.
//****************************************************************************
#include <iostream>
#include "node.hpp"

NodeLink::NodeLink()
{
  head = NULL;
  tail = NULL;
}

NodeLink::~NodeLink()
{
  Node *ptr = head;//start at the head of the list
  while (ptr != NULL)
  {
    Node *garbage = ptr;
    ptr = ptr->next;
    delete garbage;
  }
}
void NodeLink::addHead(int num)
{
  Node *ptr = new Node();
  ptr->val = num;
  if(head == NULL)//in case the list is empty
  {
    head = ptr;
    tail = ptr;//so the tail points to the head.
  }
  else
  {
    ptr->next = head;//sets the new input's ptr to head
    head->prev = ptr;//changes the heads previous ptr to the new input
    head = ptr;//set head to current input 
  }
}                                                                       

void NodeLink::addTail(int num)
{
  Node *ptr = new Node();
  ptr->val = num;
  if(head == NULL)//in case the list is empty
  {
    head = ptr;
    tail = ptr;//so the tail points to the head.
  }
  else
  {
    ptr->prev = tail;//sets the new input's ptr to tail for previous
    tail->next = ptr;//changes the tail's next ptr to the new input
    tail = ptr;//set tail to current input 
  }
}   

void NodeLink::printRev()                             
{
  if(tail == NULL)
  {
    std::cout << "There is nothing in the list\n";
  } 
  else{ 
    Node *ptr = tail; //start at the tail
    std::cout << "The list in reverse is: ";
    while(ptr)//while there is a ptr keep printing
    {
      std::cout << ptr->val <<" ";
      if(ptr == head)
      {
        break;
      }
      ptr = ptr->prev;
    }
    std::cout <<"\n";
  }
}
void NodeLink::trav()                                                                     
{
  if(head == NULL)
  {
    std::cout << "The list is empty.\n";
  }
  else{
    Node *ptr = head; //start at the head
    std::cout << "The list is: ";
    do//while there is a ptr keep printing
    {
      std::cout << ptr->val <<" ";
      if(ptr == tail)
      {
        break;
      } 
      ptr = ptr->next;
    }while(ptr != NULL);
    std::cout <<"\n";
  }
}

void NodeLink::delHead()                            
{
  Node *ptr = head; //Point to the head of the list
  if(ptr != NULL) //make sure list isn't empty
  {
    head = ptr->next;
    delete ptr;
  }
  else{
    std::cout << "The list is empty.\n";
  }
}   

void NodeLink::delTail()                                                                      
{
  Node *ptr = tail; //Point to the tail of the list
  if(ptr != NULL) //make sure list isn't empty
  {
    tail = ptr->prev;
    delete ptr;
  }
  else{
    std::cout << "The list is empty.\n";
  }
}   
