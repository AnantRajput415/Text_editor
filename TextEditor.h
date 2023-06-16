#pragma once

#include <QtWidgets/QMainWindow>
#include "qopengl.h"
#include "ui_TextEditor.h"
namespace Ui
{
    class TextEditor;


    class TextEditor : public QMainWindow , public Ui::TextEditorClass
    {
        Q_OBJECT

    public:
        explicit TextEditor(QWidget* parent = nullptr);
        ~TextEditor();

    private slots:
        void newDocument();

        void open();

        void save();

        void saveAs();

        void print();

        void exit();

        void copy();

        void cut();

        void paste();

        void undo();

        void redo();

        void selectFont();

        // void setFontBold(bool bold);
        // 
        // void setFontUnderline(bool underline);
        // 
        // void setFontItalic(bool italic);
        // 
        // void about();



    private:
        Ui::TextEditor* ui;
        QString currentFile;
    };

}
