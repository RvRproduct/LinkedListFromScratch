#include "Linked.h"

Linked::Linked()
{
}

Linked::~Linked()
{
}

// Display Method
void Linked::display(Linked *link) {
    while (link->set) {
        std::cout << link->value << " ";
        link = link->next;
    }
    std::cout << std::endl;
}

// getHead Method
void Linked::getHead(Linked *link) {
    std::cout << link->value << " ";
    std::cout << std::endl;
}

// getTail Method
void Linked::getTail(Linked *link) {
    Linked *tail;
    while (link->set) {
        tail = link;
        link = link->next;
    }
    if(!link->set)
        std::cout << tail->value << " ";
    std::cout << std::endl;
}

// newNode/adding to the Linked list method
void Linked::newNode(int val, Linked *link) {
    while (true) {
        if (link->set == false) {
            link->set = true;
            link->value = val;
            link->next = new Linked;
            break;
        } else {
            link = link->next;
        }
    }
}