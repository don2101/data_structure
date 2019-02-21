//
// Created by student on 2019-02-21.
//

#include "listNode.h"

Node::Node(int data) {
    this->data = data;
    this->next = NULL;
}

Node::~Node() {
    this->next = NULL;
}

void Node::setData(int data) {
    this->data = data;
}

int Node::getData() {
    return this->data;
}

void Node::setNext(Node *nextNode) {
    this->next = nextNode;
}

Node* Node::getNext() {
    return this->next;
}