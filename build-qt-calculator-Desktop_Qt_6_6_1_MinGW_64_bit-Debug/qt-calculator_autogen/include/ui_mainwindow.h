/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button6;
    QPushButton *MemMinus;
    QPushButton *Button8;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Multiply;
    QPushButton *Divide;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Plus;
    QPushButton *Button9;
    QPushButton *MemPlus;
    QPushButton *Button1;
    QPushButton *Button7;
    QPushButton *MemGet;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *Point;
    QPushButton *Minus;
    QPushButton *Result;
    QLineEdit *Display;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(466, 274);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setAutoFillBackground(false);
        Button6->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        MemMinus = new QPushButton(centralwidget);
        MemMinus->setObjectName("MemMinus");
        sizePolicy.setHeightForWidth(MemMinus->sizePolicy().hasHeightForWidth());
        MemMinus->setSizePolicy(sizePolicy);
        MemMinus->setAutoFillBackground(false);
        MemMinus->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(MemMinus, 2, 4, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setAutoFillBackground(false);
        Button8->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setAutoFillBackground(false);
        Button4->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setAutoFillBackground(false);
        Button5->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setAutoFillBackground(false);
        Multiply->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setAutoFillBackground(false);
        Divide->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setAutoFillBackground(false);
        Button2->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setAutoFillBackground(false);
        Button3->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Plus = new QPushButton(centralwidget);
        Plus->setObjectName("Plus");
        sizePolicy.setHeightForWidth(Plus->sizePolicy().hasHeightForWidth());
        Plus->setSizePolicy(sizePolicy);
        Plus->setAutoFillBackground(false);
        Plus->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Plus, 3, 3, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setAutoFillBackground(false);
        Button9->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        MemPlus = new QPushButton(centralwidget);
        MemPlus->setObjectName("MemPlus");
        sizePolicy.setHeightForWidth(MemPlus->sizePolicy().hasHeightForWidth());
        MemPlus->setSizePolicy(sizePolicy);
        MemPlus->setAutoFillBackground(false);
        MemPlus->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(MemPlus, 1, 4, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setAutoFillBackground(false);
        Button1->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setAutoFillBackground(false);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	padding: 5px;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	padding: 5px;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName("MemGet");
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setAutoFillBackground(false);
        MemGet->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setAutoFillBackground(false);
        Clear->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setAutoFillBackground(false);
        Button0->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Point = new QPushButton(centralwidget);
        Point->setObjectName("Point");
        sizePolicy.setHeightForWidth(Point->sizePolicy().hasHeightForWidth());
        Point->setSizePolicy(sizePolicy);
        Point->setAutoFillBackground(false);
        Point->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Point, 4, 2, 1, 1);

        Minus = new QPushButton(centralwidget);
        Minus->setObjectName("Minus");
        sizePolicy.setHeightForWidth(Minus->sizePolicy().hasHeightForWidth());
        Minus->setSizePolicy(sizePolicy);
        Minus->setAutoFillBackground(false);
        Minus->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Minus, 4, 3, 1, 1);

        Result = new QPushButton(centralwidget);
        Result->setObjectName("Result");
        sizePolicy.setHeightForWidth(Result->sizePolicy().hasHeightForWidth());
        Result->setSizePolicy(sizePolicy);
        Result->setAutoFillBackground(false);
        Result->setStyleSheet(QString::fromUtf8("Q PushButton{\n"
"background-color: #C0C0C0;\n"
"padding: 5px;\n"
"	border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(Result, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("color: #fffff;\n"
"background-color: #d3d3d3;\n"
"border: 1px solid gray;\n"
"\n"
""));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        MemMinus->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        MemPlus->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        MemGet->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
