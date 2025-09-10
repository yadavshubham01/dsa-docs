#include <iostream>
#include "Graph.h"
#include "Algorithms.h"

int main() {
    Graph graph;

    int nodes, edges;
    std::cout << "Enter the number of nodes: ";
    std::cin >> nodes;

    graph.setNodeCount(nodes);

    std::cout << "Enter the number of edges: ";
    std::cin >> edges;

    std::cout << "Enter edges in the format (from to weight):\n";
    for (int i = 0; i < edges; ++i) {
        int from, to;
        double weight = 1; // BFS works for unweighted graphs; ignore weight
        std::cin >> from >> to;
        graph.addEdge(from, to, weight);
    }

    std::cout << "Graph Representation:\n";
    graph.printGraph();

    int startNode, endNode;
    std::cout << "\nEnter start node: ";
    std::cin >> startNode;

    std::cout << "Enter end node: ";
    std::cin >> endNode;

    std::cout << "\nRunning BFS...\n";
    auto path = Algorithms::BFS(graph, startNode, endNode);
    Algorithms::printPath(path);

    return 0;
}
