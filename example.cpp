#include "example.h"
#include "ui_example.h"



example::example(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::example)
{
    ui->setupUi(this);
    ui->frameViews->update();
}

example::~example()
{
    delete ui;
}


void example::mouseDoubleClickEventViews(QMouseEvent *event)
{

    onMouseEventViews("Double Click", event->pos());


}

void example::mouseMoveEventViews(QMouseEvent *event)
{
    onMouseEventViews("mouse Click", event->pos());

    QWidget::mouseMoveEvent(event);

}

void example::mousePressEventViews(QMouseEvent *event)
{

    onMouseEventViews("mouse Press", event->pos());


}

void example::mouseReleaseEventViews(QMouseEvent *event)
{

    onMouseEventViews("mouse Release", event->pos());


}



void example:: onMouseEventViews(const QString &eventName,const QPoint & pos)
{

    ui->widget1->eX=pos.x();
    ui->widget1->eY=pos.y();
    ui->widget1->update();
    ui->frameViews->update();

}

void example::receiveMessage(const QString &msg)
{

    int opcion =0;
     opcion = (msg).toInt();
     ui->label->setText(msg);


        ui->widget1->figure=opcion;
        ui->frameViews->update();
        ui->widget1->update();
        ui->widget2->figure=opcion;
        ui->widget3->figure=opcion;
        ui->widget3->update();
        ui->widget4->figure=opcion;

}

