#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QWidget>

#include <example.h>
#include <QTimer>

#include <QMouseEvent>

namespace Ui {
class example;
}

class example : public QWidget
{
    Q_OBJECT

public:
    explicit example(QWidget *parent = 0);
    ~example();

protected:

    void  mouseDoubleClickEventViews(QMouseEvent * event) ;
    void  mouseMoveEventViews(QMouseEvent * event);
    void  mousePressEventViews(QMouseEvent * event);
    void  mouseReleaseEventViews(QMouseEvent * event);

private :
    void onMouseEventViews(const QString &eventName,const QPoint & pos);


private:
    Ui::example *ui;
};

#endif // EXAMPLE_H
