#include "WeightedGraph.h"

class WeightedGraph {
private:
    int V;
    vector<list<pair<int, int>>> adj;

public:
    WeightedGraph(int V);

    // u = connecting vertex, v = neighbour
    void addEdge(int u, int v, int weight);

    void printGraph();
};

WeightedGraph::WeightedGraph(int V) {
    this->V = V;
    adj.resize(V);
}

void WeightedGraph::addEdge(int u, int v, int weight) {
    adj[v].push_back(make_pair(u, weight));
    adj[u].push_back(make_pair(v, weight));
}

void WeightedGraph::printGraph() {
    for (int v = 0; v < V; v++) {
        cout << "Adjancency list of vertex " << v << '\n';

        for (auto it = adj[v].begin(); it != adj[v].end(); ++it) {
            cout << "\t" << it->first << " -> (" << it->second << ")\n";
        }
        cout << '\n';
    }
}

