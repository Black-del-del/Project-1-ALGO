#include "Node.h"

Node::Node()
{
    prev = NULL;
    value = 0;
    next = NULL;
}

Node::Node(int v)
{
    prev = NULL;
    value = v;
    next = NULL;
}

Node::~Node()
{
}