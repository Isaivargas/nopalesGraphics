#ifndef ANIMATION_H
#define ANIMATION_H

#include <GL/glut.h>


typedef class animation {

public:

    GLint pointsNum ;

private:
    GLfloat ctrlpoints[100][3]; //Maximo 100 puntos para describir una curva spline
     //Numero de puntos de control usados para decribir la curva spline
public:

    void drawAnimation();

    animation();//Constructor
    /*Agregar un punto a la curva spline, se tiene que especificar
    las cordenada x, y, z que indiquen donde se posicionara el nuevo
    punto de control mandando las cordenadas como parametros*/
    void addPointAnimation(GLfloat p_x, GLfloat p_y, GLfloat p_z);
    /*Mover todas la curva spline, se tiene que espesificar cual sera
    el desplazamiento en cada eje, mandando como parametros las
    cordenandas en x, y, z */
    void moveAnimation(GLfloat p_x, GLfloat p_y, GLfloat p_z);
    /*Mover un solo punto de la curva spline, se tiene que espesificar
    cual sera el desplazamiento en cada eje, mandando como parametros las
    cordenandas en x, y, z */
    void moveAnimationPoint(GLfloat p_x, GLfloat p_y, GLfloat p_z, int i);
    /*Rota la curva spline respecto a uno de los 3 ejes x,y,z, se debe mandar como parametro
    alguno de los siguientes valores: para el eje x = 0, para el eje y = 1 y para el eje z = 2
    para espesificar sobre que eje se va a rotar y el angulo que sera rotado*/

    GLfloat* getctrlpoints(GLint i);
    /*Regresa la cantidad de puntos de control usados para describir el spline*/
    GLint getpoitsNum();

} animation;

#endif // ANIMATION_H
