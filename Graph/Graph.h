//
// Created by student on 2019-04-01.
//

#ifndef APS_GRAPH_H
#define APS_GRAPH_H

#include <cstdio>

void dfs_iterative(int **graph, int s, int n);
void dfs_recursive(int **graph, bool *visited, int v, int n);
void bfs_iterative(int **graph, bool *visited, int s, int n);


#endif //APS_GRAPH_H
