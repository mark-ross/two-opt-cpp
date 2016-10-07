#ifndef __MAP_MANAGER_H__
#define __MAP_MANAGER_H__

#include <string>
#include <vector>

#include "EdgeManager.hpp"
#include "Solution.hpp"

class MapManager {

private:
    vector<Point*> points;
    EdgeManager edges;

public:
    MapManager(string);

    // based on the nodes read from the file,
    // create a graph that is complete
    static void generateRandomCompleteGraph(vector<Point*>, EdgeManager*);

    // solve the graph given the function and arguments
    void optimizePath(Solution*);

};

#endif // __MAP_MANAGER_H__
