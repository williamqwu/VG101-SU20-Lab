//
// Created by William Wu on 2019/7/23.
//

#include "home.h"
#include <ctime>
#include <cstdlib>

Home::Home(Point pt1, double width, double height, double owidth){
    float r, g, b; Point p1, p2, p3;
    p=pt1; w=width; h=height; o=owidth; srand(time(0));
    p1={p.x-w/2,p.y-w/2}; p2={p.x+w/2,p.y+w/2};
    paint(&r,&g,&b); sh[0]=new Rectangle(p1,p2,r,g,b);
    p1={p.x-o,p.y-w/2}; p2={p.x+o,p.y};
    paint(&r,&g,&b); sh[1]=new Rectangle(p1,p2,r,g,b);
    p1={p.x-2*o,p.y+o}; p2={p.x-o,p.y+2*o};
    paint(&r,&g,&b); sh[2]=new Rectangle(p1,p2,r,g,b);
    p1={p.x+w/2-2*o,p.y+o}; p2={p.x+w/2-o,p.y+2*o};
    paint(&r,&g,&b); sh[3]=new Rectangle(p1,p2,r,g,b);
    p1={p.x,p.y+h-w/2}; p2={p.x-w/2,p.y+w/2}; p3={p.x+w/2,p.y+w/2};
    paint(&r,&g,&b); sh[4]=new Triangle(p1,p2,p3,r,g,b);
    }
Home::~Home(){ for(int i=0;i<5;i++) delete sh[i]; }

void Home::draw() {for(int i=0;i<5;i++) sh[i]->draw();}
void Home::zoom(double *width, double *height, double *owidth){
    int static i=0;
    if(h>=0.1 && i==0) zoomout(width, height, owidth);
    else if (h<=2) { i=1; zoomin(width, height, owidth); }
    else i=0;
    }
void Home::zoomout(double *width, double *height, double *owidth){
    h/=1.01; *height=h; w/=1.01; *width=w; o/=1.01; *owidth=o;
}
void Home::zoomin(double *width, double *height, double *owidth){
    h*=1.01; *height=h; w*=1.01; *width=w; o*=1.01; *owidth=o;
}
void Home::paint(float *r, float *g, float *b) {
    *r=(float)rand()/RAND_MAX; *g=(float)rand()/RAND_MAX;
    *b=(float)rand()/RAND_MAX;
}

