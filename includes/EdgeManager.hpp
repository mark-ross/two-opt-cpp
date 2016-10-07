#ifndef __EDGE_MANAGER_H__
#define __EDGE_MANAGER_H__

#include "Edge.hpp"
#include <vector>


using namespace std;

class EdgeManager {
private:
    vector<Edge*> edgeList;
    //return the index of the edge in the list
    int getEdgeIndex(Point p1, Point p2);

public:
    //return a pointer the actual edge
    Edge* getEdge(Point p1, Point p2);

    // remove the edge with the given points
    bool removeEdge(Point p1, Point p2);

    // add an element to the vector
    bool addEdge(Point p1, Point p2);
    bool addEdge(Point* p1, Point* p2);

    // check whether an edge already exists
    bool edgeExists(Point p1, Point p2);

    void print();

};

#endif // __EDGE_MANAGER_H__
