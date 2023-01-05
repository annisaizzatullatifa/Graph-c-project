#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    Graph G;
    createGraph(G);

    addNode(G, newNode('A'));
    addNode(G, newNode('B'));
    addNode(G, newNode('C'));
    addNode(G, newNode('D'));

    cout << "======================" << endl;

    addEdge(G, 'A','C');
    addEdge(G, 'A','D');
    addEdge(G, 'A','B');

    addEdge(G, 'B','A');
    addEdge(G, 'B','D');

    addEdge(G, 'C','A');

    addEdge(G, 'D','B');
    addEdge(G, 'D','A');

    printGraph(G);
    cout << "=======================" << endl;
    return 0;
}
