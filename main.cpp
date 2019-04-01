#include <iostream>
#include "List/List.h"
#include "Stack/Stack.h"
#include "Queue/Queue.h"
#include "Sort/Sort.h"
#include "Graph/Graph.h"
#include "DisjointSet/DisjointSet.h"

using namespace std;

void test_ArrayList() {
    /************** Array List **************/
    ArrayList *arrayList = new ArrayList(5);

    arrayList->insert(1);
    arrayList->insert(2);
    arrayList->insert(3);
    arrayList->insert(4);
    arrayList->insert(5);
    arrayList->insert(6);
    arrayList->insert(7);
    arrayList->insert(111, 6);
    arrayList->insert(8);
    arrayList->insert(9);
    arrayList->insert(10);
    arrayList->insert(222, 10);

    for(int i = 0; i < 12; ++i) {
        printf("%d ", arrayList->peek(i));
    }
    printf("\n");

    arrayList->deleteItem(11);
    arrayList->deleteItem(10);
    arrayList->deleteItem(9);
    arrayList->deleteItem(8);
    arrayList->deleteItem(7);


    for(int i = 0; i < 7; ++i) {
        printf("%d ", arrayList->peek(i));
    }
    printf("\n");
    /************** Array List **************/
}

void test_LinkedList() {
    /************** Linked List **************/
    LinkedList *linkedList = new LinkedList();

    linkedList->insert(1);
    linkedList->insert(2);
    linkedList->insert(3);
    linkedList->insert(4);
    linkedList->insert(5);
    linkedList->insert(111, 2);
    linkedList->insert(6);
    linkedList->insert(7);
    linkedList->insert(8);
    linkedList->insert(9);
    linkedList->insert(10);
    linkedList->insert(222, 7);


    for(int i = 0; i < 12; ++i) {
        printf("%d ", linkedList->peek(i));
    }

    printf("\n");


    linkedList->deleteItem(2);

    linkedList->deleteItem(6);
    linkedList->deleteItem();

    for(int i = 0; i < 9; ++i) {
        printf("%d ", linkedList->peek(i));
    }

    /************** Linked List **************/
}

void test_DoublyLinkedList() {
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
}

void test_ArrayStack() {
    /************** Array Stack **************/

    ArrayStack *arrayStack = new ArrayStack();

    arrayStack->push(1);
    arrayStack->push(2);
    arrayStack->push(3);
    arrayStack->push(4);
    arrayStack->push(5);
    arrayStack->push(6);
    arrayStack->push(7);
    arrayStack->push(8);
    arrayStack->push(9);
    arrayStack->push(10);
    arrayStack->push(11);
    arrayStack->push(12);

    printf("%d ", arrayStack->peek());
    printf("%d ", arrayStack->peek());
    printf("%d ", arrayStack->pop());
    printf("%d ", arrayStack->pop());
    printf("%d ", arrayStack->pop());
    printf("%d ", arrayStack->pop());
    printf("%d ", arrayStack->pop());

    /************** Array Stack **************/
}

void test_ArrayQueue() {
    ArrayQueue *arrayQueue = new ArrayQueue(6);

    arrayQueue->enqueue(1);
    arrayQueue->enqueue(2);
    arrayQueue->enqueue(3);
    arrayQueue->enqueue(4);
    arrayQueue->enqueue(5);
    arrayQueue->enqueue(6);
    arrayQueue->enqueue(7);

    printf("%d ", arrayQueue->dequeue());
    printf("%d ", arrayQueue->dequeue());
    printf("%d ", arrayQueue->dequeue());
    printf("%d ", arrayQueue->dequeue());
    printf("%d ", arrayQueue->dequeue());
}

void test_LinkedQueue() {
    LinkedQueue *linkedQueue = new LinkedQueue();

    linkedQueue->enqueue(1);
    linkedQueue->enqueue(2);
    linkedQueue->enqueue(3);
    linkedQueue->enqueue(4);
    linkedQueue->enqueue(5);

    printf("%d ", linkedQueue->dequeue());
    printf("%d ", linkedQueue->dequeue());
    printf("%d ", linkedQueue->dequeue());
    printf("%d ", linkedQueue->dequeue());
    printf("%d ", linkedQueue->dequeue());
    printf("%d ", linkedQueue->dequeue());
    printf("%d ", linkedQueue->dequeue());
}

void test_PriorityQueue() {
    PriorityQueue *priorityQueue = new PriorityQueue();

    priorityQueue->enqueue(8);
    priorityQueue->enqueue(6);
    priorityQueue->enqueue(4);
    priorityQueue->enqueue(2);
    priorityQueue->enqueue(7);
    priorityQueue->enqueue(4);
    priorityQueue->enqueue(5);
    priorityQueue->enqueue(1);
    priorityQueue->enqueue(3);
    priorityQueue->enqueue(9);
    priorityQueue->enqueue(3);
    priorityQueue->enqueue(4);

    while(!priorityQueue->isEmpty()) {
        printf("%d ", priorityQueue->dequeue());
    }
}

