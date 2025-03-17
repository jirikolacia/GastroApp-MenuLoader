#pragma once

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "dlg_newmeal.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QString>
#include <QTextStream>
#include <QMainWindow>
#include <QWidget>
#include <QSound>
#include <QTimer>



//pro fotky/ikony
#include <QtSvg>
#include <QPixmap>


//SQL
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


struct pomocne{
    QStringList pomocna;
    QString filename;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void InitSoup();
    void InitGetDates();
    void InitDB();
    void InitLunchTypes();
    void InitLunchSD();
    void InitEmptyCB();
    void InitDeleteMenu();
    void CheckConnectionToDB();
    void ClearCB();
    void InsertMeal(QString Meal, int Typ);



    void on_lunch_type_1_currentIndexChanged(const QString &LT1);
    void on_lunch_type_3_currentIndexChanged(const QString &LT2);
    void on_lunch_type_2_currentIndexChanged(const QString &LT3);
    void on_lunch_type_5_currentIndexChanged(const QString &LT5);

    void on_load_menu_day_clicked();



    void on_delete_menu_clicked();

    //void on_PB_SelectFile_clicked();
    //void on_PB_ProcessFile_clicked();

    void on_LunchCalendar_clicked(const QDate &date);

    void on_pushButton_clicked();

    void on_PB_New_Meal_clicked();

private:
    Ui::MainWindow *ui;
    pomocne GastroHelp;

    QTimer *CheckDBTimer;



    QSqlDatabase db;
    QString sHostName;
    int sPort;
    QString sDbName;
    QString sUserName;
    QString sPassword;


    Dlg_NewMeal *Dlg_New_Meal;
};
#endif // MAINWINDOW_H
