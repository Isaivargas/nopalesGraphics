#ifndef VIEW2WIDGET_H
#define VIEW2WIDGET_H


#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QColor>

class view2Widget : public QOpenGLWidget,public QOpenGLFunctions
{
    Q_OBJECT

public:

    view2Widget(QWidget * parent =nullptr);

protected:


    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;

private:
    void  qColorToRGBView2(const QColor & C,float &r,float &g ,float &b)const;
    float normalizaView2(float val, float min , float max) const;

};

#endif
