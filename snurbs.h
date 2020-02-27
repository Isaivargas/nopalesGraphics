
#define SNURBS_H

#define SplineC_h
#include <GL/glut.h>



class SupNURBS {
private:
    GLfloat ctrlpoints[4][4][3] = {
 {{-1.5, 1.0, -1.5}, {-0.5, 1.0,-1.5 }, {0.5, 1.0, -1.5 }, {1.5, 1.0,-1.5}},
 {{-1.5, 1.0, -0.5}, {-0.5, 2.0,-0.5 }, {0.5, 2.0, -0.5 }, {1.5, 1.0,-0.5}},
 {{-1.5, 1.0,  0.5}, {-0.5, 2.0, 0.5 }, {0.5, 2.0,  0.5 }, {1.5, 1.0, 0.5}},
 {{-1.5, 1.0,  1.5}, {-0.5, 1.0, 1.5 }, {0.5, 1.0,  1.5 }, {1.5, 1.0, 1.5}}
    };
    GLint pointsNumU; //Numero de puntos de control usados para decribir la curva
    GLint pointsNumV;
public:
    void drawNurbs();

    SupNURBS();//Constructor
    /*Agregar un punto a la curva spline, se tiene que especificar
    las cordenada x, y, z que indiquen donde se posicionara el nuevo
    punto de control mandando las cordenadas como parametros*/
    void addPoint(GLfloat p_x, GLfloat p_y, GLfloat p_z);
    /*Mover todas la curva spline, se tiene que espesificar cual sera
    el desplazamiento en cada eje, mandando como parametros las
    cordenandas en x, y, z */
    void moveSplineC(GLfloat p_x, GLfloat p_y, GLfloat p_z);
    /*Mover un solo punto de la curva spline, se tiene que espesificar
    cual sera el desplazamiento en cada eje, mandando como parametros las
    cordenandas en x, y, z */
    void moveSplinePoint(GLfloat p_x, GLfloat p_y, GLfloat p_z, GLint i, GLint j);
    /*Rota la curva spline respecto a uno de los 3 ejes x,y,z, se debe mandar como parametro
    alguno de los siguientes valores: para el eje x = 0, para el eje y = 1 y para el eje z = 2
    para espesificar sobre que eje se va a rotar y el angulo que sera rotado*/
    void rotateSplineC(GLint axis, GLfloat angle);
    /*Regresa un apuntador al erreglo que contiene los puntos de control,
    se tiene que espesificar cual punto se quiere tener mandando
    como parametro su numero en el arreglo */
     void scaleSplineC(GLfloat angle);
    GLfloat* getctrlpoints(GLint i, GLint j);
    /*Regresa la cantidad de puntos de control usados para describir el spline*/
    GLint getpoitsNum();

} ;
