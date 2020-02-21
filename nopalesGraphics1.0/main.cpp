#include "nopalesgraphics.h"
#include "view1widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");

    nopalesGraphics w;
    w.show();


    return a.exec();
}
