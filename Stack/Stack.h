//
// Created by student on 2019-02-22.
//

#ifndef APS_STACK_H
#define APS_STACK_H

#include <cstdio>

class ArrayStack{
private:
    int *stack;
    int top;
    int size;

public:
    ArrayStack(int size = 10);
    ~ArrayStack();

    void push(int data);
    int peek();
    int pop();
};

#endif //APS_STACK_H
