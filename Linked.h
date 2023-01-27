#ifndef LINKED_H
#define LINKED_H
#include <iostream>


class Linked
{
private:
    int index = -1;
    bool set = false;
    int value;
    Linked *next;
    
public:
    Linked();
    ~Linked();
    
    void sortIndex(Linked *link);
    bool validIndex(int ind);
    
    void newNode(int val, Linked *link);
    void newNodeBegin(int val, Linked *link);
    void newNodeInsert(int val, int ind, Linked *link);
    void nodeRemove(int ind, Linked *link);
    
    
    void display(Linked *link);
    void displayTail(Linked *link);
    void displayHead(Linked *link);

};

#endif // LINKED_H
