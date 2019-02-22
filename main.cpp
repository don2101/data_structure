#include <iostream>
#include "List/List.h"

using namespace std;

int main(void) {

    /************** Array List **************/
//    ArrayList *arrayList = new ArrayList(5);
//
//    arrayList->insert(1);
//    arrayList->insert(2);
//    arrayList->insert(3);
//    arrayList->insert(4);
//    arrayList->insert(5);
//    arrayList->insert(6);
//    arrayList->insert(7);
//    arrayList->insert(111, 6);
//    arrayList->insert(8);
//    arrayList->insert(9);
//    arrayList->insert(10);
//    arrayList->insert(222, 10);
//
//    for(int i = 0; i < 12; ++i) {
//        printf("%d ", arrayList->peek(i));
//    }
//    printf("\n");
//
//    arrayList->deleteItem(11);
//    arrayList->deleteItem(10);
//    arrayList->deleteItem(9);
//    arrayList->deleteItem(8);
//    arrayList->deleteItem(7);
//
//
//    for(int i = 0; i < 7; ++i) {
//        printf("%d ", arrayList->peek(i));
//    }
//    printf("\n");
    /************** Array List **************/

    /************** Linked List **************/
//    LinkedList *linkedList = new LinkedList();
//
//    linkedList->insert(1);
//    linkedList->insert(2);
//    linkedList->insert(3);
//    linkedList->insert(4);
//    linkedList->insert(5);
//    linkedList->insert(111, 2);
//    linkedList->insert(6);
//    linkedList->insert(7);
//    linkedList->insert(8);
//    linkedList->insert(9);
//    linkedList->insert(10);
//    linkedList->insert(222, 7);
//
//
//    for(int i = 0; i < 12; ++i) {
//        printf("%d ", linkedList->peek(i));
//    }
//
//    printf("\n");
//
//
//    linkedList->deleteItem(2);
//
//    linkedList->deleteItem(6);
//    linkedList->deleteItem();
//
//    for(int i = 0; i < 9; ++i) {
//        printf("%d ", linkedList->peek(i));
//    }

    /************** Linked List **************/

    /************** Doubly Linked List **************/
    DoublyList *doublyList = new DoublyList();

    doublyList->insertFront(1);
    doublyList->insertFront(2);
    doublyList->insertFront(3);
    doublyList->insertFront(4);
    doublyList->insertFront(5);
    doublyList->insertBack(6);
    doublyList->insertBack(7);
    doublyList->insertBack(8);
    doublyList->insertBack(9);
    doublyList->insertBack(10);

    for(int i = 0; i < 5; ++i) {
        printf("%d ", doublyList->deleteFront());
    }
    printf("\n");

    for(int i = 0; i < 5; ++i) {
        printf("%d ", doublyList->deleteBack());
    }


    /************** Doubly Linked List **************/


    return 0;
}