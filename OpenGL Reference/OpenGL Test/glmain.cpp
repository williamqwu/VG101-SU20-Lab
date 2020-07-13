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
    glutPostRedisplay(); // 若删去，glDraw只会运行一次
    }
void glDraw() { // no parameters here
    double static width=1, height=1.5, owidth=.175; // Init. 只执行一次
    Home zh({0,-.25},width,height,owidth); // Init. Home, 运行一次后释放

    zh.zoom(&width, &height, &owidth); // 变幻
    std::cout << width << "-" << height << "-" << owidth << std::endl; // to show the temp canvas parameters

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // 联动绘图代码
    zh.draw(); glutSwapBuffers(); glFlush();
    }
int main (int argc, char *argv[]) {
    glutInit(&argc, argv); // Init. library
    glutInitWindowSize(500, 500); // set window size | May work differently on different computers!
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Home sweet home"); //只执行一次

    glClearColor(1.0, 1.0, 1.0, 0.0); // 背景色，末位参数是透明度
    glClear(GL_COLOR_BUFFER_BIT); // 还原屏幕为背景色

    //联动绘制代码：
    glutDisplayFunc(glDraw);
    glutTimerFunc(25, TimeStep, 25); // 25ms后call TimeStep(25)
    glutMainLoop(); // 循环运行
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