#ifndef WEIGHTEDGRAPH_H
#define WEIGHTEDGRAPH_H

#include <vector>
#include <list>
using namespace std;

class WeightedGraph {
private:
    int V;
    vector<list<pair<int, int>>> adj;

public:
    // Constructor
    WeightedGraph(int V);

    // Add edge to the graph
    void addEdge(int u, int v, int weight); // u = connected vertex, v = neighbor

    // Print the graph representation
    void printGraph();
};

