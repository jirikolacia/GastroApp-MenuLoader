/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *LBL_TrafficLight;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *LE_Connection;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QCalendarWidget *LunchCalendar;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QComboBox *soup;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *n1;
    QLabel *lunch_type1;
    QComboBox *lunch_type_1;
    QLabel *label_9;
    QComboBox *lunch1;
    QLabel *side_dish_5;
    QComboBox *sidedish1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *n2;
    QLabel *lunch_type2;
    QComboBox *lunch_type_2;
    QLabel *label_11;
    QComboBox *lunch2;
    QLabel *side_dish;
    QComboBox *sidedish2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *n3;
    QLabel *lunch_type3;
    QComboBox *lunch_type_3;
    QLabel *label_12;
    QComboBox *lunch3;
    QLabel *side_dish_2;
    QComboBox *sidedish3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *n5;
    QLabel *lunch_type5;
    QComboBox *lunch_type_5;
    QLabel *label_14;
    QComboBox *lunch5;
    QLabel *side_dish_4;
    QComboBox *sidedish5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *load_menu_day;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *delete_menu;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *PB_New_Meal;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1543, 877);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 155, 33);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(250, 50));
        label_8->setMaximumSize(QSize(250, 50));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/icons/ASTOTEC_logo_250x50.pngHIDE);"));

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        LBL_TrafficLight = new QLabel(centralwidget);
        LBL_TrafficLight->setObjectName(QString::fromUtf8("LBL_TrafficLight"));
        LBL_TrafficLight->setMinimumSize(QSize(0, 150));
        LBL_TrafficLight->setMaximumSize(QSize(16777215, 150));
        LBL_TrafficLight->setStyleSheet(QString::fromUtf8("ximage: url(:/icons/Green.png);\n"
"border:0;\n"
"background-color: rgba( 255, 255, 255, 0% );"));

        verticalLayout_4->addWidget(LBL_TrafficLight);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(14);
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        LE_Connection = new QLabel(centralwidget);
        LE_Connection->setObjectName(QString::fromUtf8("LE_Connection"));
        LE_Connection->setMinimumSize(QSize(40, 0));
        LE_Connection->setMaximumSize(QSize(40, 30));
        LE_Connection->setFont(font1);

        horizontalLayout_4->addWidget(LE_Connection);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LunchCalendar = new QCalendarWidget(centralwidget);
        LunchCalendar->setObjectName(QString::fromUtf8("LunchCalendar"));
        LunchCalendar->setMinimumSize(QSize(500, 400));
        LunchCalendar->setFont(font1);
        LunchCalendar->setStyleSheet(QString::fromUtf8(""));
        LunchCalendar->setGridVisible(true);

        verticalLayout_2->addWidget(LunchCalendar);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        label_10->setFont(font2);

        horizontalLayout_15->addWidget(label_10);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 0));
        pushButton->setMaximumSize(QSize(150, 16777215));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_15->addWidget(pushButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_15);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(600, 400));
        label_5->setMaximumSize(QSize(600, 400));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/icons/Sunny.JPEG);"));

        horizontalLayout_3->addWidget(label_5);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(165, 0));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(12);
        label_7->setFont(font3);

        horizontalLayout_11->addWidget(label_7);

        soup = new QComboBox(centralwidget);
        soup->setObjectName(QString::fromUtf8("soup"));
        soup->setMinimumSize(QSize(250, 0));
        soup->setMaximumSize(QSize(250, 16777215));
        soup->setFont(font2);

        horizontalLayout_11->addWidget(soup);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        n1 = new QLabel(centralwidget);
        n1->setObjectName(QString::fromUtf8("n1"));
        n1->setFont(font3);

        horizontalLayout_7->addWidget(n1);

        lunch_type1 = new QLabel(centralwidget);
        lunch_type1->setObjectName(QString::fromUtf8("lunch_type1"));
        lunch_type1->setFont(font2);

        horizontalLayout_7->addWidget(lunch_type1);

        lunch_type_1 = new QComboBox(centralwidget);
        lunch_type_1->setObjectName(QString::fromUtf8("lunch_type_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lunch_type_1->sizePolicy().hasHeightForWidth());
        lunch_type_1->setSizePolicy(sizePolicy1);
        lunch_type_1->setMinimumSize(QSize(400, 0));
        lunch_type_1->setMaximumSize(QSize(300, 16777215));
        lunch_type_1->setFont(font2);

        horizontalLayout_7->addWidget(lunch_type_1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        horizontalLayout_7->addWidget(label_9);

        lunch1 = new QComboBox(centralwidget);
        lunch1->setObjectName(QString::fromUtf8("lunch1"));
        sizePolicy1.setHeightForWidth(lunch1->sizePolicy().hasHeightForWidth());
        lunch1->setSizePolicy(sizePolicy1);
        lunch1->setMinimumSize(QSize(400, 0));
        lunch1->setMaximumSize(QSize(250, 16777215));
        lunch1->setFont(font2);

        horizontalLayout_7->addWidget(lunch1);

        side_dish_5 = new QLabel(centralwidget);
        side_dish_5->setObjectName(QString::fromUtf8("side_dish_5"));
        side_dish_5->setMaximumSize(QSize(50, 16777215));
        side_dish_5->setFont(font2);

        horizontalLayout_7->addWidget(side_dish_5);

        sidedish1 = new QComboBox(centralwidget);
        sidedish1->setObjectName(QString::fromUtf8("sidedish1"));
        sizePolicy1.setHeightForWidth(sidedish1->sizePolicy().hasHeightForWidth());
        sidedish1->setSizePolicy(sizePolicy1);
        sidedish1->setMinimumSize(QSize(400, 0));
        sidedish1->setMaximumSize(QSize(250, 16777215));
        sidedish1->setFont(font2);

        horizontalLayout_7->addWidget(sidedish1);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        n2 = new QLabel(centralwidget);
        n2->setObjectName(QString::fromUtf8("n2"));
        n2->setFont(font3);

        horizontalLayout_8->addWidget(n2);

        lunch_type2 = new QLabel(centralwidget);
        lunch_type2->setObjectName(QString::fromUtf8("lunch_type2"));
        lunch_type2->setFont(font2);

        horizontalLayout_8->addWidget(lunch_type2);

        lunch_type_2 = new QComboBox(centralwidget);
        lunch_type_2->setObjectName(QString::fromUtf8("lunch_type_2"));
        sizePolicy1.setHeightForWidth(lunch_type_2->sizePolicy().hasHeightForWidth());
        lunch_type_2->setSizePolicy(sizePolicy1);
        lunch_type_2->setMinimumSize(QSize(400, 0));
        lunch_type_2->setMaximumSize(QSize(100, 16777215));
        lunch_type_2->setFont(font2);

        horizontalLayout_8->addWidget(lunch_type_2);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        horizontalLayout_8->addWidget(label_11);

        lunch2 = new QComboBox(centralwidget);
        lunch2->setObjectName(QString::fromUtf8("lunch2"));
        sizePolicy1.setHeightForWidth(lunch2->sizePolicy().hasHeightForWidth());
        lunch2->setSizePolicy(sizePolicy1);
        lunch2->setMinimumSize(QSize(400, 0));
        lunch2->setMaximumSize(QSize(250, 16777215));
        lunch2->setFont(font2);

        horizontalLayout_8->addWidget(lunch2);

        side_dish = new QLabel(centralwidget);
        side_dish->setObjectName(QString::fromUtf8("side_dish"));
        sizePolicy1.setHeightForWidth(side_dish->sizePolicy().hasHeightForWidth());
        side_dish->setSizePolicy(sizePolicy1);
        side_dish->setMinimumSize(QSize(0, 0));
        side_dish->setMaximumSize(QSize(50, 16777215));
        side_dish->setBaseSize(QSize(1, 0));
        side_dish->setFont(font2);

        horizontalLayout_8->addWidget(side_dish);

        sidedish2 = new QComboBox(centralwidget);
        sidedish2->setObjectName(QString::fromUtf8("sidedish2"));
        sizePolicy1.setHeightForWidth(sidedish2->sizePolicy().hasHeightForWidth());
        sidedish2->setSizePolicy(sizePolicy1);
        sidedish2->setMinimumSize(QSize(400, 0));
        sidedish2->setMaximumSize(QSize(250, 16777215));
        sidedish2->setFont(font2);

        horizontalLayout_8->addWidget(sidedish2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        n3 = new QLabel(centralwidget);
        n3->setObjectName(QString::fromUtf8("n3"));
        n3->setFont(font3);

        horizontalLayout_9->addWidget(n3);

        lunch_type3 = new QLabel(centralwidget);
        lunch_type3->setObjectName(QString::fromUtf8("lunch_type3"));
        lunch_type3->setFont(font2);

        horizontalLayout_9->addWidget(lunch_type3);

        lunch_type_3 = new QComboBox(centralwidget);
        lunch_type_3->setObjectName(QString::fromUtf8("lunch_type_3"));
        sizePolicy1.setHeightForWidth(lunch_type_3->sizePolicy().hasHeightForWidth());
        lunch_type_3->setSizePolicy(sizePolicy1);
        lunch_type_3->setMinimumSize(QSize(400, 0));
        lunch_type_3->setMaximumSize(QSize(100, 16777215));
        lunch_type_3->setFont(font2);

        horizontalLayout_9->addWidget(lunch_type_3);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);

        horizontalLayout_9->addWidget(label_12);

        lunch3 = new QComboBox(centralwidget);
        lunch3->setObjectName(QString::fromUtf8("lunch3"));
        sizePolicy1.setHeightForWidth(lunch3->sizePolicy().hasHeightForWidth());
        lunch3->setSizePolicy(sizePolicy1);
        lunch3->setMinimumSize(QSize(400, 0));
        lunch3->setMaximumSize(QSize(250, 16777215));
        lunch3->setFont(font2);

        horizontalLayout_9->addWidget(lunch3);

        side_dish_2 = new QLabel(centralwidget);
        side_dish_2->setObjectName(QString::fromUtf8("side_dish_2"));
        side_dish_2->setMaximumSize(QSize(50, 16777215));
        side_dish_2->setFont(font2);

        horizontalLayout_9->addWidget(side_dish_2);

        sidedish3 = new QComboBox(centralwidget);
        sidedish3->setObjectName(QString::fromUtf8("sidedish3"));
        sizePolicy1.setHeightForWidth(sidedish3->sizePolicy().hasHeightForWidth());
        sidedish3->setSizePolicy(sizePolicy1);
        sidedish3->setMinimumSize(QSize(400, 0));
        sidedish3->setMaximumSize(QSize(250, 16777215));
        sidedish3->setFont(font2);

        horizontalLayout_9->addWidget(sidedish3);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        n5 = new QLabel(centralwidget);
        n5->setObjectName(QString::fromUtf8("n5"));
        n5->setFont(font3);

        horizontalLayout_10->addWidget(n5);

        lunch_type5 = new QLabel(centralwidget);
        lunch_type5->setObjectName(QString::fromUtf8("lunch_type5"));
        lunch_type5->setFont(font2);

        horizontalLayout_10->addWidget(lunch_type5);

        lunch_type_5 = new QComboBox(centralwidget);
        lunch_type_5->setObjectName(QString::fromUtf8("lunch_type_5"));
        sizePolicy1.setHeightForWidth(lunch_type_5->sizePolicy().hasHeightForWidth());
        lunch_type_5->setSizePolicy(sizePolicy1);
        lunch_type_5->setMinimumSize(QSize(400, 0));
        lunch_type_5->setMaximumSize(QSize(100, 16777215));
        lunch_type_5->setFont(font2);

        horizontalLayout_10->addWidget(lunch_type_5);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font2);

        horizontalLayout_10->addWidget(label_14);

        lunch5 = new QComboBox(centralwidget);
        lunch5->setObjectName(QString::fromUtf8("lunch5"));
        sizePolicy1.setHeightForWidth(lunch5->sizePolicy().hasHeightForWidth());
        lunch5->setSizePolicy(sizePolicy1);
        lunch5->setMinimumSize(QSize(400, 0));
        lunch5->setMaximumSize(QSize(250, 16777215));
        lunch5->setFont(font2);

        horizontalLayout_10->addWidget(lunch5);

        side_dish_4 = new QLabel(centralwidget);
        side_dish_4->setObjectName(QString::fromUtf8("side_dish_4"));
        side_dish_4->setMaximumSize(QSize(50, 16777215));
        side_dish_4->setFont(font2);

        horizontalLayout_10->addWidget(side_dish_4);

        sidedish5 = new QComboBox(centralwidget);
        sidedish5->setObjectName(QString::fromUtf8("sidedish5"));
        sizePolicy1.setHeightForWidth(sidedish5->sizePolicy().hasHeightForWidth());
        sidedish5->setSizePolicy(sizePolicy1);
        sidedish5->setMinimumSize(QSize(400, 0));
        sidedish5->setMaximumSize(QSize(250, 16777215));
        sidedish5->setFont(font2);

        horizontalLayout_10->addWidget(sidedish5);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        load_menu_day = new QPushButton(centralwidget);
        load_menu_day->setObjectName(QString::fromUtf8("load_menu_day"));
        load_menu_day->setMinimumSize(QSize(0, 50));
        load_menu_day->setFont(font2);
        load_menu_day->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(load_menu_day);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        delete_menu = new QPushButton(centralwidget);
        delete_menu->setObjectName(QString::fromUtf8("delete_menu"));
        delete_menu->setMinimumSize(QSize(0, 50));
        delete_menu->setFont(font2);
        delete_menu->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(delete_menu);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        PB_New_Meal = new QPushButton(centralwidget);
        PB_New_Meal->setObjectName(QString::fromUtf8("PB_New_Meal"));
        PB_New_Meal->setMinimumSize(QSize(0, 50));
        PB_New_Meal->setFont(font3);

        horizontalLayout->addWidget(PB_New_Meal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_3);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1543, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QString());

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);

        label->setText(QApplication::translate("MainWindow", "Vklad ob\304\233d\305\257", nullptr));
        LBL_TrafficLight->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Stav p\305\231ipojen\303\255:", nullptr));
        LE_Connection->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Dodavatel ob\304\233d\305\257:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "K-Gastro", nullptr));
        label_5->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Pol\303\251vka:", nullptr));
        n1->setText(QApplication::translate("MainWindow", "1.", nullptr));
        lunch_type1->setText(QApplication::translate("MainWindow", "Typ j\303\255dla:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "J\303\255dlo:", nullptr));
        side_dish_5->setText(QApplication::translate("MainWindow", "P\305\231\303\255loha:", nullptr));
        n2->setText(QApplication::translate("MainWindow", "2.", nullptr));
        lunch_type2->setText(QApplication::translate("MainWindow", "Typ j\303\255dla:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "J\303\255dlo:", nullptr));
        side_dish->setText(QApplication::translate("MainWindow", "P\305\231\303\255loha:", nullptr));
        n3->setText(QApplication::translate("MainWindow", "3.", nullptr));
        lunch_type3->setText(QApplication::translate("MainWindow", "Typ j\303\255dla:", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "J\303\255dlo:", nullptr));
        side_dish_2->setText(QApplication::translate("MainWindow", "P\305\231\303\255loha:", nullptr));
        n5->setText(QApplication::translate("MainWindow", "5.", nullptr));
        lunch_type5->setText(QApplication::translate("MainWindow", "Typ j\303\255dla:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "J\303\255dlo:", nullptr));
        side_dish_4->setText(QApplication::translate("MainWindow", "P\305\231\303\255loha:", nullptr));
        load_menu_day->setText(QApplication::translate("MainWindow", "Nahraj ob\304\233dy", nullptr));
        delete_menu->setText(QApplication::translate("MainWindow", "Sma\305\276 menu", nullptr));
        PB_New_Meal->setText(QApplication::translate("MainWindow", "Nov\303\251 j\303\255dlo", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Verze 1.3, Ji\305\231\303\255 Kolacia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
