//
// Created by student on 2019-02-21.
//

#ifndef APS_LISTNODE_H
#define APS_LISTNODE_H

#include <cstdio>

class Node {
private:
    int data;
    Node *next;

public:
    Node(int data);
    ~Node();
    void setData(int data);
    int getData();
    void setNext(Node *nextNode);
    Node* getNext();
};

#endif //APS_LISTNODE_H
