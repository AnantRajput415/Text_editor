#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TextEditor.h"

class TextEditor : public QMainWindow, public Ui::TextEditorClass
{
    Q_OBJECT

public:
    TextEditor(QWidget *parent = nullptr);
    ~TextEditor();

private:
     
};
