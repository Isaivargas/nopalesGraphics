#include "view1widget.h"
#include "plane.h"

#include "object.h"
#include "spline.h"
#include "camera.h"
#include "nopalesgraphics.h"

#include "SplineC.h"

#include "snurbs.h"

#include "animation.h"

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QSurfaceFormat>
#include <QVBoxLayout>


#include <GL/glut.h>




view1Widget:: view1Widget(QWidget *parent1):QOpenGLWidget {parent1} {


}


void view1Widget::initializeGL()
{ 

       initializeOpenGLFunctions();
       //glClearColor (0.0, 0.0, 0.0, 0.0);
       //glEnable(GL_DEPTH_TEST,GL_);
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}

void view1Widget:: paintGL()
{


    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(20, 1, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1.0, 1.0, 1.0);



    gluLookAt(eX*10, 10, 17, 0, 0, 0, 0, 0, 1);



    plane Plane;


    switch(figure) {

       case 1: {SplineC spline;
               //spline.addPoint(add_px,add_py,add_pz);
                //spline.drawSpline();
               spline.moveSplineC(i_px,i_py,i_pz);
               spline.scaleSplineC(scale);
               spline.rotateSplineC(axis,angle);
               spline.drawSpline();

                   }
        break;

       //case 2:
        //break;

       //case 3:
       // break;

       case 4: {SupNURBS nurbs;
               //nurbs.addPoint(2,3,1);
               nurbs.drawNurbs();
               nurbs.moveSplineC(i_px,i_py,i_pz);
               nurbs.scaleSplineC(scale);
               nurbs.rotateSplineC(axis,angle);
        }
        break;

       //case 5:
        //break;

       //case 6:
       // break;

       case 7: { object cube;
                cube.Draw_Cube(lx,ly,lz);}

        break;


       case 10:{ animation Animation;
                 Animation.drawAnimation(play);

                 QTimer::singleShot(200, this, SLOT(updateCaption())); QTimer::singleShot(200, this, SLOT(updateCaption()));

                          }
        break;

    }


}

void view1Widget::resizeGL(int w, int h){


       glViewport(0, 0, w, h);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       glMatrixMode(GL_MODELVIEW);
       glLoadIdentity();

}

int view1Widget:: getFigure(){
    return figure;
}
