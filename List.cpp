//
// Created by student on 2019-02-20.
//

#include "List.h"

ArrayList::ArrayList(int size) {
    this->size = size;
    this->arrayList = new int[this->size];
    this->top = -1;
}

ArrayList::~ArrayList() {
    delete this->arrayList;
}

void ArrayList::insert(int number) {
    if(isEmpty()) {
        resize(this->size);
    }

    this->arrayList[++top] = number;
}

void ArrayList::insert(int number, int position) {
    
}