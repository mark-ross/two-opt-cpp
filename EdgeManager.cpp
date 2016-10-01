#include "Edge.cpp"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class EdgeManager {
private:
    vector<Edge> edgeList;

    //return the index of the edge in the list
    int getEdgeIndex(Point p1, Point p2) {
        for(size_t i = 0; i < edgeList.size(); i++) {
            //if the points aren't the same && points are in the same entry
            if( (p1.label != p2.label) &&
                (edgeList[i].a.label == p1.label || edgeList[i].a.label == p2.label) &&
                (edgeList[i].b.label == p1.label || edgeList[i].b.label == p2.label) )
                return i;
        }
        //if there was nothing... return null
        else return -1;
    }

public:
    //return a pointer the actual edge
    Edge* getEdge(Point p1, Point p2) {
        int index = getEdgeIndex(p1, p2);
        return &edgeList[index];
    }

    // remove the edge with the given points
    bool removeEdge(Point p1, Point p2) {
        int i = getEdgeIndex(p1,p2);
        if( i >= 0) {
            swap(edgeList[i], edgeList.back());
            edgeList.pop_back();

            cout << "Edge successfully removed" << endl;

            return true;
        } else {
            cout << "Edge did not exist" << endl;
            return false;
        }
    }

    // add an element to the vector
    bool addEdge(Point p1, Point p2) {
        if(!edgeExists(p1, p2)) {
            edgeList.push_back(new Edge(p1,p2));
            return true;
        } else
            return false;
    }

    // check whether an edge already exists
    bool edgeExist(Point p1, Point2) {
        if(getEdgeIndex(p1,p2) >= 0) return true;
        else return false;
    }
};
