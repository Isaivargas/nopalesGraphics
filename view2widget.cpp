#include "view2widget.h"
#include "view1widget.h"
#include "plane.h"




#include "object.h"
#include "snurbs.h"
#include "SplineC.h"

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QSurfaceFormat>
#include <QVBoxLayout>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int band=0;



view2Widget:: view2Widget(QWidget *parent1):QOpenGLWidget {parent1} {



}



void  view2Widget:: initializeGL() {


    initializeOpenGLFunctions();
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);





}

void  view2Widget:: paintGL(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(80, 1, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(1, 2, 10, 0, 0, 0, 0, 0,1 );



    plane Plane;

    view1Widget view;


    switch(figure) {

       case 1: { SplineC spline;
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

void  view2Widget:: resizeGL(int w, int h) {


       glViewport(0,0,w,h);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       glMatrixMode(GL_MODELVIEW);
       glLoadIdentity();

       if( band == 0){
           band=band+1;
       }else{
           paintGL();
       }

}

