/********************************************************************************
** Form generated from reading UI file 'texedit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXEDIT_H
#define UI_TEXEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TexEdit
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QAction *actionSave_As;
    QAction *actionQuit_2;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTextEdit *u_Text;
    QMenuBar *menubar;
    QMenu *menuSave;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TexEdit)
    {
        if (TexEdit->objectName().isEmpty())
            TexEdit->setObjectName(QStringLiteral("TexEdit"));
        TexEdit->resize(800, 600);
        actionNew = new QAction(TexEdit);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(TexEdit);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(TexEdit);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionQuit = new QAction(TexEdit);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionUndo = new QAction(TexEdit);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(TexEdit);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionFont = new QAction(TexEdit);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        actionSave_As = new QAction(TexEdit);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionQuit_2 = new QAction(TexEdit);
        actionQuit_2->setObjectName(QStringLiteral("actionQuit_2"));
        actionAbout = new QAction(TexEdit);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(TexEdit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        u_Text = new QTextEdit(centralwidget);
        u_Text->setObjectName(QStringLiteral("u_Text"));
        u_Text->setGeometry(QRect(0, 0, 801, 541));
        TexEdit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TexEdit);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuSave = new QMenu(menubar);
        menuSave->setObjectName(QStringLiteral("menuSave"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        TexEdit->setMenuBar(menubar);
        statusbar = new QStatusBar(TexEdit);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TexEdit->setStatusBar(statusbar);

        menubar->addAction(menuSave->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuSave->addAction(actionNew);
        menuSave->addAction(actionOpen);
        menuSave->addAction(actionSave);
        menuSave->addAction(actionSave_As);
        menuSave->addAction(actionQuit_2);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFont);
        menuHelp->addAction(actionAbout);

        retranslateUi(TexEdit);

        QMetaObject::connectSlotsByName(TexEdit);
    } // setupUi

    void retranslateUi(QMainWindow *TexEdit)
    {
        TexEdit->setWindowTitle(QApplication::translate("TexEdit", "TexEdit", nullptr));
        actionNew->setText(QApplication::translate("TexEdit", "New", nullptr));
        actionOpen->setText(QApplication::translate("TexEdit", "Open ", nullptr));
        actionSave->setText(QApplication::translate("TexEdit", "Save", nullptr));
        actionQuit->setText(QApplication::translate("TexEdit", "Quit", nullptr));
        actionUndo->setText(QApplication::translate("TexEdit", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("TexEdit", "Redo", nullptr));
        actionFont->setText(QApplication::translate("TexEdit", "Font", nullptr));
        actionSave_As->setText(QApplication::translate("TexEdit", "Save As", nullptr));
        actionQuit_2->setText(QApplication::translate("TexEdit", "Quit", nullptr));
        actionAbout->setText(QApplication::translate("TexEdit", "About", nullptr));
        menuSave->setTitle(QApplication::translate("TexEdit", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("TexEdit", "Edit", nullptr));
        menuHelp->setTitle(QApplication::translate("TexEdit", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TexEdit: public Ui_TexEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXEDIT_H
