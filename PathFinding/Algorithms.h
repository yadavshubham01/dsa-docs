#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "Graph.h"
#include <vector>
#include <queue>
#include <unordered_map>

// Namespace to group all algorithms
namespace Algorithms {

    // Breadth-First Search (BFS) for shortest path in unweighted graph
    std::vector<int> BFS(const Graph& graph, int startNode, int endNode);

    // Print the resulting path
    void printPath(const std::vector<int>& path);

}

#endif // ALGORITHMS_H
