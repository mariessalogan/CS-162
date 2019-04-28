//*****************************************************************
//Name: Mariessa Logan
//Date: 2/24/2018
//Description: This is the implementation file for the queue class
//****************************************************************
#include <iostream>
#include "queue.hpp"

Queue::Queue()
{
  this->head = NULL;
}

Queue::~Queue()
{
  QueueNode *ptr = head;//start at the head of the list
  while(ptr != NULL)
  {
    QueueNode *garbage = ptr;
    ptr = ptr->next;
    delete garbage;
  }
}

bool Queue::isEmpty()
{
  if(head == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Queue::addBack(int value)
{
  QueueNode *ptr = new QueueNode();
  ptr->val = value;
  if(head == NULL)
  {
    head = ptr; 
    head->prev = ptr;
    head->next = ptr;
  }
  else
  {
    ptr->prev = head->prev;
    head->prev->next = ptr;//Changes the tail's next ptr to the new node 
    ptr->next = head;
    head->prev = ptr;
  }
}

int Queue::getFront()
{
      return head->val;
}

void Queue::removeFront()
{
  if(head == NULL)
  {
    std::cout << "The queue is empty.\n";
  }
  else
  {
    QueueNode *garbage = head;
    head->next->prev = head->prev;
    head->prev->next = head->next;
    if(head->next == head)
    {
      head = NULL;
    } 
    else
    {
      head = head->next;
    }
    garbage->next = NULL;
    garbage->prev = NULL;
    delete garbage;
  }
}

void Queue::printQueue()
{
  if(head == NULL)
  {
    std::cout << "The queue is empty.\n";
  }
  else
  {
    QueueNode *ptr = head;
    std::cout << "Your list is: ";
    do{
      std::cout << ptr->val << " ";
      ptr = ptr->next;
    }while(ptr !=head);
  }
}

