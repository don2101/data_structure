//
// Created by student on 2019-04-01.
//

#include "DisjointSet.h"

void makeSet(int *p, int x) {
    p[x] = x;
}

int findSet(int *p, int x) {
    if(p[x] == x) return x;
    else return p[x] = findSet(p, p[x]);
}

void unionSet(int *p, int x, int y) {
    p[findSet(p, y)] = findSet(p, x);
}
