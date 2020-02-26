#include <stdlib.h>
#include "SplineC.h"
#include <GL/glut.h>
#include <math.h>

#include <plane.h>



SplineC::SplineC() {

    /*Guardar los valores del arreglo ctrlpoints[][] en el archivo y cargarlo 
    en el contructor para inicializar la figura de la curva spline*/
    pointsNum=4;

    ctrlpoints[0][0] =-4.0;
    ctrlpoints[0][1] =-4.0;
    ctrlpoints[0][2] =-4.0;

    ctrlpoints[1][0] = 2.0;
    ctrlpoints[1][1] =-4.0;
    ctrlpoints[1][2] = 0.0;

    ctrlpoints[2][0] =-2.0;
    ctrlpoints[2][1] = 4.0;
    ctrlpoints[2][2] = 0.0;

    ctrlpoints[3][0] = 4.0;
    ctrlpoints[3][1] = 4.0;
    ctrlpoints[3][2] = 4.0;

}

void SplineC::addPoint(GLfloat p_x, GLfloat p_y,GLfloat p_z) {


    ctrlpoints[pointsNum][0] = p_x;
    ctrlpoints[pointsNum][1] = p_y;
    ctrlpoints[pointsNum][2] = p_z;
    pointsNum = pointsNum+1;

}

void SplineC::moveSplineC(GLfloat p_x, GLfloat p_y, GLfloat p_z) {

    GLint i;
    for (i = 0; i < pointsNum; i++) {
        ctrlpoints[i][0] = ctrlpoints[i][0] + p_x;
        ctrlpoints[i][1] = ctrlpoints[i][1] + p_y;
        ctrlpoints[i][2] = ctrlpoints[i][2] + p_z;
    }

}

void SplineC:: moveSplinePoint(GLfloat p_x, GLfloat p_y, GLfloat p_z, int i) {
    ctrlpoints[i][0] = ctrlpoints[i][0] + p_x;
    ctrlpoints[i][1] = ctrlpoints[i][1] + p_y;
    ctrlpoints[i][2] = ctrlpoints[i][2] + p_z;
}

void SplineC::rotateSplineC(GLint axis, GLfloat angle) {

    switch (axis){
    case 0:
        for (GLint i = 0; i < pointsNum; i++) {
            ctrlpoints[i][1] = cos(angle) * ctrlpoints[i][1] - sin(angle) * ctrlpoints[i][2];
            ctrlpoints[i][2] = sin(angle) * ctrlpoints[i][1] + cos(angle) * ctrlpoints[i][2];
        }
        break;
    case 1:
        for (GLint i = 0; i < pointsNum; i++) {
            ctrlpoints[i][0] = cos(angle) * ctrlpoints[i][0] + sin(angle) * ctrlpoints[i][2];
            ctrlpoints[i][2] = cos(angle) * ctrlpoints[i][2] - sin(angle) * ctrlpoints[i][0];
        }
        break;
   case 2:
        for (GLint i = 0; i < pointsNum; i++) {
            ctrlpoints[i][1] = cos(angle) * ctrlpoints[i][0] - sin(angle) * ctrlpoints[i][1];
            ctrlpoints[i][2] = sin(angle) * ctrlpoints[i][0] + cos(angle) * ctrlpoints[i][1];
        }
        break;
    default:
        break;
    }
}


GLfloat* SplineC::getctrlpoints(GLint i) {
    return ctrlpoints[i];
}



GLint SplineC::getpoitsNum() {
    return pointsNum;
}


void SplineC::drawSpline()
{

    int i;
    //glColor3f(0.0, 1.0, 0.0);
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 4,4,&ctrlpoints[0][0]);
    glEnable(GL_MAP1_VERTEX_3);
        //glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_LINE_STRIP);
        for (i = 0; i <= 30; i++)
            glEvalCoord1f((GLfloat)i / 30.0);
        glEnd();
        /* The following code displays the control points as dots. */

        glPointSize(5.0);
        glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POINTS);
        for (i = 0; i <=4; i++)
            glVertex3fv(ctrlpoints[i]);
        glEnd();
        glFlush();

}

