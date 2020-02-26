#ifndef VIEW4WIDGET_H
#define VIEW4WIDGET_H


#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QColor>

class view4Widget : public QOpenGLWidget,public QOpenGLFunctions
{
    Q_OBJECT

public:

    view4Widget(QWidget * parent =nullptr);

protected:


    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;

private:
    void  qColorToRGBView4(const QColor & C,float &r,float &g ,float &b)const;
    float normalizaView4(float val, float min , float max) const;


public:
    int figure;

};

#endif // OGLWIDGET_H
