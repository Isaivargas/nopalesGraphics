#include "nopalesgraphics.h"
#include "ui_nopalesgraphics.h"
#include <QKeyEvent>

#include "example.h"
#include "ui_example.h"


#include "camera.h"




nopalesGraphics::nopalesGraphics(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nopalesGraphics )

{

    ui->setupUi(this);

   // ui->spinBox_x->setValue(cursor().pos().x());
   // ui->spinBox_y->setValue(cursor().pos().y());
    ui->widget1->update();

    
}





nopalesGraphics::~nopalesGraphics()
{
    delete ui;
}


void nopalesGraphics::on_views_clicked()
{
      Example = new example();
      Example ->show();
}




void nopalesGraphics::mouseDoubleClickEvent(QMouseEvent *event)
{

    onMouseEvent("Double Click", event->pos());
    QWidget::mouseDoubleClickEvent(event);

}

void nopalesGraphics::mouseMoveEvent(QMouseEvent *event)
{
    onMouseEvent("mouse Click", event->pos());
    QWidget::mouseMoveEvent(event);

}

void nopalesGraphics::mousePressEvent(QMouseEvent *event)
{

    onMouseEvent("mouse Press", event->pos());
    QWidget::mousePressEvent(event);

}

void nopalesGraphics::mouseReleaseEvent(QMouseEvent *event)
{

    onMouseEvent("mouse Release", event->pos());
    QWidget::mouseReleaseEvent(event);

}

void nopalesGraphics::keyPressEvent(QKeyEvent *e)
{
    cmd = char (e->key());
}



void nopalesGraphics:: onMouseEvent(const QString & eventName,const QPoint & pos)
{
   // ui->spinBox_x->setValue(pos.x());

    if ("#"==cmd){
        ui->widget1->eX=pos.x();
        ui->widget1->eY=pos.y();

        ui->widget1->update();
        ui->views->update();
     }

}

void nopalesGraphics::on_spinBox_x_valueChanged(int arg1)
{
    //lx=ui->spinBox_x->value();
    ui->widget1->lx=ui->spinBox_x->value();
    ui->widget1->update();
    //ui->spinBox_x->setValue(lx);
}

void nopalesGraphics::on_spinBox_y_valueChanged(int arg1)
{

    ui->widget1->ly=ui->spinBox_y->value();
    ui->widget1->update();
}



void nopalesGraphics::on_spinBox_z_valueChanged(int arg1)
{
    ui->widget1->lz=ui->spinBox_z->value();
    ui->widget1->update();
}

void nopalesGraphics::on_spinBox_eX_valueChanged(int arg1)
{
    ui->widget1->eX=ui->spinBox_eX->value();
    ui->widget1->update();
}

void nopalesGraphics::on_spinBox_eY_valueChanged(int arg1)
{
    ui->widget1->eY=ui->spinBox_eY->value();
    ui->widget1->update();
}

void nopalesGraphics::on_spinBox_eZ_valueChanged(int arg1)
{
    ui->widget1->eZ=ui->spinBox_eZ->value();
    ui->widget1->update();
}




void nopalesGraphics::on_add_point_clicked()
{

     ui->widget1->add_px  = (ui->ispinbox->toPlainText()).toInt();
     ui->widget1->add_py =  (ui->ispinboy->toPlainText()).toInt();
     ui->widget1->add_pz =  (ui->ispinboz->toPlainText()).toInt();
     ui->widget1->update();

}


