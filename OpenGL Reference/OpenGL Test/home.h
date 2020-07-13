//
// Created by William Wu on 2019/7/23.
//

#ifndef OPENGL_TEST_HOME_H
#define OPENGL_TEST_HOME_H

#include "shape.h"

class Home {
    public:
    Home(Point pt1={0,-.25}, double width=1,
    double height=1.3, double owidth=.175);
    ~Home(); // fixed typo
    void draw();
    void zoom(double *width,double *height,double *owidth);
    private:
    Point p; double w, h, o; Shape *sh[5];
    void zoomout(double *width,double *height,double *owidth);
    void zoomin(double *width,double *height,double *owidth);
    void paint(float *r, float *g, float *b);
};


#endif //OPENGL_TEST_HOME_H
