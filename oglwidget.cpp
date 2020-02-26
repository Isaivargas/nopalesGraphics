#include "oglwidget.h"

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QSurfaceFormat>
#include <QVBoxLayout>

OGLWidget:: OGLWidget(QWidget *parent1):QOpenGLWidget {parent1} {


}



void  OGLWidget:: initializeGL() {

    float r,g,b,a=1.0f;
    initializeOpenGLFunctions();
    qColorToRGB(Qt::black,r,g,b);
    glClearColor(r,g,b,a);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE );
    glEnable(GL_COLOR_MATERIAL);
}

void  OGLWidget:: paintGL(){


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


      glLoadIdentity();

      glShadeModel(GL_SMOOTH);
      glEnable(GL_DEPTH_BUFFER_BIT);
      glBegin(GL_POLYGON);

      glColor3f( 1.0, 1.0, 1.0 );     glVertex3f( -0.5, 0.5, 0.5 );
      glColor3f( 1.0, 1.0, 1.0 );     glVertex3f( -0.5, 0.5, -0.5 );
      glColor3f( 1.0, 1.0, 1.0 );     glVertex3f( 0.5, -0.5,0.5);
      glColor3f( 1.0, 1.0, 1.0 );     glVertex3f( 0.5, -0.5, -0.5);

      glColor3f( 0.0, 0.0, 0.0 );     glVertex3f( -0.5, -0.5, 0.5 );
      glColor3f( 0.0, 0.0, 0.0 );     glVertex3f( -0.5, -0.5, -0.5 );
      glColor3f( 0.0, 0.0, 0.0 );     glVertex3f(-0.5, 0.5, 0.5 );      // P3 es azul
      glColor3f( 0.0, 0.0, 0.0 );     glVertex3f( -0.5, 0.5, -0.5 );      // P4 es morado
      glEnd();


}

void  OGLWidget:: resizeGL(int w, int h) {

       glViewport(0,0,w,h);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       glMatrixMode(GL_MODELVIEW);
       glLoadIdentity();
}

void OGLWidget::qColorToRGB(const QColor &C, float &r, float &g, float &b) const{

   r = normaliza_0_1(C.red(),1.0f,255.0f);
   g = normaliza_0_1(C.green(),1.0f,255.0f);
   b = normaliza_0_1(C.blue() ,1.0f,255.0f);

}

float OGLWidget::normaliza_0_1(float val, float min, float max) const
{
   return (val - min )/ (max - min);
}
