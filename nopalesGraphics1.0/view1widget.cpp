#include "view1widget.h"
#include "plane.h"

#include "object.h"
#include "spline.h"
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
      plane Plane;
      //spline Spline;

      glPixelStorei(GL_UNPACK_ALIGNMENT, 1);


      object Object ;

      Object.Draw_Cube(lx,ly,lz);

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
    float ex=1.0;
    float ey=1.0;

    if (eX==0){

             gluLookAt(7, 10, 7, 0, 0, 0, 0, 0,1 );
            }else

    if (eX !=0 )
    {

        if (eX > 0){
             ex=ex+10;
             ey=ey+10;
             gluLookAt(eX, eY, 7, 0, 0, 0, 0, 0,1 );
        }else if( eX < 0)
        {
              ex=eX;
              gluLookAt(eX, 0, 7, 0, 0, 0, 0,0,1 );

        }
    }





}


