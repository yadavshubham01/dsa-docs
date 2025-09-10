#include "Graph.h"
#include <iostream>

void Graph::addEdge(int from, int to, double weight) {
    adjList[from].push_back({to, weight});
    // Uncomment the next line if the graph is undirected
    // adjList[to].push_back({from, weight});
}

const std::vector<Edge>& Graph::getNeighbors(int node) const {
    static const std::vector<Edge> empty;
    auto it = adjList.find(node);
    return (it != adjList.end()) ? it->second : empty;
}

void Graph::setNodeCount(int count) {
    nodeCount = count;
}

void Graph::printGraph() const {
    for (const auto& pair : adjList) {
        int node = pair.first;
        const auto& neighbors = pair.second;

        std::cout << "Node " << node << " -> ";
        for (const auto& edge : neighbors) {
            std::cout << "(" << edge.to << ", " << edge.weight << ") ";
        }
        std::cout << std::endl;
    }
}
