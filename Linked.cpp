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
        std::cout <<  "Index: " << link->index << "-> "<< link->value << " " ;
        link = link->next;
    }
    std::cout << std::endl;
}

// displayHead Method
void Linked::displayHead(Linked *link) {
    std::cout << link->value << " ";
    std::cout << std::endl;
}

// displayTail Method
void Linked::displayTail(Linked *link) {
    Linked *tail;
    while (link->set) {
        tail = link;
        link = link->next;
    }
    if(!link->set)
        std::cout << tail->value << " ";
    std::cout << std::endl;
}

// sortIndex method
void Linked::sortIndex(Linked *link) {
    int place = 0;
    while (true) {
        if (link->set == true) {
            link->index = place;
            place++;
            link = link->next;
        } else {
            break;
        }
    }
}

// newNode/adding to the Linked list method (appending)
void Linked::newNode(int val, Linked *link) {
    Linked *copyLink = link;
    while (true) {
        if (link->set == false) {
            link->set = true;
            link->value = val;
            link->next = new Linked();
            break;
        } else {
            link = link->next;
        }
    }
    
    sortIndex(copyLink);
}

// newNode/adding prepending method
void Linked::newNodeBegin(int val, Linked *link) {
    if (link->set) {
        Linked *newLink = new Linked();
        newLink->set = true;
        newLink->value = link->value;
        newLink->next = link->next;
        link->value = val;
        link->next = newLink;
    } else {
        link->set = true;
        link->value = val;
        link->next = new Linked();
    }
    
    sortIndex(link);
}

// insertNode method
void Linked::newNodeInsert(int val, int ind, Linked *link) {
    Linked *copyLink = link;
    Linked *shiftLink = new Linked();
    while (true) {
        if (link->index == ind) {
            shiftLink->set = true;
            shiftLink->value = link->value;
            shiftLink->next = link->next;
            link->value = val;
            link->next = shiftLink;
            break;
        } else {
            link = link->next;
        }
    }
    
    sortIndex(copyLink);
}

// check valid index method
bool Linked::validIndex(int ind) {
    if (ind < 0) {
        std::cout << "Must be a valid index" << std::endl;
        return true;
    } else {
        return false;
    }
}

// remove node from Linked List method
void Linked::nodeRemove(int ind, Linked *link) {
    Linked *copyLink = link;
    Linked *shiftLink = new Linked();
    
    while (true) {
        if (validIndex(ind))
            break;
        
        if (ind == 0) {
            link = link->next;
            break;
        }
        
        if (link->index == ind) {
            shiftLink = link->next;
            delete link;
            break;
        } else {
            link = link->next;
        }
    }
    while (true) {
        if (validIndex(ind))
            break;
        
        if (ind == 0)
            break;
        
        if (copyLink->next->set == false) {
            copyLink->next = shiftLink;
            break;
        } else {
            copyLink = copyLink->next;
        }
    }
    
    if (ind == 0) {
        sortIndex(link);
        display(link);
    } else {
        sortIndex(copyLink);
    }
    
}
