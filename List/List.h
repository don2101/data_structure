//
// Created by student on 2019-02-20.
//

#ifndef APS_ARRAYLIST_H
#define APS_ARRAYLIST_H

#include <cstdio>
#include "listNode.h"
#include "dListNode.h"

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

class DoublyList {
private:
    Dnode* head;
    Dnode* tail;
    int size;

public:
    DoublyList();
    ~DoublyList();

    void insertFront(int number);
    void insertBack(int number);
    int deleteFront();
    int deleteBack();
    int peekFront();
    int peekBack();
    bool isEmpty();
};

#endif //APS_ARRAYLIST_H
