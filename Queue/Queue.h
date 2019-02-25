//
// Created by student on 2019-02-25.
//

#ifndef APS_QUEUE_H
#define APS_QUEUE_H

#include <cstdio>
#include "queueNode.h"

class ArrayQueue {
private:
    int *arrayQueue;
    int size;
    int rear;
    int front;

public:
    ArrayQueue(int size);
    ~ArrayQueue();
    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int peek();

};

class LinkedQueue {
private:
    qNode* rear;
    qNode* front;

public:
    LinkedQueue();
    ~LinkedQueue();
    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    int peek();
};

class PriorityQueue {
private:
    qNode* rear;
    qNode* front;

public:
    PriorityQueue();
    ~PriorityQueue();
    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    int peek();
};

#endif //APS_QUEUE_H
