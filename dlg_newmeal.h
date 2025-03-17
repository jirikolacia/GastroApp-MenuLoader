#ifndef DLG_NEWMEAL_H
#define DLG_NEWMEAL_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>


namespace Ui {
class Dlg_NewMeal;
}

class Dlg_NewMeal : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_NewMeal(QWidget *parent = nullptr);
    ~Dlg_NewMeal();


public slots:
    void setCBTypes(QStringList CBs);

signals:
    void MealSend(QString Meal, int Typ);


private slots:


    void on_Load_Meal_clicked();

    void on_Close_clicked();

private:
    Ui::Dlg_NewMeal *ui;
};

#endif // DLG_NEWMEAL_H
