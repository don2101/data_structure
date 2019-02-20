//
// Created by student on 2019-02-20.
//

#ifndef APS_ARRAYLIST_H
#define APS_ARRAYLIST_H

class ArrayList {
private :
    int *arrayList;
    int size;
    int top;

public :
    ArrayList(int size = 10);
    ~ArrayList();

    bool isEmpty();
    void insert(int number);
    void insert(int number, int position);
    int deleteItem(int position);
    int peek(int position);
    void resize(int newSize);
};


#endif //APS_ARRAYLIST_H
