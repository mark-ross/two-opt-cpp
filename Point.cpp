#include <string>

class Point {
public:
    const string label;
    const float x;
    const float y;
    const float z;

    Point(const string l, const float a, const float b, const float c = 0) {
        label = l;
        x = a;
        y = b;
        z = c;
    }
};
