#include "animation.h"

animation::animation()
{


}



void animation::addPointAnimation(GLfloat p_x, GLfloat p_y,GLfloat p_z) {


    ctrlpoints[pointsNum][0] = p_x;
    ctrlpoints[pointsNum][1] = p_y;
    ctrlpoints[pointsNum][2] = p_z;
    pointsNum = pointsNum+1;

}

void animation::moveAnimation(GLfloat p_x, GLfloat p_y, GLfloat p_z) {

    GLint i;
    for (i = 0; i < pointsNum; i++) {
        ctrlpoints[i][0] = ctrlpoints[i][0] + p_x;
        ctrlpoints[i][1] = ctrlpoints[i][1] + p_y;
        ctrlpoints[i][2] = ctrlpoints[i][2] + p_z;
    }

}

void animation:: moveAnimationPoint(GLfloat p_x, GLfloat p_y, GLfloat p_z, int i) {
    ctrlpoints[i][0] = ctrlpoints[i][0] + p_x;
    ctrlpoints[i][1] = ctrlpoints[i][1] + p_y;
    ctrlpoints[i][2] = ctrlpoints[i][2] + p_z;
}



GLfloat* animation::getctrlpoints(GLint i) {
    return ctrlpoints[i];
}



GLint animation::getpoitsNum() {
    return pointsNum;
}


void animation::drawAnimation()
{

    int i;
    //glColor3f(0.0, 1.0, 0.0);
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 4,4,&ctrlpoints[0][0]);
    glEnable(GL_MAP1_VERTEX_3);
        //glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_LINE_STRIP);
        for (i = 0; i <= 30; i++)
            glEvalCoord1f((GLfloat)i / 30.0);
        glEnd();
        /* The following code displays the control points as dots. */

        glPointSize(5.0);
        glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POINTS);
        for (i = 0; i <=4; i++)
            glVertex3fv(ctrlpoints[i]);
        glEnd();
        glFlush();

}
