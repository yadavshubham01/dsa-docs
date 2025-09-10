#include "Algorithms.h"
#include <iostream>
#include <queue>
#include <unordered_map>
#include <algorithm> 
namespace Algorithms {

    std::vector<int> BFS(const Graph& graph, int startNode, int endNode) {
        std::unordered_map<int, int> parent; // To track the path
        std::queue<int> q;
        std::unordered_map<int, bool> visited;

        q.push(startNode);
        visited[startNode] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            if (current == endNode) {
                break; // Stop once the end node is reached
            }

            for (const Edge& edge : graph.getNeighbors(current)) {
                int neighbor = edge.to;
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = current; // Track the parent
                    q.push(neighbor);
                }
            }
        }

        // Reconstruct the path from endNode to startNode
        std::vector<int> path;
        int current = endNode;

        while (parent.find(current) != parent.end()) {
            path.push_back(current);
            current = parent[current];
        }

        if (current == startNode) {
            path.push_back(startNode);
            std::reverse(path.begin(), path.end());
        } else {
            path.clear(); // No path found
        }

        return path;
    }

    void printPath(const std::vector<int>& path) {
        if (path.empty()) {
            std::cout << "No path found!" << std::endl;
        } else {
            std::cout << "Shortest path: ";
            for (size_t i = 0; i < path.size(); ++i) {
                std::cout << path[i];
                if (i < path.size() - 1) std::cout << " -> ";
            }
            std::cout << std::endl;
        }
    }

}
