#ifndef VIEW3WIDGET_H
#define VIEW3WIDGET_H


#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QColor>

class view3Widget : public QOpenGLWidget,public QOpenGLFunctions
{
    Q_OBJECT

public:

   view3Widget(QWidget * parent =nullptr);

protected:


    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;

private:
    void  qColorToRGBView3(const QColor & C,float &r,float &g ,float &b)const;
    float normalizaView3(float val, float min , float max) const;

};

#endif // OGLWIDGET_H
