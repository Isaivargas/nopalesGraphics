#include "view3widget.h"
#include "view1widget.h"

#include "object.h"
#include "plane.h"
#include "SplineC.h"
#include "snurbs.h"
#include "animation.h"

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QSurfaceFormat>
#include <QVBoxLayout>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

view3Widget:: view3Widget(QWidget *parent1):QOpenGLWidget {parent1} {


}



void  view3Widget:: initializeGL() {


    initializeOpenGLFunctions();
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);





}

void  view3Widget:: paintGL(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(80, 1, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(3, 3, -8, 0, 0, 0, 0, 0,1 );


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

       case 10:{ animation Animation;
              Animation.drawAnimation(view.play);
                       }
        break;

    }


}

void  view3Widget:: resizeGL(int w, int h) {

       glViewport(0,0,w,h);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       glMatrixMode(GL_MODELVIEW);
       glLoadIdentity();
}

void view3Widget::qColorToRGBView3(const QColor &C, float &r, float &g, float &b) const{

   r = normalizaView3(C.red(),1.0f,255.0f);
   g = normalizaView3(C.green(),1.0f,255.0f);
   b = normalizaView3(C.blue() ,1.0f,255.0f);

}

float view3Widget::normalizaView3(float val, float min, float max) const
{
   return (val - min )/ (max - min);
}
