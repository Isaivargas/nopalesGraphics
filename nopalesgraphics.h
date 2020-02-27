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


    void on_buttonPlay_clicked();

    void on_actionSplineA_triggered();

    void on_actionSplineB_triggered();

    void on_actionSplineC_triggered();

    void on_actionNurbsA_triggered();

    void on_actionCube_triggered();

    void on_actionNew_Animation_triggered();

    void on_point_edit_textChanged(const QString &arg1);

    void on_location_SpinBox_px_valueChanged(const QString &arg1);

    void on_location_SpinBox_py_valueChanged(const QString &arg1);

    void on_location_SpinBox_pz_valueChanged(const QString &arg1);

    void on_rotate_SpinBox_px_valueChanged(const QString &arg1);

    void on_rotate_SpinBox_py_valueChanged(const QString &arg1);

    void on_rotate_SpinBox_pz_valueChanged(const QString &arg1);

    void on_angle_valueChanged(const QString &arg1);

    void on_scaleBox_valueChanged(const QString &arg1);

    void on_location_SpinBox_pxNurb_valueChanged(const QString &arg1);

    void on_location_SpinBox_pyNurb_valueChanged(const QString &arg1);

    void on_location_SpinBox_pzNurb_valueChanged(const QString &arg1);

    void on_location_SpinBox_pxNurb_2_valueChanged(const QString &arg1);

    void on_location_SpinBox_pxNurb_3_valueChanged(const QString &arg1);

    void on_location_SpinBox_pxNurb_4_valueChanged(const QString &arg1);

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



signals:
    void sendMessage(const QString & msg);



};

#endif // NOPALESGRAPHICS_H
