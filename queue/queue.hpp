//***********************************************************************
//Name: Mariessa Logan
//Date: 2/24/2018
//Description: This is the declaration for the Queue class.
//************************************************************************
#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue
{
  protected:
    struct QueueNode
    {
      int val;//value of node
      QueueNode *next; //pointer to next value
      QueueNode *prev;//pointer to previous value
    }; 
 public:
  Queue();
  ~Queue();
  bool isEmpty();
  void addBack(int val);
  int getFront();
  void removeFront();
  void printQueue();
 private:
   QueueNode *head;
};
#endif
