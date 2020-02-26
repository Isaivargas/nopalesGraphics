#include <stdlib.h>
#include "SplineC.h"
#include <GL/glut.h>


SplineC splineC1;




void init(void)
{
   
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    splineC1.rotateSplineC(2, 180);//Rota el spline 180 grados respecto al eje z
    splineC1.moveSplineC(4,-4,4);//Desplaza la curva spline
    //glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, splineC.getpoitsNum(), splineC.getctrlpoints(0));
    glEnable(GL_MAP1_VERTEX_3);

}

void display(void)
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
    for (i = 0; i <= 30; i++)
        glEvalCoord1f((GLfloat)i / 30.0);
    glEnd();
    glPointSize(5.0);
    glBegin(GL_LINE);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POINTS);
     for (i = 0; i < splineC1.getpoitsNum(); i++)
         glVertex3fv(splineC1.getctrlpoints(i));
     glEnd();

     
     glBegin(GL_LINES);
     glColor3f(1.0, 0.0, 0.0);
     glVertex3f( 8, 0, 0);
     glVertex3f(-8, 0, 0);
     glColor3f(0.0, 1.0, 0.0);
     glVertex3f( 0, 8, 0);
     glVertex3f( 0,-8, 0);
     glColor3f(0.0, 0.0, 1.0);
     glVertex3f( 0, 0, 8);
     glVertex3f( 0, 0,-8);
     glColor3f(1, 1, 1);
     glVertex3f(4, -4, 4);
     glVertex3f(0, 0, 0);
     glEnd();

     glFlush();
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-5.0, 5.0, -5.0 * (GLfloat)h / (GLfloat)w,
            5.0 * (GLfloat)h / (GLfloat)w, -5.0, 5.0);
    else
        glOrtho(-5.0 * (GLfloat)w / (GLfloat)h,
            5.0 * (GLfloat)w / (GLfloat)h, -5.0, 5.0, -5.0, 5.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(35, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(15, 25, 35, 0, 0, 0, 0, 0, 1);
}

/*int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
*/
