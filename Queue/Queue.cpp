//
// Created by student on 2019-02-25.
//

#include "Queue.h"
ArrayQueue::ArrayQueue(int size) {
    arrayQueue = new int[size];
    front = 0;
    rear = 0;
    this->size = size;
}

ArrayQueue::~ArrayQueue() {
    delete arrayQueue;
}

void ArrayQueue::enqueue(int data) {
    if(isFull()) {
        printf("Queue is full\n");

        return;
    }

    arrayQueue[(++rear) % size] = data;
    rear %= size;
}

int ArrayQueue::dequeue() {
    if(isEmpty()) {
        printf("Queue is empty\n");

        return -1;
    }

    int ret = arrayQueue[(++front) % size];
    front %= size;
    return ret;
}

int ArrayQueue::peek() {
    if(isEmpty()) {
        printf("No data in queue\n");

        return -1;
    }

    return arrayQueue[front+1];
}

bool ArrayQueue::isEmpty() {
    if(rear == front) return true;

    return false;
}

bool ArrayQueue::isFull() {
    if((rear+1) % size == front) return true;

    return false;
}


LinkedQueue::LinkedQueue() {
    rear = new qNode(-1);
    front = new qNode(-1);

    front->setNext(rear);
    rear->setNext(front);
}

LinkedQueue::~LinkedQueue() {
    while(front->getNext() != rear) {
        dequeue();
    }

    delete front;
    delete rear;
}

void LinkedQueue::enqueue(int data) {
    qNode* newNode = new qNode(data);

    newNode->setNext(rear);
    rear->getNext()->setNext(newNode);
    rear->setNext(newNode);
}

int LinkedQueue::dequeue() {
    if(isEmpty()) {
        printf("Queue is empty\n");

        return -1;
    }

    qNode* delQueue = front->getNext();
    int ret = delQueue->getData();

    front->setNext(delQueue->getNext());
    delete delQueue;

    return ret;
}

bool LinkedQueue::isEmpty() {
    if(front->getNext() == rear) return true;

    return false;
}

int LinkedQueue::peek() {
    if(isEmpty()) {
        printf("Queue is empty\n");

        return -1;
    }

    int ret = front->getNext()->getData();

    return ret;
}

PriorityQueue::PriorityQueue() {
    front = new qNode(99999);
    rear = new qNode(99999);

    front->setNext(rear);
    rear->setNext(front);
}

PriorityQueue::~PriorityQueue() {
    while(front->getNext() != rear) {
        dequeue();
    }

    delete front;
    delete rear;
}

void PriorityQueue::enqueue(int data) {
    qNode *newNode = new qNode(data);
    qNode *searchNode = front;

    while(newNode->getData() > searchNode->getNext()->getData()) {
        searchNode = searchNode->getNext();
    }

    newNode->setNext(searchNode->getNext());
    searchNode->setNext(newNode);
}

int PriorityQueue::dequeue() {
    if(isEmpty()) {
        printf("Queue is empty");
        return -1;
    }

    qNode *delNode = front->getNext();
    int ret = delNode->getData();

    front->setNext(delNode->getNext());
    delete delNode;

    return ret;
}

bool PriorityQueue::isEmpty() {
    if(front->getNext() == rear) return true;

    return false;
}

int PriorityQueue::peek() {
    if(isEmpty()) {
        printf("Queue is empty");
        return -1;
    }

    int ret = front->getNext()->getData();

    return ret;
}