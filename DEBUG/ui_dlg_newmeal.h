/********************************************************************************
** Form generated from reading UI file 'dlg_newmeal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_NEWMEAL_H
#define UI_DLG_NEWMEAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dlg_NewMeal
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *Close;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *CB_Meal_Type;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *LE_New_Meal;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *Load_Meal;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dlg_NewMeal)
    {
        if (Dlg_NewMeal->objectName().isEmpty())
            Dlg_NewMeal->setObjectName(QString::fromUtf8("Dlg_NewMeal"));
        Dlg_NewMeal->resize(377, 350);
        Dlg_NewMeal->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 155, 33);"));
        verticalLayout_2 = new QVBoxLayout(Dlg_NewMeal);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        Close = new QPushButton(Dlg_NewMeal);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setMinimumSize(QSize(100, 100));
        Close->setStyleSheet(QString::fromUtf8("image: url(:/icons/close.svg);\n"
"border:0;\n"
"background-color: rgba( 255, 255, 255, 0% );"));

        horizontalLayout_11->addWidget(Close);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_19);


        horizontalLayout_13->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(Dlg_NewMeal);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_8);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_18);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        verticalLayout_2->addLayout(horizontalLayout_13);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(Dlg_NewMeal);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(150, 0));
        label_6->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        label_6->setFont(font1);

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        CB_Meal_Type = new QComboBox(Dlg_NewMeal);
        CB_Meal_Type->setObjectName(QString::fromUtf8("CB_Meal_Type"));
        CB_Meal_Type->setMinimumSize(QSize(150, 0));
        CB_Meal_Type->setMaximumSize(QSize(160, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        CB_Meal_Type->setFont(font2);

        horizontalLayout_7->addWidget(CB_Meal_Type);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(Dlg_NewMeal);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(150, 100));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        LE_New_Meal = new QLineEdit(Dlg_NewMeal);
        LE_New_Meal->setObjectName(QString::fromUtf8("LE_New_Meal"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LE_New_Meal->sizePolicy().hasHeightForWidth());
        LE_New_Meal->setSizePolicy(sizePolicy);
        LE_New_Meal->setMinimumSize(QSize(350, 40));
        LE_New_Meal->setMaximumSize(QSize(350, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(12);
        LE_New_Meal->setFont(font3);

        verticalLayout->addWidget(LE_New_Meal);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        Load_Meal = new QPushButton(Dlg_NewMeal);
        Load_Meal->setObjectName(QString::fromUtf8("Load_Meal"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Load_Meal->sizePolicy().hasHeightForWidth());
        Load_Meal->setSizePolicy(sizePolicy1);
        Load_Meal->setMinimumSize(QSize(50, 50));
        Load_Meal->setMaximumSize(QSize(16777215, 50));
        Load_Meal->setFont(font);
        Load_Meal->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover{  background: qlineargradient(spread:reflect, x1:0.1, y1:0.5, x2:1, y2:0, stop:0 rgba(160, 220, 255,255), stop:1 rgba(160, 220, 255, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_9->addWidget(Load_Meal);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(Dlg_NewMeal);

        QMetaObject::connectSlotsByName(Dlg_NewMeal);
    } // setupUi

    void retranslateUi(QDialog *Dlg_NewMeal)
    {
        Dlg_NewMeal->setWindowTitle(QApplication::translate("Dlg_NewMeal", "Dialog", nullptr));
        Close->setText(QString());
        label_8->setText(QApplication::translate("Dlg_NewMeal", "Zalo\305\276en\303\255 nov\303\251ho j\303\255dla", nullptr));
        label_6->setText(QApplication::translate("Dlg_NewMeal", "Vyberte typ j\303\255dla", nullptr));
        label_5->setText(QApplication::translate("Dlg_NewMeal", "Napi\305\241te n\303\241zev j\303\255dla", nullptr));
        LE_New_Meal->setText(QString());
        Load_Meal->setText(QApplication::translate("Dlg_NewMeal", "Nahraj j\303\255dlo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_NewMeal: public Ui_Dlg_NewMeal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_NEWMEAL_H
