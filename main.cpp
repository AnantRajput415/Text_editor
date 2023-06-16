#include "texedit.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TexEdit w;
    w.show();
    return a.exec();
}
