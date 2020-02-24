#include "plane.h"

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

plane::plane()
{

    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_LINE_LOOP);
    glVertex3f(8, 10, 0);
    glVertex3f(-8, 10, 0);
    glVertex3f(-8, -10, 0);
    glVertex3f(8, -10, 0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(8, 9, 0);
    glVertex3f(-8, 9, 0);
    glVertex3f(8, 8, 0);
    glVertex3f(-8, 8, 0);
    glVertex3f(8, 7, 0);
    glVertex3f(-8, 7, 0);
    glVertex3f(8, 6, 0);
    glVertex3f(-8, 6, 0);
    glVertex3f(8, 5, 0);
    glVertex3f(-8, 5, 0);
    glVertex3f(8, 4, 0);
    glVertex3f(-8, 4, 0);
    glVertex3f(8, 3, 0);
    glVertex3f(-8, 3, 0);
    glVertex3f(8, 2, 0);
    glVertex3f(-8, 2, 0);
    glVertex3f(8, 1, 0);
    glVertex3f(-8, 1, 0);
    glVertex3f(0, 0, 0);
    glVertex3f(-8, 0, 0);
    glVertex3f(1, 0, 0);
    glVertex3f(8, 0, 0);
    glVertex3f(8, -1, 0);
    glVertex3f(-8, -1, 0);
    glVertex3f(8, -2, 0);
    glVertex3f(-8, -2, 0);
    glVertex3f(8, -3, 0);
    glVertex3f(-8, -3, 0);
    glVertex3f(8, -4, 0);
    glVertex3f(-8, -4, 0);
    glVertex3f(8, -5, 0);
    glVertex3f(-8, -5, 0);
    glVertex3f(8, -6, 0);
    glVertex3f(-8, -6, 0);
    glVertex3f(8, -7, 0);
    glVertex3f(-8, -7, 0);
    glVertex3f(8, -8, 0);
    glVertex3f(-8, -8, 0);
    glVertex3f(-8, -9, 0);
    glVertex3f(8, -9, 0);
    glVertex3f(7, 10, 0);
    glVertex3f(7, -10, 0);
    glVertex3f(6, 10, 0);
    glVertex3f(6, -10, 0);
    glVertex3f(5, 10, 0);
    glVertex3f(5, -10, 0);
    glVertex3f(4, 10, 0);
    glVertex3f(4, -10, 0);
    glVertex3f(3, 10, 0);
    glVertex3f(3, -10, 0);
    glVertex3f(2, 10, 0);
    glVertex3f(2, -10, 0);
    glVertex3f(1, 10, 0);
    glVertex3f(1, -10, 0);
    glVertex3f(0, 0, 0);
    glVertex3f(0, -10, 0);
    glVertex3f(0, 1, 0);
    glVertex3f(0, 10, 0);
    glVertex3f(-1, 10, 0);
    glVertex3f(-1, -10, 0);
    glVertex3f(-2, 10, 0);
    glVertex3f(-2, -10, 0);
    glVertex3f(-3, 10, 0);
    glVertex3f(-3, -10, 0);
    glVertex3f(-4, 10, 0);
    glVertex3f(-4, -10, 0);
    glVertex3f(-5, 10, 0);
    glVertex3f(-5, -10, 0);
    glVertex3f(-6, 10, 0);
    glVertex3f(-6, -10, 0);
    glVertex3f(-7, 10, 0);
    glVertex3f(-7, -10, 0);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0, 0, 0);
    glVertex3f(3, 0, 0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 3, 0);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 0, 3);
    glEnd();
    glFlush();
}
