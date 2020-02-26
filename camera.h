#ifndef CAMERA_H
#define CAMERA_H

#include <QMouseEvent>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <QMouseEvent>


class camera
{

int eX;

public:
    camera();
    void setPosicion(const QPoint & pos);
    void getPosicion();
    void look();


};

#endif // CAMERA_H
