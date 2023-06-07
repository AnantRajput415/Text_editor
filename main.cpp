#include "TextEditor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextEditor w;
    w.show();
    return a.exec();
}
