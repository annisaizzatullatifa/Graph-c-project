#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

using namespace std;

#define first(L) ((L).first)
#define next(P) (P)->next
#define info(P) (P)->info
#define child(P) (P)->child
#define nil NULL

typedef char infoGraph;
typedef struct Node *adrNode;

struct Node{
    infoGraph info;
    adrNode child;
    adrNode next;
};

struct Graph {
    adrNode first;
};

void createGraph(Graph &G);
adrNode newNode(char X);
void addNode (Graph &G, adrNode p);
adrNode findNode (Graph G, char X);
void addEdge(Graph &G, char x, char y);
bool isConnected(Graph G, char x, char y);
void printGraph(Graph &G);

#endif // GRAPH_H_INCLUDED
