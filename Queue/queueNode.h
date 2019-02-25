//
// Created by student on 2019-02-25.
//

#ifndef APS_QUEUENODE_H
#define APS_QUEUENODE_H

#include <cstdio>

class qNode {
private:
    int data;
    qNode *next;

public:
    qNode(int data);
    ~qNode();
    void setData(int data);
    int getData();
    void setNext(qNode *next);
    qNode* getNext();
};

#endif //APS_QUEUENODE_H
