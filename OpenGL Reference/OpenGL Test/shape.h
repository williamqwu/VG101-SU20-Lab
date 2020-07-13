//
// Created by William Wu on 2019/7/23.
//

#ifndef OPENGL_TEST_SHAPE_H
#define OPENGL_TEST_SHAPE_H

typedef struct _Point { double x,y; } Point;
class Shape {
    public: virtual void draw() = 0; virtual ~Shape();
    protected: float r, g, b;
};
class Rectangle : public Shape {
    public: Rectangle(Point pt1={-.5,-.5}, Point pt2={.5,.5},
    float r=0, float g=0, float b=0);
    void draw();
    private: Point p1,p2;
};
class Triangle : public Shape {
    public: Triangle(Point pt1={-.5,-.5}, Point pt2={.5,-.5},
    Point pt3={0,.5}, float r=0, float g=0, float b=0);
    void draw();
    private: Point p1,p2,p3;
};

#endif //OPENGL_TEST_SHAPE_H
