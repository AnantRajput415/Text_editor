#include "TextEditor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ui::TextEditor w;
    w.show();
    return a.exec();
}
