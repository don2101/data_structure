//
// Created by student on 2019-02-21.
//

#ifndef APS_DLISTNODE_H
#define APS_DLISTNODE_H

#include <cstdio>

class Dnode {
private:
    int data;
    Dnode *prev;
    Dnode *next;

public:
    Dnode(int data);
    ~Dnode();
    int getData();
    void setData(int data);
    Dnode* getNext();
    void setNext(Dnode* node);
    Dnode* getPrev();
    void setPrev(Dnode* node);
};

#endif //APS_DLISTNODE_H
