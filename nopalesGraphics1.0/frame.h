#ifndef FRAME_H
#define FRAME_H
#include <QMouseEvent>
#include <QFrame>



namespace Ui {
  class frame;
}


class frame: public QFrame{

    Q_OBJECT

public :
 explicit frame(QFrame * parent = nullptr);

protected:
    void mouseDoubleClickEvent(QMouseEvent * event);
    void mouseMoveEvent       (QMouseEvent * event);
    void mousePressEvent      (QMouseEvent * event);
    void mouseReleaseEvent    (QMouseEvent * event);
private:
    void onMouseEvent(const QString &eventName, const QPoint & pos);
};

#endif // FRAME_H
