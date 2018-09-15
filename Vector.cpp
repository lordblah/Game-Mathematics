#include <iostream>

//a class that repseents Vectos

class Vector
{
public:
    float x,y;
};
//A class that will repesent the points
class Point
{
public:
    Point AddVector(Vector v);

    float x,y;
};
//Point class function that will add the Vector points
Point Point::AddVector(Vector v)
{
    Point p2;
    p2.x = x+ v.x;
    p2.y = y + v.y;

    return p2;
}
using namespace std;

int main(int argc, char** args)
{
    Point p; //(1,0)
    p.x = 1;
    p.y = 0;

    Vector v;
    v.x= 2;
    v.y = 3;

    Point p2 = p.AddVector(v);

    cout << "Result:(" << p2.x << " , " << p2.y << ")\n";
    return 0;
}
