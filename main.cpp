#include <iostream>
#include "Linked.h"

using namespace std;

int main(){
    Linked *linkedList = new Linked();
    linkedList->newNode(10, linkedList);
    linkedList->newNode(20, linkedList);
    linkedList->newNode(30, linkedList);
    
    linkedList->display(linkedList);
    linkedList->displayHead(linkedList);
    linkedList->displayTail(linkedList);
    
    linkedList->newNodeBegin(50, linkedList);
    linkedList->newNodeBegin(45, linkedList);
    linkedList->newNode(25, linkedList);
    linkedList->displayHead(linkedList);
    linkedList->display(linkedList);
    
    linkedList->newNodeInsert(18, 3, linkedList);
    linkedList->display(linkedList);
    linkedList->nodeRemove(2, linkedList);
    linkedList->display(linkedList);
    
    
    // Be careful with zero since that is the head, which was the original address
    // since the linkedList started here in main it gets messy, the function will display
    // the correct output, but after that you won't be able to manipulate the LinkedList
    // anymore and after this call, delete should be called here.
    linkedList->nodeRemove(0, linkedList);
    delete linkedList;

    cout << endl;
    return 0;
}
