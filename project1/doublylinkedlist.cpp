#include "doublylinkedlist.h"

DoublyLinkedList::DoublyLinkedList()
{
    head = NULL;
    tail = NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
}

void DoublyLinkedList::addNewNodeToFront(Node* newNode)
{
    if (head == NULL && tail == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void DoublyLinkedList::addNewNodeToBack(Node* newNode)
{
    if (head == NULL && tail == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

Node* DoublyLinkedList::removeNodeFromFront()
{
    Node* tempNode;

    tempNode = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    return tempNode;
}

void DoublyLinkedList::removeNodeFromBack()
{
    if (tail == NULL)
        return;

    Node* temp = tail;

    tail = tail->prev;

    if (tail != NULL)
        tail->next = NULL;
}

void DoublyLinkedList::displayDoublyLinkedList()
{
    Node* tempNode = head;

    while (tempNode != NULL)
    {
        cout << tempNode->value << " ";
        tempNode = tempNode->next;
    }

    cout << endl;
}

void DoublyLinkedList::drawDoublyLinkedList()
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << "Address: " << temp << endl;

        if (temp->prev == NULL)
            cout << "*prev: NULL (0)" << endl;
        else
            cout << "*prev: " << temp->prev << endl;

        cout << "value: " << temp->value << endl;

        if (temp->next == NULL)
            cout << "*next: NULL (0)" << endl;
        else
            cout << "*next: " << temp->next << endl;

        cout << endl;

        temp = temp->next;
    }
}

bool DoublyLinkedList::isPalindrome()
{
    Node* left = head;
    Node* right = tail;

    while (left != NULL && right != NULL)
    {
        if (left->value != right->value)
            return false;

        if (left == right || left->next == right)
            break;

        left = left->next;
        right = right->prev;
    }

    return true;
}

void DoublyLinkedList::split(int n)
{
    if (n < 1)
    {
        cout << "cannot be processed." << endl;
        return;
    }

    int size = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    if (n > size || size % n != 0)
    {
        cout << "cannot be processed." << endl;
        return;
    }

    int partSize = size / n;
    temp = head;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < partSize; j++)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }

        cout << endl;
    }
}

void DoublyLinkedList::addNewNodeBeforeTargetNode(Node* newNode, int val)
{
    Node* temp = head;

    while (temp != NULL)
    {
        if (temp->value == val)
        {
            if (temp == head)
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            else
            {
                newNode->next = temp;
                newNode->prev = temp->prev;

                temp->prev->next = newNode;
                temp->prev = newNode;
            }

            return;
        }

        temp = temp->next;
    }
}