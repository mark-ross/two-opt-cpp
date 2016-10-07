#include <iostream>
#include <vector>
#include <string>

#include "../includes/Point.hpp"
#include "../includes/EdgeManager.hpp"
#include "../includes/MapManager.hpp"


vector<Point*> pl;
EdgeManager em;

int main(int argc, char* argv[]) {
    cout << "EdgeManager creation and tests" << endl;

    cout << "create a few points" << endl;
    for(int i = 0; i < 5; i++)
        pl.push_back(new Point(i, i+2, i*i));

    cout << "Here are the point created" << endl;
    for(size_t i = 0; i < pl.size(); i++) {
        cout << pl[i]->label << endl;
        cout << pl[i]->x << ", " << pl[i]->y << endl;
    }
    cout << "Finished" << endl;

    MapManager::generateRandomCompleteGraph(pl, &em);

    em.print();
}
