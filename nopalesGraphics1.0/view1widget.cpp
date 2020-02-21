#include "view1widget.h"
#include "object.h"
#include "camera.h"
#include "nopalesgraphics.h"

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


void  view1Widget:: initializeGL() {


    initializeOpenGLFunctions();
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


}








void  view1Widget:: paintGL(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(70, 1, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    //gluLookAt(7, 10, 7, 0, 0, 0, 0, 0,1 );


     camera();

    object Object ;


}

void  view1Widget:: resizeGL(int w, int h) {

    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();



}


void view1Widget::camera()
{


    if (eX > -94)
    {
    gluLookAt(7, 10, 7, 0, 0, 0, eX, 0,1 );
    }
}


