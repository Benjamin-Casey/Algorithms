#include "WeightedGraph.h"
#include <iostream>

int main() {
    WeightedGraph g(4);

    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 20);
    g.addEdge(1, 2, 30);
    g.addEdge(2, 3, 40);

    g.printGraph();

    g.dijkstrasAlgorithm(0, 3);

    return 0;
}
