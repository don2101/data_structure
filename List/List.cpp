//
// Created by student on 2019-02-20.
//

#include "List.h"


/************** Array List **************/
ArrayList::ArrayList(int size) {
    this->size = size;
    this->arrayList = new int[this->size];
    this->top = -1;
}

ArrayList::~ArrayList() {
    delete this->arrayList;
}

void ArrayList::insert(int number) {
    if(this->top*2 > this->size) {
        resize(this->size*2);
    }

    this->arrayList[++top] = number;
}

void ArrayList::insert(int number, int position) {
    if(position > top) {
        printf("Out of range\n");
        return;
    }

    if(this->top*2 > this->size) {
        resize(this->size*2);
    }

    for(int i = this->top; i >= position; --i) {
        this->arrayList[top+1] = this->arrayList[top];
    }

    this->arrayList[position] = number;

    this->top++;
}

int ArrayList::deleteItem(int position) {
    if(position > top) {
        printf("Out of range\n");
        return -1;
    }
    if(this->size/2 > this->top) {
        resize(size/2);
    }

    int ret = this->arrayList[position];

    for(int i = position; i < this->top; ++i) {
        this->arrayList[i] = this->arrayList[i+1];
    }

    this->top--;

    return ret;
}

int ArrayList::peek(int position) {
    if(position > top) {
        printf("Out of range\n");
        return -1;
    }

    int ret = this->arrayList[position];

    return ret;
}

void ArrayList::resize(int newSize) {
    int *newArray = new int[newSize];

    for(int i = 0; i <= top; ++i) {
        newArray[i] = this->arrayList[i];
    }

    delete this->arrayList;
    this-> size = newSize;

    this->arrayList = newArray;
}
/************** Array List **************/


/************** Linked List **************/
LinkedList::LinkedList() {
    head = new Node(-1);
    head->setNext(NULL);
    size = 0;
}

LinkedList::~LinkedList() {
    Node *node = head;

    while(node->getNext() != NULL) {
        Node *temp = node->getNext();
        node->setNext(temp->getNext());

        delete temp;
    }

    delete head;
}

void LinkedList::insertFirst(int number) {
    Node *newNode = new Node(number);

    if(!isEmpty()) {
        newNode->setNext(head->getNext());
    }

    head->setNext(newNode);
    this->size++;
}

void LinkedList::insertLast(int number) {
    Node *newNode = new Node(number);

    Node *searchNode = head;
    while(searchNode->getNext() != NULL) {
        searchNode = searchNode->getNext();
    }

    searchNode->setNext(newNode);
    this->size++;
}

void LinkedList::insert(int number) {
    Node *newNode = new Node(number);
    newNode->setNext(NULL);

    Node *node = head;
    while(node->getNext() != NULL) {
        node = node->getNext();
    }

    node->setNext(newNode);
    this->size++;
}

void LinkedList::insert(int number, int position) {
    if(position > size) {
        printf("Out of range\n");

        return;
    }

    Node *newNode = new Node(number);
    newNode->setNext(NULL);

    Node *node = head;
    for(int i = 0; i < position; ++i) {
        node = node->getNext();
    }

    newNode->setNext(node->getNext());
    node->setNext(newNode);
    this->size++;
}

int LinkedList::deleteItem() {
    if(isEmpty()) {
        printf("List is empty");

        return -1;
    }

    Node *node = head->getNext();
    while(node->getNext()->getNext() != NULL) {
        node = node->getNext();
    }

    Node* temp = node->getNext();
    int ret = temp->getData();
    node->setNext(temp->getNext());

    delete temp;
    this->size--;

    return ret;
}

int LinkedList::deleteItem(int position) {
    if(isEmpty()) {
        printf("List is empty\n");

        return -1;
    }

    if(position >= size) {
        printf("Out of range\n");

        return -1;
    }

    Node *node = head;
    for(int i = 0; i < position; ++i) {
        node = node->getNext();
    }

    Node *temp = node->getNext();
    node->setNext(temp->getNext());

    int ret = temp->getData();

    delete temp;
    this->size--;

    return ret;
}

int LinkedList::peek(int position) {
    if(isEmpty()) {
        printf("List is empty\n");

        return -1;
    }

    if(position + 1 > size) {
        printf("Out of range\n");

        return -1;
    }

    Node *node = head->getNext();
    for(int i = 0; i < position; ++i) {
        node = node->getNext();
    }

    int ret = node->getData();

    return ret;
}

bool LinkedList::isEmpty() {
    if(size == 0) return true;

    return false;
}
/************** Linked List **************/


/************** Doubly List **************/
DoublyList::DoublyList() {
    head = new Dnode(-1);
    tail = new Dnode(-1);
    head->setNext(tail);
    tail->setPrev(head);

    size = 0;
}

DoublyList::~DoublyList() {
    Dnode *dnode = head;

    while(head->getNext() != tail) {
        dnode = head->getNext();
        head->setNext(dnode->getNext());

        delete dnode;
    }
}

bool DoublyList::isEmpty() {
    if(size == 0) return true;
    return false;
}

void DoublyList::insertFront(int number) {
    Dnode *newNode = new Dnode(number);

    newNode->setNext(head->getNext());
    newNode->setPrev(head);
    head->getNext()->setPrev(newNode);
    head->setNext(newNode);
    this->size++;
}

void DoublyList::insertBack(int number) {
    Dnode *newNode = new Dnode(number);

    newNode->setPrev(tail->getPrev());
    newNode->setNext(tail);
    tail->getPrev()->setNext(newNode);
    tail->setPrev(newNode);
    this->size++;
}

int DoublyList::deleteFront() {
    if(isEmpty()) {
        printf("List is empty\n");
        return -1;
    }

    Dnode *delNode = head->getNext();
    int ret = delNode->getData();

    delNode->getNext()->setPrev(head);
    head->setNext(delNode->getNext());
    delNode->setNext(NULL);
    delNode->setPrev(NULL);

    delete delNode;
    size--;

    return ret;
}

int DoublyList::deleteBack() {
    if(isEmpty()) {
        printf("List is empty\n");
        return -1;
    }

    Dnode *delNode = tail->getPrev();
    int ret = delNode->getData();

    delNode->getPrev()->setNext(tail);
    tail->setPrev(delNode->getPrev());
    delNode->setNext(NULL);
    delNode->setPrev(NULL);

    delete delNode;
    size--;

    return ret;
}

int DoublyList::peekFront() {
    if(isEmpty()) {
        printf("List is empty\n");
        return -1;
    }

    return head->getNext()->getData();
}

int DoublyList::peekBack() {
    if(isEmpty()) {
        printf("List is empty\n");
        return -1;
    }

    return tail->getPrev()->getData();
}

/************** Doubly List **************/

