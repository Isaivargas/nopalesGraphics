#ifndef VIEW1_H
#define VIEW1_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QColor>

#include <QMouseEvent>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>




class view1Widget : public QOpenGLWidget,public QOpenGLFunctions
{
    Q_OBJECT

public:

    view1Widget(QWidget * parent =nullptr);
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;

public:
    int eX,eY,eZ;
    int pX,pY,pZ;
    int upX,upY,upZ;

public:
    int lx,ly,lz;
    float ex=10.0;
    float ey=10.0;

public:
    int add_px, add_py, add_pz;
    int i_px,i_py,i_pz;
    int p_rx,p_ry,p_rz;
    int p_sx,p_sy,p_sz;

private:

    int  getPosicionCamerax(const QPoint & pos);
    void camera();



};


#endif
