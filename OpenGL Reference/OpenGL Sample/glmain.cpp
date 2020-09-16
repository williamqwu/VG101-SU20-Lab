//
// Created by William Wu on 2019/7/23.
// Forked from Vg101 Slide 309-320
//

#include <GL/glut.h>
#include <iostream>
#include "home.h"
#include "shape.h"

void TimeStep(int n) {
    glutTimerFunc(n, TimeStep, n);
    glutPostRedisplay(); // ensure that glDraw will run repeatedly
}
void glDraw() { // NOTE: no parameter for this function
    double static width=1, height=1.5, owidth=.175;
    Home zh({0,-.25},width,height,owidth);
    zh.zoom(&width, &height, &owidth);
    // std::cout << width << "-" << height << "-" << owidth << std::endl;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    zh.draw();
    glutSwapBuffers();
    glFlush();
}
int main (int argc, char *argv[]) {
    glutInit(&argc, argv); // Init.
    glutInitWindowSize(500, 500); // set window size | May work differently on different computers!
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Home sweet home");

    glClearColor(1.0, 1.0, 1.0, 0.0); // R,G,B,Alpha
    glClear(GL_COLOR_BUFFER_BIT); // reset the background

    glutDisplayFunc(glDraw);
    glutTimerFunc(25, TimeStep, 25); // call TimeStep(25) after 25ms
    glutMainLoop();
    /* In glutMainLoop:
     *
     * Timestep(25);
     * glDraw();
     * Timestep(25);
     * glDraw();
     * Timestep(25);
     * glDraw();
     * ...
     *
     * */
}