#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Point
{
public:
    double x,y; // Set varible type for x,y as double
	
    void setx(double _x)
    { 
        //TODO: Set x as _x
    }
    void sety(double _y)
    { 
        //TODO: Set y as _y
    }
    double module()
    {
        //TODO: Return the distance to the origin.
    }
    double distance(const Point &p)
    { 
        //TODO: Return the distance between p and *this
    }
    void move(double dx, double dy)
    {
        //TODO: Move this point with dx in x-axis and dy in y-axis.
    }
    void print()
    { 
        cout << fixed << setprecision(2);
        cout << "This Point is (" << x << "," << y << ")" << endl; 
    }
    void neatPrint()
    {
        cout << fixed << setprecision(2);
        cout << "(" << x << "," << y << ")";
    }
};

int main()
{
    Point p1,p2;
    p1.setx(3);
    p1.sety(5);
    p1.print();
	// In print subfunction, set cout with reserving 2 digit after decimal point

    p2.setx(6);
    p2.sety(9);
    cout << "P1's module = " << p1.module() << endl;
    // module equals the length to the origin point.

    cout << "P1 and P2 distance = " << p1.distance(p2) << endl;

    return 0;
}
