// University of Arkansas at Little Rock
// Department of Computer Science
// CPSI 28003 - 01 and 9S1: Algorithms
// Spring 2026
// Project 1: Doubly Linked List
// Due Date: March 10, 2026, Tuesday
// Name:
// ID (Last 4 Digits):
// Description of the Program (2-3 sentences):
// Date Written:
// Date Revised:
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