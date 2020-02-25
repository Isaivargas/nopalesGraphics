#ifndef NOPALESGRAPHICS_H
#define NOPALESGRAPHICS_H

#include <QMainWindow>
#include <QOpenGLWindow>
#include <view.h>

#include <example.h>
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
    QString cmd;
    explicit nopalesGraphics(QWidget *parent = nullptr);
    ~nopalesGraphics();


private slots:

    void on_views_clicked();



    void on_spinBox_x_valueChanged(int arg1);

    void on_spinBox_y_valueChanged(int arg1);

    void on_spinBox_z_valueChanged(int arg1);

    void on_spinBox_eX_valueChanged(int arg1);

    void on_spinBox_eY_valueChanged(int arg1);

    void on_spinBox_eZ_valueChanged(int arg1);





    void on_add_point_clicked();

    void on_add_px_textChanged(const QString &arg1);

    void on_add_py_textChanged(const QString &arg1);

    void on_add_pz_textChanged(const QString &arg1);

protected:

    void  mouseDoubleClickEvent(QMouseEvent * event) override;
    void  mouseMoveEvent(QMouseEvent * event)override;
    void  mousePressEvent(QMouseEvent * event)override;
    void  mouseReleaseEvent(QMouseEvent * event)override;

    void keyPressEvent(QKeyEvent * e);

private:
    Ui::nopalesGraphics *ui;
    QTimer * timer;
    example *Example;



private :

    void onMouseEvent(const QString & eventName,const QPoint & pos);

};

#endif // NOPALESGRAPHICS_H
