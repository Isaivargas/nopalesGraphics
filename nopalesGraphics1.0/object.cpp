#include "object.h"

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void Draw_Cube(float i)
{

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); glVertex3f(2.5, 2.5+i, 1);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5, -2.5+i, 1);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(-2.5, -2.5+i, 1);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(-2.5, 2.5+i, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5, -2.5+i, 1);
    glColor3f(0.0, 1.0, 0.0); glVertex3f(-2.5, -2.5+i, 1);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5, -2.5+i, 6);
    glColor3f(0.0, 1.0, 0.0); glVertex3f(2.5, -2.5+i, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(2.5, 2.5+i, 1);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5, 2.5+i, 1);
    glColor3f(0.0, 0.0, 1.0); glVertex3f(-2.5, 2.5+i, 6);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(2.5, 2.5+i, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5, 2.5+i, 1);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5, -2.5+i, 1);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(2.5, -2.5+i, 6);
    glColor3f(1.0, 1.0, 0.0); glVertex3f(2.5, 2.5+i	, 6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(-2.5, -2.5+i, 1);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5, 2.5+i, 1);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5, 2.5+i, 6);
    glColor3f(0.0, 1.0, 1.0); glVertex3f(-2.5, -2.5+i, 6);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(2.5, 2.5+i, 6);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(2.5, -2.5+i, 6);
    glColor3f(1.0, 0.0, 1.0); glVertex3f(-2.5, -2.5+i, 6);
    glColor3f(1.0, 1.0, 1.0); glVertex3f(-2.5, 2.5+i, 6);
    glEnd();



}



void Plano()
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
    glVertex3f(5, 0, 0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 5, 0);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 0, 5);
    glEnd();
    glFlush();
}

object::object()
{

    Plano();
    Draw_Cube(0);



}
