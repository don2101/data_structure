//
// Created by student on 2019-04-01.
//

#include "Graph.h"
#include "../Queue/Queue.h"

void dfs_iterative(int **graph, int s, int n) {
    int *stack = new int[n*n];
    bool *visited = new bool[n];
    int sp = 0;

    for(int i = 0; i < n; ++i) visited[i] = false;

    stack[sp++] = s;

    while(sp > 0) {
        int v = stack[--sp];

        if(!visited[v]) {
            visited[v] = true;
            printf("%d ", v);

            for(int w = 0; w < n; ++w) {
                if(!visited[w] && graph[v][w]) {
                    stack[sp++] = w;
                }
            }
        }
    }
}


void dfs_recursive(int **graph, bool *visited, int v, int n) {
    visited[v] = true;
    printf("%d ", v);

    for(int w = 0; w < n; ++w) {
        if(!visited[w]) {
            dfs_recursive(graph, visited, w, n);
        }
    }
}


void bfs_iterative(int **graph, bool *visited, int s, int n) {
    ArrayQueue *arrayQueue = new ArrayQueue(n*n);
    arrayQueue->enqueue(s);

    while(!arrayQueue->isEmpty()) {
        int v = arrayQueue->dequeue();

        if(!visited[v]) {
            printf("%d ", v);
            visited[v] = true;

            for(int w = 0; w < n; ++w) {
                if(!visited[w] && graph[v][w]) {
                    arrayQueue->enqueue(w);
                }
            }
        }
    }
}