#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class DoublyLinkedList {

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void addNewNodeToFront(Node* newNode);
    void addNewNodeToBack(Node* newNode);

    Node* removeNodeFromFront();
    void removeNodeFromBack();

    void displayDoublyLinkedList();
    void drawDoublyLinkedList();

    bool isPalindrome();
    void split(int n);

    void addNewNodeBeforeTargetNode(Node* newNode, int val);

private:
    Node* head;
    Node* tail;
};

#endif