#include "view1widget.h"
#include "plane.h"

#include "object.h"
#include "spline.h"
#include "camera.h"
#include "nopalesgraphics.h"

#include "SplineC.h"

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QSurfaceFormat>
#include <QVBoxLayout>


#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>




view1Widget:: view1Widget(QWidget *parent1):QOpenGLWidget {parent1} {


}


void view1Widget::initializeGL()
{ 

       initializeOpenGLFunctions();
       //glClearColor (0.0, 0.0, 0.0, 0.0);
       glEnable(GL_DEPTH_TEST);
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}

void view1Widget:: paintGL()
{

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(20, 1, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(eX, 10, 17, 0, 0, 0, 0, 0, 1);
    glColor3f(1.0, 1.0, 1.0);

    plane Plane;
    SplineC spline;
    spline.drawSpline();
    //splineC1.addPoint(add_px,add_py,add_pz);


}

void view1Widget::resizeGL(int w, int h){
       glViewport(0, 0, w, h);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       glMatrixMode(GL_MODELVIEW);
       glLoadIdentity();
}

