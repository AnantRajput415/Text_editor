#include "TextEditor.h"
#include "ui_TextEditor.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFontDialog>

using namespace Ui;

TextEditor::TextEditor(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::TextEditor)
{
    // setupUi(this);
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);

    connect(ui->actionNew, &QAction::triggered, this, &TextEditor::newDocument);
    connect(ui->actionOpen, &QAction::triggered, this, &TextEditor::open);
    connect(ui->actionSave, &QAction::triggered, this, &TextEditor::save);
    connect(ui->actionSave_As, &QAction::triggered, this, &TextEditor::saveAs);
    //connect(ui->actionPrint, &QAction::triggered, this, &TextEditor::print);
    connect(ui->actionExit, &QAction::triggered, this, &TextEditor::exit);
    connect(ui->actionCopy, &QAction::triggered, this, &TextEditor::copy);
    connect(ui->actionCut, &QAction::triggered, this, &TextEditor::cut);
    connect(ui->actionPaste, &QAction::triggered, this, &TextEditor::paste);
    //connect(ui->actionUndo, &QAction::triggered, this, &TextEditor::undo);
    //connect(ui->actionRedo, &QAction::triggered, this, &TextEditor::redo);
    connect(ui->actionFont, &QAction::triggered, this, &TextEditor::selectFont);
    //connect(ui->actionBold, &QAction::triggered, this, &TextEditor::setFontBold);
    //connect(ui->actionUnderline, &QAction::triggered, this, &TextEditor::setFontUnderline);
    //connect(ui->actionItalic, &QAction::triggered, this, &TextEditor::setFontItalic);
    // connect(ui->actionAbout, &QAction::triggered, this, &TextEditor::about);

    // Disable menu actions for unavailable features
#if !defined(QT_PRINTSUPPORT_LIB) || !QT_CONFIG(printer)
    //ui->actionPrint->setEnabled(false);
#endif

#if !QT_CONFIG(clipboard)
    ui->actionCut->setEnabled(false);
    ui->actionCopy->setEnabled(false);
    ui->actionPaste->setEnabled(false);
#endif
}

TextEditor::~TextEditor()
{
    delete ui;
}

void TextEditor::newDocument()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void TextEditor::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void TextEditor::save()
{
    QString fileName;
    // If we don't have a filename from before, get one.
    if (currentFile.isEmpty()) {
        fileName = QFileDialog::getSaveFileName(this, "Save");
        currentFile = fileName;
    }
    else {
        fileName = currentFile;
    }
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

void TextEditor::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

void TextEditor::print()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev, this);
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif // QT_CONFIG(printdialog)
    ui->textEdit->print(&printDev);
#endif // QT_CONFIG(printer)
}

void TextEditor::exit()
{
    QCoreApplication::quit();
}

void TextEditor::copy()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->copy();
#endif
}

void TextEditor::cut()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->cut();
#endif
}

void TextEditor::paste()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->paste();
#endif
}

void TextEditor::undo()
{
    ui->textEdit->undo();
}

void TextEditor::redo()
{
    ui->textEdit->redo();
}

void TextEditor::selectFont()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
        ui->textEdit->setFont(font);
}

// TextEditor::~TextEditor()
// {}
