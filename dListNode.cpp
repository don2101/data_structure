//
// Created by student on 2019-02-21.
//

#include "dListNode.h"

Dnode::Dnode(int data) {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
}

Dnode::~Dnode() {
    this->prev = NULL;
    this->next = NULL;
}

void Dnode::setData(int data) {
    this->data = data;
}

int Dnode::getData() {
    return this->data;
}

void Dnode::setPrev(Dnode *node) {
    this->prev = node;
}

Dnode* Dnode::getPrev() {
    return this->prev;
}

void Dnode::setNext(Dnode *node) {
    this->next = next;
}

Dnode* Dnode::getNext() {
    return this->next;
}