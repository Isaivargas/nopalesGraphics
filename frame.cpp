#include "frame.h"
#include <QFrame>
Frame::frame(QFrame * parent):
    QFrame(parent),
    ui(new ui::frame)
{

   ui->setupUi(this);

}

void frame::mouseDoubleClickEvent(QMouseEvent *event)
{
  onMouseEvent("DoubleClick",event ->pos());
  Qframe:: mouseDoubleClickEvent(event);
}

void frame::mouseMoveEvent(QMouseEvent *event)
{
    onMouseEvent("DoubleClick",event ->pos());

}

void frame::mousePressEvent(QMouseEvent *event)
{

}

void frame::mouseReleaseEvent(QMouseEvent *event)
{

}

void frame:: onMouseEvent(const QString &eventName, const QPoint & pos)
{


}


