//
// Created by student on 2019-02-22.
//

#include "Stack.h"

ArrayStack::ArrayStack(int size) {
    stack = new int[size];
    top = -1;
    this->size = size;
}

ArrayStack::~ArrayStack() {
    delete stack;
}

void ArrayStack::push(int data) {
    if(top == size - 1) {
        printf("Stack is full\n");

        return;
    }

    stack[++top] = data;
}

int ArrayStack::peek() {
    if(top == -1) {
        printf("Stack is empty\n");

        return -1;
    }

    return stack[top];
}

int ArrayStack::pop() {
    if(top == -1) {
        printf("Stack is empty\n");

        return -1;
    }

    return stack[top--];
}
