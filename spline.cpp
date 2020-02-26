#include "spline.h"

#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

GLfloat ctrlpoints[0][3];

spline::spline()
{

        ctrlpoints[0][0] = 0.1;
        ctrlpoints[0][1] = -0.2;
        ctrlpoints[0][2] = 0;
        ctrlpoints[1][0] = 0.1;
        ctrlpoints[1][1] = -0.2;
        ctrlpoints[1][2] = 0.1;
        ctrlpoints[2][0] = 0;
        ctrlpoints[2][1] = 0.9;
        ctrlpoints[2][2] = 0;
        ctrlpoints[3][0] = 1.2;
        ctrlpoints[3][1] = 1;
        ctrlpoints[3][2] = 0;
        int i = 0;
        /*for (i = 0; i < 4; i++) {
            ctrlpoints[i][0] = 2 * cos(3.1416 * 0.5 * i);
            ctrlpoints[i][1] = 2 * sin(3.1416 * 0.5 * i);
            ctrlpoints[i][2] = 0;
        }
        ctrlpoints[4][0] = 2 * cos(3.1416 * 0.1 * 0);
        ctrlpoints[4][1] = 2 * sin(3.1416 * 0.1 * 0);
        ctrlpoints[4][2] = 0;*/


        glShadeModel(GL_SMOOTH);
        glMap1f(GL_MAP1_VERTEX_3, 0.0, 1, 3, 4, &ctrlpoints[0][0]);
        glEnable(GL_MAP1_VERTEX_3);


        glBegin(GL_LINE_STRIP);
        for (i = 0; i <= 20; i++)
            glEvalCoord1f((GLfloat)i / 20.0);
        glEnd();
        /* The following code displays the control points as dots. */
        glPointSize(6.0);
        glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POINTS);
        for (i = 0; i < 4; i++)
            glVertex3fv(&ctrlpoints[i][0]);
        glEnd();
        glFlush();

}








