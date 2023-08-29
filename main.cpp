#include <QtGui/QApplication>
#include "lecteurs.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    lecteurs w;
    w.show();

    return a.exec();
}
