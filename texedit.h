#ifndef TEXEDIT_H
#define TEXEDIT_H

#include <QMainWindow>

#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

// for font
#include <QFontDialog>

#include <QPdfWriter>
QT_BEGIN_NAMESPACE
namespace Ui { class TexEdit; }
QT_END_NAMESPACE

class TexEdit : public QMainWindow
{
    Q_OBJECT

public:
    TexEdit(QWidget *parent = nullptr);
    ~TexEdit();

    // for file menu
    void newFile();
    void open();
    void save();
    void quit();
    void saveAs();

    // for edit menu
    void undo();
    void redo();
    void changeFont();

    // for help menu
    void about();

private:
    Ui::TexEdit *ui;
    QString currentFile = "";
};
#endif // TEXEDIT_H
