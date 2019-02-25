//
// Created by student on 2019-02-25.
//

#include "queueNode.h"

qNode::qNode(int data) {
    this->data = data;
    next = NULL;
}

qNode::~qNode() {

}

void qNode::setData(int data) {
    this->data = data;
}

int qNode::getData() {
    return data;
}

void qNode::setNext(qNode *next) {
    this->next = next;
}

qNode* qNode::getNext() {
    return next;
}