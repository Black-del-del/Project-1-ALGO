#include <iostream>
using namespace std;

#include "doublylinkedlist.h"

int main()
{
    DoublyLinkedList Dll_1;

    Node n11(10);
    Node n12(20);
    Node n13(30);
    Node n14(40);
    Node n15(50);

    Dll_1.addNewNodeToFront(&n11);
    Dll_1.addNewNodeToBack(&n12);
    Dll_1.addNewNodeToFront(&n13);
    Dll_1.addNewNodeToBack(&n14);
    Dll_1.addNewNodeToFront(&n15);

    Dll_1.drawDoublyLinkedList();

    return 0;
}