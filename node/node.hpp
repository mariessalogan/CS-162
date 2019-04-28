//**************************************************************************
//Name: Mariessa Logan
//Date: 2/16/2018
//Description: The declaration for the NODE class.
//**************************************************************************
#ifndef NODE_HPP
#define NODE_HPP

class NodeLink
{
  protected:
    struct Node
    {
      int val;
      Node *next;
      Node *prev;
    };
  public:
    NodeLink();
    ~NodeLink();
    void addHead(int num);
    void addTail(int num);
    void printRev();
    void delHead();
    void delTail();
    void trav();
  private:
    Node *head;
    Node *tail;
};
#endif 
