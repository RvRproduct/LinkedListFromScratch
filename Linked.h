#ifndef LINKED_H
#define LINKED_H
#include <iostream>


class Linked
{
private:
    bool set = false;
    int value;
    Linked *next;
    
public:
    Linked();
    ~Linked();
    
    void newNode(int val, Linked *link);
    void display(Linked *link);
    void getTail(Linked *link);
    void getHead(Linked *link);

};

#endif // LINKED_H
