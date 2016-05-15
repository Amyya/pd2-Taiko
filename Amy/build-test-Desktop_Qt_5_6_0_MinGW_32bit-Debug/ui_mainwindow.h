/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Taiko
{
public:
    QWidget *centralWidget;
    QPushButton *Start;
    QPushButton *Exit;
    QLabel *Time;
    QLabel *Score;
    QLabel *BlueVolley;
    QLabel *Z_text;
    QLabel *X_text;
    QLCDNumber *Time_LCD;
    QLCDNumber *Score_LCD;
    QLabel *Pika;
    QLabel *Volley;
    QPushButton *Restart;
    QPushButton *GameOver;
    QLabel *RedVolley;
    QLabel *finalscore;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Taiko)
    {
        if (Taiko->objectName().isEmpty())
            Taiko->setObjectName(QStringLiteral("Taiko"));
        Taiko->resize(803, 583);
        centralWidget = new QWidget(Taiko);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Start = new QPushButton(centralWidget);
        Start->setObjectName(QStringLiteral("Start"));
        Start->setGeometry(QRect(190, 440, 131, 61));
        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(440, 440, 121, 61));
        Time = new QLabel(centralWidget);
        Time->setObjectName(QStringLiteral("Time"));
        Time->setGeometry(QRect(320, 0, 141, 71));
        Score = new QLabel(centralWidget);
        Score->setObjectName(QStringLiteral("Score"));
        Score->setGeometry(QRect(550, 0, 131, 71));
        BlueVolley = new QLabel(centralWidget);
        BlueVolley->setObjectName(QStringLiteral("BlueVolley"));
        BlueVolley->setGeometry(QRect(730, 420, 71, 71));
        BlueVolley->setPixmap(QPixmap(QString::fromUtf8("../build-Taiko-Desktop_Qt_5_6_0_MinGW_32bit-Debug/image/volleyball.png")));
        BlueVolley->setScaledContents(true);
        Z_text = new QLabel(centralWidget);
        Z_text->setObjectName(QStringLiteral("Z_text"));
        Z_text->setGeometry(QRect(70, 424, 61, 61));
        X_text = new QLabel(centralWidget);
        X_text->setObjectName(QStringLiteral("X_text"));
        X_text->setGeometry(QRect(705, 425, 31, 61));
        Time_LCD = new QLCDNumber(centralWidget);
        Time_LCD->setObjectName(QStringLiteral("Time_LCD"));
        Time_LCD->setGeometry(QRect(310, 0, 181, 71));
        Score_LCD = new QLCDNumber(centralWidget);
        Score_LCD->setObjectName(QStringLiteral("Score_LCD"));
        Score_LCD->setGeometry(QRect(540, 0, 341, 71));
        Pika = new QLabel(centralWidget);
        Pika->setObjectName(QStringLiteral("Pika"));
        Pika->setGeometry(QRect(70, 30, 381, 341));
        Pika->setPixmap(QPixmap(QString::fromUtf8("../build-Taiko-Desktop_Qt_5_6_0_MinGW_32bit-Debug/image/025Pikachu_XY_anime_3.png")));
        Volley = new QLabel(centralWidget);
        Volley->setObjectName(QStringLiteral("Volley"));
        Volley->setGeometry(QRect(380, 160, 251, 201));
        Volley->setPixmap(QPixmap(QString::fromUtf8("../build-Taiko-Desktop_Qt_5_6_0_MinGW_32bit-Debug/image/volleyball-ball-4235.png")));
        Restart = new QPushButton(centralWidget);
        Restart->setObjectName(QStringLiteral("Restart"));
        Restart->setGeometry(QRect(500, 400, 151, 71));
        GameOver = new QPushButton(centralWidget);
        GameOver->setObjectName(QStringLiteral("GameOver"));
        GameOver->setGeometry(QRect(670, 400, 141, 71));
        RedVolley = new QLabel(centralWidget);
        RedVolley->setObjectName(QStringLiteral("RedVolley"));
        RedVolley->setGeometry(QRect(0, 414, 71, 71));
        RedVolley->setPixmap(QPixmap(QString::fromUtf8("../build-Taiko-Desktop_Qt_5_6_0_MinGW_32bit-Debug/image/QH6L2w0a_400x400.png")));
        RedVolley->setScaledContents(true);
        finalscore = new QLabel(centralWidget);
        finalscore->setObjectName(QStringLiteral("finalscore"));
        finalscore->setGeometry(QRect(620, 170, 161, 131));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(530, 200, 111, 71));
        Taiko->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Taiko);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 803, 24));
        Taiko->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Taiko);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Taiko->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Taiko);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Taiko->setStatusBar(statusBar);

        retranslateUi(Taiko);

        QMetaObject::connectSlotsByName(Taiko);
    } // setupUi

    void retranslateUi(QMainWindow *Taiko)
    {
        Taiko->setWindowTitle(QApplication::translate("Taiko", "Taiko", 0));
        Start->setText(QApplication::translate("Taiko", "Start", 0));
        Exit->setText(QApplication::translate("Taiko", "Exit", 0));
        Time->setText(QString());
        Score->setText(QString());
        BlueVolley->setText(QString());
        Z_text->setText(QString());
        X_text->setText(QString());
        Pika->setText(QString());
        Volley->setText(QString());
        Restart->setText(QApplication::translate("Taiko", "Restart", 0));
        GameOver->setText(QApplication::translate("Taiko", "Exit", 0));
        RedVolley->setText(QString());
        finalscore->setText(QString());
        label_2->setText(QApplication::translate("Taiko", "Your score:", 0));
    } // retranslateUi

};

namespace Ui {
    class Taiko: public Ui_Taiko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
