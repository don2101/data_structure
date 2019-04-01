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


int min(int n1, int n2) {
    if(n1 > n2) return n2;

    return n1;
}

void dijkstra(int **graph, int s, int e, int n) {
    bool *visited = new bool[n];
    int *dist = new int[n];

    for(int i = 0; i < n; ++i) dist[i] = 9999999;
    for(int i = 0; i < n; ++i) visited[i] = false;

    dist[s] = 0;
    visited[0] = true;

    int v = s;
    while(v != e) {
        for(int w = 0; w < n; ++w) {
            if(!visited[w] && graph[v][w] > 0) {
                dist[w] = min(dist[w], graph[v][w]+dist[v]);
            }
        }
        
        int minDist = 9999999;
        int minIdx = 0;

        for (int w = 0; w < n; ++w) {
            if (!visited[w] && minDist > dist[w]) {
                minDist = dist[w];
                minIdx = w;
            }
        }

        v = minIdx;
        visited[v] = true;
    }

    int minDist = dist[e];
    printf("minimum distance from %d to %d: %d\n", s, e, minDist);
}


void floyd_warshall(int **graph, int n) {
    printf("Before floyd algorithm:\n");

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            if(i != k) {
                for (int j = 0; j < n; ++j) {
                    if(j != k && j != i) {
                        if(graph[i][j] > graph[i][k]+graph[k][j]) {
                            graph[i][j] = graph[i][k]+graph[k][j];
                        }
                    }
                }
            }
        }
    }

    printf("After floyd algorithm:\n");

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}