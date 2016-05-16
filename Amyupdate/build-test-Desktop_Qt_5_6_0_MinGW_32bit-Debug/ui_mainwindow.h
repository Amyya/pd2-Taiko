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
    QLabel *yourscore;
    QLabel *finalscore;
    QLabel *gameoverbkg;
    QLabel *pika1;
    QLabel *pika2;
    QLabel *pika3;
    QLabel *pika4;
    QLabel *pika5;
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
        yourscore = new QLabel(centralWidget);
        yourscore->setObjectName(QStringLiteral("yourscore"));
        yourscore->setGeometry(QRect(600, 250, 111, 41));
        yourscore->setStyleSheet(QStringLiteral("color: rgb(162, 29, 230);"));
        yourscore->setTextFormat(Qt::RichText);
        finalscore = new QLabel(centralWidget);
        finalscore->setObjectName(QStringLiteral("finalscore"));
        finalscore->setGeometry(QRect(670, 210, 131, 121));
        gameoverbkg = new QLabel(centralWidget);
        gameoverbkg->setObjectName(QStringLiteral("gameoverbkg"));
        gameoverbkg->setGeometry(QRect(0, 0, 801, 541));
        pika1 = new QLabel(centralWidget);
        pika1->setObjectName(QStringLiteral("pika1"));
        pika1->setGeometry(QRect(130, 380, 91, 101));
        pika1->setScaledContents(true);
        pika2 = new QLabel(centralWidget);
        pika2->setObjectName(QStringLiteral("pika2"));
        pika2->setGeometry(QRect(580, 380, 91, 101));
        pika2->setScaledContents(true);
        pika3 = new QLabel(centralWidget);
        pika3->setObjectName(QStringLiteral("pika3"));
        pika3->setGeometry(QRect(220, 380, 91, 91));
        pika3->setScaledContents(true);
        pika4 = new QLabel(centralWidget);
        pika4->setObjectName(QStringLiteral("pika4"));
        pika4->setGeometry(QRect(487, 380, 91, 111));
        pika4->setScaledContents(true);
        pika5 = new QLabel(centralWidget);
        pika5->setObjectName(QStringLiteral("pika5"));
        pika5->setGeometry(QRect(320, 390, 161, 111));
        pika5->setScaledContents(true);
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
        yourscore->setText(QApplication::translate("Taiko", "Your score:", 0));
        finalscore->setText(QApplication::translate("Taiko", "TextLabel", 0));
        gameoverbkg->setText(QString());
        pika1->setText(QString());
        pika2->setText(QString());
        pika3->setText(QString());
        pika4->setText(QString());
        pika5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Taiko: public Ui_Taiko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
