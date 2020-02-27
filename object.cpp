#include "object.h"
#include "plane.h"

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

object::object()
{



}

void object::Draw_Cube(float j,float i,float k)
{

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); glVertex3f(2.5+j, 2.5+i, 1+k);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5+j, -2.5+i, 1+k);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(-2.5+j, -2.5+i, 1+k);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(-2.5+j, 2.5+i, 1+k);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5+j, -2.5+i, 1+k);
    glColor3f(0.0, 1.0, 0.0); glVertex3f(-2.5+j, -2.5+i, 1+k);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5+j, -2.5+i, 6+k);
    glColor3f(0.0, 1.0, 0.0); glVertex3f(2.5+j, -2.5+i, 6+k);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(2.5+j, 2.5+i, 1+k);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5+j, 2.5+i, 1+k);
    glColor3f(0.0, 0.0, 1.0); glVertex3f(-2.5+j, 2.5+i, 6+k);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(2.5+j, 2.5+i, 6+k);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5+j, 2.5+i, 1+k);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5+j, -2.5+i, 1+k);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(2.5+j, -2.5+i, 6+k);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5+j, 2.5+i, 6+k);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(-2.5+j, -2.5+i, 1+k);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5+j, 2.5+i, 1+k);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5+j, 2.5+i, 6+k);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5+j, -2.5+i, 6+k);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(2.5+j, 2.5+i,  6+k);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(2.5+j, -2.5+i, 6+k);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(-2.5+j, -2.5+i,6+k);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(-2.5+j, 2.5+i, 6+k);
    glEnd();
    glFlush();
}



