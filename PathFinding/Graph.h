#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <unordered_map>
#include <utility>
#include <limits>

// Represents a weighted edge in the graph
struct Edge {
    int to;      // Destination node
    double weight; // Weight of the edge
};

// Graph class using adjacency list
class Graph {
public:
    // Add an edge to the graph
    void addEdge(int from, int to, double weight);

    // Get neighbors of a node
    const std::vector<Edge>& getNeighbors(int node) const;

    // Set the number of nodes in the graph
    void setNodeCount(int count);

    // Print the graph (for debugging)
    void printGraph() const;

private:
    std::unordered_map<int, std::vector<Edge>> adjList; // Adjacency list
    int nodeCount = 0;                                  // Total number of nodes
};

#endif // GRAPH_H
