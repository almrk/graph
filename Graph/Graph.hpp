#pragma once

#include <memory>
#include <vector>

template<typename T>
struct Node;
template<typename T>
struct Edge;

template<typename T>
struct Node {
    T data;
    std::vector<Edge<T>> edges;
};

template<typename T>
struct Edge {
    Node<T>* to;
    Node<T>* from;
    double weight;
};

template<typename T>
class Graph {
private:
    std::vector<std::unique_ptr<Node<T>>> mNodes;
    std::vector<std::unique_ptr<Edge<T>>> mEdges;

public:
    Graph();
    ~Graph();

    void addNode(T data);
    void removeNode(T data);
};