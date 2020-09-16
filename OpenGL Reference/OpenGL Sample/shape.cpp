//
// Created by William Wu on 2019/7/23.
//

#include "shape.h"
#include <GL/glut.h>

Shape::~Shape() {}
Rectangle::Rectangle(Point pt1, Point pt2,
                     float red, float green, float blue) {
    p1=pt1;
    p2=pt2;
    r=red;
    g=green;
    b=blue;
}
void Rectangle::draw() {
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p1.x, p2.y);
    glEnd();
}
Triangle::Triangle(Point pt1, Point pt2, Point pt3,
                   float red, float green, float blue) {
    p1=pt1;
    p2=pt2;
    p3=pt3;
    r=red;
    g=green;
    b=blue;
}
void Triangle::draw() {
    glColor3f(r, g, b);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glEnd();
}