void test_mergeSort() {
    int array[9] = {69, 10, 30, 2, 16, 8, 31, 22, -1};
    int *newArray;

    newArray = mergeSort(array);
    for(int i = 0; i < 8; ++i) {
        printf("%d ", newArray[i]);
    }

}

void test_dfs() {
    int **graph = new int*[10];

    for(int i = 0; i < 10; ++i) {
        graph[i] = new int[10];
    }

    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            graph[i][j] = 0;
        }
    }

    graph[0][1] = 1;
    graph[0][5] = 1;
    graph[1][3] = 1;
    graph[1][4] = 1;
    graph[2][7] = 1;
    graph[2][8] = 1;
    graph[2][3] = 1;
    graph[2][5] = 1;
    graph[3][9] = 1;
    graph[3][5] = 1;
    graph[4][5] = 1;
    graph[4][7] = 1;
    graph[5][3] = 1;
    graph[5][6] = 1;
    graph[5][2] = 1;
    graph[6][7] = 1;
    graph[6][8] = 1;
    graph[6][9] = 1;
    graph[7][0] = 1;
    graph[7][1] = 1;
    graph[7][3] = 1;
    graph[8][7] = 1;
    graph[8][3] = 1;
    graph[9][2] = 1;
    graph[9][3] = 1;

    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            if(graph[i][j]) {
                graph[j][i] = 1;
            }
        }
    }

    bool *visited = new bool[10];
    for(int i = 0; i < 10; ++i) {
        visited[i] = false;
    }

    dfs_iterative(graph, 0, 10);
    printf("\n");
    for(int i = 0; i < 10; ++i) {
        visited[i] = false;
    }
    dfs_recursive(graph, visited, 0, 10);
    printf("\n");
}

void test_bfs() {
    int **graph = new int*[10];

    for(int i = 0; i < 10; ++i) {
        graph[i] = new int[10];
    }

    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            graph[i][j] = 0;
        }
    }

    graph[0][1] = 1;
    graph[0][5] = 1;
    graph[1][3] = 1;
    graph[1][4] = 1;
    graph[2][7] = 1;
    graph[2][8] = 1;
    graph[2][3] = 1;
    graph[2][5] = 1;
    graph[3][9] = 1;
    graph[3][5] = 1;
    graph[4][5] = 1;
    graph[4][7] = 1;
    graph[5][3] = 1;
    graph[5][6] = 1;
    graph[5][2] = 1;
    graph[6][7] = 1;
    graph[6][8] = 1;
    graph[6][9] = 1;
    graph[7][0] = 1;
    graph[7][1] = 1;
    graph[7][3] = 1;
    graph[8][7] = 1;
    graph[8][3] = 1;
    graph[9][2] = 1;
    graph[9][3] = 1;

    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            if(graph[i][j]) {
                graph[j][i] = 1;
            }
        }
    }

    bool *visited = new bool[10];
    for(int i = 0; i < 10; ++i) {
        visited[i] = false;
    }

    bfs_iterative(graph, visited, 0, 10);
}

void test_dijkstra() {
    int **graph = new int*[6];

    for(int i = 0; i < 6; ++i) {
        graph[i] = new int[6];
    }

    for(int i = 0; i < 6; ++i) {
        for(int j = 0; j < 6; ++j) {
            graph[i][j] = 0;
        }
    }

    graph[0][1] = 3;
    graph[0][2] = 5;
    graph[1][2] = 2;
    graph[1][3] = 5;
    graph[2][1] = 1;
    graph[2][3] = 3;
    graph[2][4] = 5;
    graph[3][4] = 3;
    graph[3][5] = 4;
    graph[4][0] = 2;
    graph[4][5] = 5;

    dijkstra(graph, 0, 5, 6);
}

void test_floyd_warshall() {
    int **graph = new int*[5];

    for(int i = 0; i < 5; ++i) {
        graph[i] = new int[5];
    }

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            graph[i][j] = 999;
        }
    }

    graph[0][0] = 0;
    graph[0][1] = 4;
    graph[0][2] = 2;
    graph[0][3] = 5;
    graph[1][1] = 0;
    graph[1][2] = 1;
    graph[1][4] = 4;
    graph[2][0] = 1;
    graph[2][1] = 3;
    graph[2][2] = 0;
    graph[2][3] = 1;
    graph[2][4] = 2;
    graph[3][0] = -2;
    graph[3][3] = 0;
    graph[3][4] = 2;
    graph[4][1] = -1;
    graph[4][2] = 3;
    graph[4][3] = 1;
    graph[4][4] = 0;

    floyd_warshall(graph, 5);
}

void test_disjoint_set() {
    int *p = new int[10];

    for(int i = 0; i < 10; ++i) {
        makeSet(p, i);
    }

    printf("Before disjoint:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", p[i]);
    }

    unionSet(p, 0, 2);
    unionSet(p, 0, 4);
    unionSet(p, 0, 6);
    unionSet(p, 0, 8);
    unionSet(p, 1, 3);
    unionSet(p, 1, 5);
    unionSet(p, 1, 7);
    unionSet(p, 1, 9);

    printf("After disjoint:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", p[i]);
    }

}


int main(void) {
    test_disjoint_set();

    return 0;
}