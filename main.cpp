#include <iostream>
#include "Linked.h"

using namespace std;

int main(){
    Linked linkedList;
    linkedList.newNode(10, &linkedList);
    linkedList.newNode(20, &linkedList);
    linkedList.newNode(30, &linkedList);
    linkedList.display(&linkedList);
    linkedList.getHead(&linkedList);
    linkedList.getTail(&linkedList);
    cout << endl;
    return 0;
}