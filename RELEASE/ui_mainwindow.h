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
#include <QtWidgets/QLineEdit>
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
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QCalendarWidget *LunchCalendar;
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
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *load_menu_day;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *delete_menu;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_new_lunch;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *lunch_type_new_lunch;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *load_new_lunch;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
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
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(250, 50));
        label_8->setMaximumSize(QSize(250, 50));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/icons/ASTOTEC_logo_250x50.png);"));

        verticalLayout_3->addWidget(label_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_15->addWidget(label_10);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(50, 0));
        pushButton->setMaximumSize(QSize(50, 16777215));
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


        verticalLayout_3->addLayout(horizontalLayout_15);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout_16->addLayout(verticalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_12->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        horizontalLayout_16->addLayout(horizontalLayout_12);

        LunchCalendar = new QCalendarWidget(centralwidget);
        LunchCalendar->setObjectName(QString::fromUtf8("LunchCalendar"));

        horizontalLayout_16->addWidget(LunchCalendar);


        verticalLayout_4->addLayout(horizontalLayout_16);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setPointSize(12);
        label_7->setFont(font1);

        horizontalLayout_11->addWidget(label_7);

        soup = new QComboBox(centralwidget);
        soup->setObjectName(QString::fromUtf8("soup"));
        soup->setMinimumSize(QSize(250, 0));
        soup->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_11->addWidget(soup);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        n1 = new QLabel(centralwidget);
        n1->setObjectName(QString::fromUtf8("n1"));
        n1->setFont(font1);

        horizontalLayout_7->addWidget(n1);

        lunch_type1 = new QLabel(centralwidget);
        lunch_type1->setObjectName(QString::fromUtf8("lunch_type1"));

        horizontalLayout_7->addWidget(lunch_type1);

        lunch_type_1 = new QComboBox(centralwidget);
        lunch_type_1->setObjectName(QString::fromUtf8("lunch_type_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lunch_type_1->sizePolicy().hasHeightForWidth());
        lunch_type_1->setSizePolicy(sizePolicy);
        lunch_type_1->setMinimumSize(QSize(400, 0));
        lunch_type_1->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_7->addWidget(lunch_type_1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        lunch1 = new QComboBox(centralwidget);
        lunch1->setObjectName(QString::fromUtf8("lunch1"));
        sizePolicy.setHeightForWidth(lunch1->sizePolicy().hasHeightForWidth());
        lunch1->setSizePolicy(sizePolicy);
        lunch1->setMinimumSize(QSize(400, 0));
        lunch1->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_7->addWidget(lunch1);

        side_dish_5 = new QLabel(centralwidget);
        side_dish_5->setObjectName(QString::fromUtf8("side_dish_5"));
        side_dish_5->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(side_dish_5);

        sidedish1 = new QComboBox(centralwidget);
        sidedish1->setObjectName(QString::fromUtf8("sidedish1"));
        sizePolicy.setHeightForWidth(sidedish1->sizePolicy().hasHeightForWidth());
        sidedish1->setSizePolicy(sizePolicy);
        sidedish1->setMinimumSize(QSize(400, 0));
        sidedish1->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_7->addWidget(sidedish1);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        n2 = new QLabel(centralwidget);
        n2->setObjectName(QString::fromUtf8("n2"));
        n2->setFont(font1);

        horizontalLayout_8->addWidget(n2);

        lunch_type2 = new QLabel(centralwidget);
        lunch_type2->setObjectName(QString::fromUtf8("lunch_type2"));

        horizontalLayout_8->addWidget(lunch_type2);

        lunch_type_2 = new QComboBox(centralwidget);
        lunch_type_2->setObjectName(QString::fromUtf8("lunch_type_2"));
        sizePolicy.setHeightForWidth(lunch_type_2->sizePolicy().hasHeightForWidth());
        lunch_type_2->setSizePolicy(sizePolicy);
        lunch_type_2->setMinimumSize(QSize(400, 0));
        lunch_type_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(lunch_type_2);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        lunch2 = new QComboBox(centralwidget);
        lunch2->setObjectName(QString::fromUtf8("lunch2"));
        sizePolicy.setHeightForWidth(lunch2->sizePolicy().hasHeightForWidth());
        lunch2->setSizePolicy(sizePolicy);
        lunch2->setMinimumSize(QSize(400, 0));
        lunch2->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_8->addWidget(lunch2);

        side_dish = new QLabel(centralwidget);
        side_dish->setObjectName(QString::fromUtf8("side_dish"));
        sizePolicy.setHeightForWidth(side_dish->sizePolicy().hasHeightForWidth());
        side_dish->setSizePolicy(sizePolicy);
        side_dish->setMinimumSize(QSize(0, 0));
        side_dish->setMaximumSize(QSize(50, 16777215));
        side_dish->setBaseSize(QSize(1, 0));

        horizontalLayout_8->addWidget(side_dish);

        sidedish2 = new QComboBox(centralwidget);
        sidedish2->setObjectName(QString::fromUtf8("sidedish2"));
        sizePolicy.setHeightForWidth(sidedish2->sizePolicy().hasHeightForWidth());
        sidedish2->setSizePolicy(sizePolicy);
        sidedish2->setMinimumSize(QSize(400, 0));
        sidedish2->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_8->addWidget(sidedish2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        n3 = new QLabel(centralwidget);
        n3->setObjectName(QString::fromUtf8("n3"));
        n3->setFont(font1);

        horizontalLayout_9->addWidget(n3);

        lunch_type3 = new QLabel(centralwidget);
        lunch_type3->setObjectName(QString::fromUtf8("lunch_type3"));

        horizontalLayout_9->addWidget(lunch_type3);

        lunch_type_3 = new QComboBox(centralwidget);
        lunch_type_3->setObjectName(QString::fromUtf8("lunch_type_3"));
        sizePolicy.setHeightForWidth(lunch_type_3->sizePolicy().hasHeightForWidth());
        lunch_type_3->setSizePolicy(sizePolicy);
        lunch_type_3->setMinimumSize(QSize(400, 0));
        lunch_type_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(lunch_type_3);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_9->addWidget(label_12);

        lunch3 = new QComboBox(centralwidget);
        lunch3->setObjectName(QString::fromUtf8("lunch3"));
        sizePolicy.setHeightForWidth(lunch3->sizePolicy().hasHeightForWidth());
        lunch3->setSizePolicy(sizePolicy);
        lunch3->setMinimumSize(QSize(400, 0));
        lunch3->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_9->addWidget(lunch3);

        side_dish_2 = new QLabel(centralwidget);
        side_dish_2->setObjectName(QString::fromUtf8("side_dish_2"));
        side_dish_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(side_dish_2);

        sidedish3 = new QComboBox(centralwidget);
        sidedish3->setObjectName(QString::fromUtf8("sidedish3"));
        sizePolicy.setHeightForWidth(sidedish3->sizePolicy().hasHeightForWidth());
        sidedish3->setSizePolicy(sizePolicy);
        sidedish3->setMinimumSize(QSize(400, 0));
        sidedish3->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_9->addWidget(sidedish3);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        n5 = new QLabel(centralwidget);
        n5->setObjectName(QString::fromUtf8("n5"));
        n5->setFont(font1);

        horizontalLayout_10->addWidget(n5);

        lunch_type5 = new QLabel(centralwidget);
        lunch_type5->setObjectName(QString::fromUtf8("lunch_type5"));

        horizontalLayout_10->addWidget(lunch_type5);

        lunch_type_5 = new QComboBox(centralwidget);
        lunch_type_5->setObjectName(QString::fromUtf8("lunch_type_5"));
        sizePolicy.setHeightForWidth(lunch_type_5->sizePolicy().hasHeightForWidth());
        lunch_type_5->setSizePolicy(sizePolicy);
        lunch_type_5->setMinimumSize(QSize(400, 0));
        lunch_type_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(lunch_type_5);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_10->addWidget(label_14);

        lunch5 = new QComboBox(centralwidget);
        lunch5->setObjectName(QString::fromUtf8("lunch5"));
        sizePolicy.setHeightForWidth(lunch5->sizePolicy().hasHeightForWidth());
        lunch5->setSizePolicy(sizePolicy);
        lunch5->setMinimumSize(QSize(400, 0));
        lunch5->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_10->addWidget(lunch5);

        side_dish_4 = new QLabel(centralwidget);
        side_dish_4->setObjectName(QString::fromUtf8("side_dish_4"));
        side_dish_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(side_dish_4);

        sidedish5 = new QComboBox(centralwidget);
        sidedish5->setObjectName(QString::fromUtf8("sidedish5"));
        sizePolicy.setHeightForWidth(sidedish5->sizePolicy().hasHeightForWidth());
        sidedish5->setSizePolicy(sizePolicy);
        sidedish5->setMinimumSize(QSize(400, 0));
        sidedish5->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_10->addWidget(sidedish5);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        load_menu_day = new QPushButton(centralwidget);
        load_menu_day->setObjectName(QString::fromUtf8("load_menu_day"));
        load_menu_day->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_3->addWidget(load_menu_day);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        delete_menu = new QPushButton(centralwidget);
        delete_menu->setObjectName(QString::fromUtf8("delete_menu"));
        delete_menu->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_3->addWidget(delete_menu);


        horizontalLayout_13->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(11);
        label_2->setFont(font2);

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);


        verticalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(80, 16777215));
        label_4->setFont(font2);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout);

        lineEdit_new_lunch = new QLineEdit(centralwidget);
        lineEdit_new_lunch->setObjectName(QString::fromUtf8("lineEdit_new_lunch"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_new_lunch->sizePolicy().hasHeightForWidth());
        lineEdit_new_lunch->setSizePolicy(sizePolicy1);
        lineEdit_new_lunch->setMinimumSize(QSize(0, 20));
        lineEdit_new_lunch->setMaximumSize(QSize(400, 20));

        verticalLayout_9->addWidget(lineEdit_new_lunch);


        horizontalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(120, 16777215));
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_2);

        lunch_type_new_lunch = new QComboBox(centralwidget);
        lunch_type_new_lunch->setObjectName(QString::fromUtf8("lunch_type_new_lunch"));
        lunch_type_new_lunch->setMaximumSize(QSize(120, 16777215));

        verticalLayout_8->addWidget(lunch_type_new_lunch);


        horizontalLayout_6->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        load_new_lunch = new QPushButton(centralwidget);
        load_new_lunch->setObjectName(QString::fromUtf8("load_new_lunch"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(load_new_lunch->sizePolicy().hasHeightForWidth());
        load_new_lunch->setSizePolicy(sizePolicy2);
        load_new_lunch->setMinimumSize(QSize(0, 30));
        load_new_lunch->setMaximumSize(QSize(16777215, 30));
        load_new_lunch->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_4->addWidget(load_new_lunch);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_10->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);


        horizontalLayout_14->addLayout(verticalLayout_10);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMinimumSize(QSize(300, 200));
        label_5->setMaximumSize(QSize(300, 200));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/icons/kitten.jpg);"));

        horizontalLayout_14->addWidget(label_5);


        verticalLayout_4->addLayout(horizontalLayout_14);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_6);

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
        label_10->setText(QApplication::translate("MainWindow", "Dodavatel ob\304\233d\305\257:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "K-Gastro", nullptr));
        label->setText(QApplication::translate("MainWindow", "Vklad ob\304\233d\305\257", nullptr));
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
        label_2->setText(QApplication::translate("MainWindow", "Vlo\305\276en\303\255 nov\303\275ch j\303\255del", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "N\303\241zev j\303\255dla", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Typ j\303\255dla", nullptr));
        load_new_lunch->setText(QApplication::translate("MainWindow", "Nahraj j\303\255dlo", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Verze 1.0, Ji\305\231\303\255 Kolacia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
