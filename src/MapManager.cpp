#include <fstream>
#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "../includes/EdgeManager.hpp"
#include "../includes/MapManager.hpp"

MapManager::MapManager(string fname) {

    // read in the file, storing the points into the vector of points
    ifstream file;
    file.open( fname.c_str() );
    if(file.fail()) {
        cerr << "Error opening file..." << endl;
        //this should error out or something...
    }

    int numPoints;
    file >> numPoints;

    //make temp vars for inputs
    int id;
    float x, y;

    // for every point in the file...
    for(int i = 0; i < numPoints; i++) {
        // read format of {id x y} without brackets, of course
        file >> id;
        file >> x;
        file >> y;
        points.push_back(new Point(id, x, y));
    }
}

static void generateRandomCompleteGraph(vector<Point*> points, EdgeManager* em) {
    //seed the random number generator
    srand(time(0));
    //grab the number of points to parse
    unsigned int numPoints = points.size();
    //make random edges for the map here!
    vector<int> visited;
    //grab the first random index
    int firstRandIndex = rand() % numPoints;
    //add to the visited vector
    visited.push_back(firstRandIndex);

    //do this for all the points
    while (visited.size() < numPoints) {
        //grab a new random choice
        int randIndex = rand() % numPoints;
        //make a flag for if something is present in the vector
        bool present = false;
        //go through all the points to see if it is already used
        for(size_t i = 0; i < visited.size(); i++)
            //check to make sure it isn't present
            if(randIndex == visited[i]) present = true;
        //if it isn't present, add it to the list!
        if(!present) visited.push_back(randIndex);
    }
    //once that's finished, add first to the end...
    visited.push_back(firstRandIndex);

    //make edges between the two points in the vector
    for(size_t i = 0; i < visited.size()-1; i++)
        em->addEdge( points[i], points[i+1] );

    //viola, the random map is made
    return;
}

void MapManager::optimizePath(Solution* solution) {

    solution->setup(points);
    solution->execute();

}
