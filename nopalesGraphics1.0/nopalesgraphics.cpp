#include "nopalesgraphics.h"
#include "ui_nopalesgraphics.h"

#include "camera.h"



nopalesGraphics::nopalesGraphics(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nopalesGraphics )

{

    ui->setupUi(this);

    ui->widget->update();
    ui->spinBox_x->setValue(cursor().pos().x());
    ui->spinBox_y->setValue(cursor().pos().y());
    configureSpinBox(ui->spinBox_x ,-INT_MAX ,+INT_MAX);
    configureSpinBox(ui->spinBox_y ,-INT_MAX ,+INT_MAX);
    
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

void nopalesGraphics::configureSpinBox(QSpinBox *spinBox, int min, int max) const
{

    spinBox -> setMaximum(max);
    spinBox -> setMinimum(min);

}

void nopalesGraphics:: onMouseEvent(const QString &eventName,const QPoint & pos)
{
    ui->spinBox_x->setValue(pos.x());
    ui->widget1->eX=pos.x();
    ui->spinBox_y->setValue(pos.y());
    ui->widget1->eY=pos.y();

    ui->widget1->update();

}
