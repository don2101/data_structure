//
// Created by student on 2019-02-20.
//

#ifndef APS_ARRAYLIST_H
#define APS_ARRAYLIST_H

#include <cstdio>
#include "listNode.h"

class ArrayList {
private :
    int *arrayList;
    int size;
    int top;

public :
    ArrayList(int size = 10);
    ~ArrayList();

    void insert(int number);
    void insert(int number, int position);
    int deleteItem(int position);
    int peek(int position);
    void resize(int newSize);
};

class LinkedList {
private:
    Node* head;
    int size;

public:
    LinkedList();
    ~LinkedList();

    void insert(int number);
    void insert(int number, int position);
    int deleteItem(int position);
    int deleteItem();
    int peek(int position);
    bool isEmpty();
};


#endif //APS_ARRAYLIST_H
