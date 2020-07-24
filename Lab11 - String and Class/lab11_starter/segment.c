#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Point
{
    // You may simply copy from the previous problem
}

class Segment
{
public:
    Point A, B;
    void set(Point _A,Point _B)
    {
    	//TODO: Set the segment with points _A and _B
    }
    double length()
    {
        //TODO: return the length of this segment
    }
    void move(double dx, double dy)
    {
        //TODO: move the segement by (dx,dy)
    }
    void print()
    {
        cout << fixed << setprecision(2) << "This Segment is from ";
        A.neatPrint();
        cout << " to ";
        B.neatPrint();
        cout << endl;
    }
};

int main()
{
    Point p1,p2;
    p1.setx(3);
    p1.sety(5);
    p2.setx(6);
    p2.sety(9);
    
    Segment seg;
    seg.set(p1, p2);
    seg.print();
    cout << "This segment has length = " << seg.length() << endl;
    seg.move(10, 10);
    seg.print();
    cout << "This segment has length = " << seg.length() << endl;

    return 0;
}
