#ifndef VIEW_H
#define VIEW_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QColor>




class VIEWWidget : public QOpenGLWidget,public QOpenGLFunctions
{
    Q_OBJECT

public:

    VIEWWidget(QWidget * parent =nullptr);

protected:

    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;

private:
    void  qColorToRGB(const QColor & C,float &r,float &g ,float &b)const;
    float normaliza_0_1(float val, float min , float max) const;

};

#endif // OGLWIDGET_H
