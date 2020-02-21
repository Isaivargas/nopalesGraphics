#ifndef NOPALESGRAPHICS_H
#define NOPALESGRAPHICS_H

#include <QMainWindow>
#include <QOpenGLWindow>
#include <view.h>

#include <views.h>
#include <QTimer>

#include <QMouseEvent>


namespace Ui {
class nopalesGraphics;
}

class QSpinBox;

class nopalesGraphics : public QMainWindow
{
    Q_OBJECT



public:
    explicit nopalesGraphics(QWidget *parent = nullptr);
    ~nopalesGraphics();


private slots:

    void on_views_clicked();



protected:

    void  mouseDoubleClickEvent(QMouseEvent * event) override;
    void  mouseMoveEvent(QMouseEvent * event)override;
    void  mousePressEvent(QMouseEvent * event)override;
    void  mouseReleaseEvent(QMouseEvent * event)override;

private:
    Ui::nopalesGraphics *ui;
    QTimer * timer;
    example *Example;



private :
    void configureSpinBox(QSpinBox *spinBox,int min, int max) const;
    void onMouseEvent(const QString &eventName,const QPoint & pos);

};

#endif // NOPALESGRAPHICS_H
