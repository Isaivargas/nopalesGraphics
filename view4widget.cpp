#include "view4widget.h"
#include "view1widget.h"

#include "object.h"
#include "plane.h"
#include   "SplineC.h"
#include "snurbs.h"

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QSurfaceFormat>
#include <QVBoxLayout>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

view4Widget:: view4Widget(QWidget *parent1):QOpenGLWidget {parent1} {


}



void  view4Widget:: initializeGL() {


    initializeOpenGLFunctions();
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);





}

void  view4Widget:: paintGL(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(80, 1, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(7, 7, 7, 0, 0, 0, 0, 0,1 );


    plane Plane;

    view1Widget view;

    switch(figure) {

       case 1: {SplineC spline;
               spline.addPoint(view.add_px,view.add_py,view.add_pz);
               spline.drawSpline();
                   }
        break;

       //case 2:
        //break;

       //case 3:
       // break;

       case 4: {
               SupNURBS nurbs;
               nurbs.addPoint(2,3,1);
               nurbs.drawNurbs();}
        break;

       //case 5:
        //break;

       //case 6:
       // break;

       case 7: { object cube;
                cube.Draw_Cube(view.lx,view.ly,view.lz);}
        break;

    }



}

void  view4Widget:: resizeGL(int w, int h) {

       glViewport(0,0,w,h);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       glMatrixMode(GL_MODELVIEW);
       glLoadIdentity();
}

void view4Widget::qColorToRGBView4(const QColor &C, float &r, float &g, float &b) const{

   r = normalizaView4(C.red(),1.0f,255.0f);
   g = normalizaView4(C.green(),1.0f,255.0f);
   b = normalizaView4(C.blue() ,1.0f,255.0f);

}

float view4Widget::normalizaView4(float val, float min, float max) const
{
   return (val - min )/ (max - min);
}
