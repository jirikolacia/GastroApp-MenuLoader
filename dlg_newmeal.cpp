#include "dlg_newmeal.h"
#include "ui_dlg_newmeal.h"

Dlg_NewMeal::Dlg_NewMeal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dlg_NewMeal)
{
    ui->setupUi(this);
}

Dlg_NewMeal::~Dlg_NewMeal()
{
    delete ui;
}

//zavření okna
void Dlg_NewMeal::on_Close_clicked()
{
    this->close();
}

void Dlg_NewMeal::setCBTypes(QStringList CBs)
{
    for(int i=0;i<CBs.size();i++)
    {
        ui->CB_Meal_Type->addItem(CBs[i].split(";;").value(0),QVariant::fromValue(CBs[i].split(";;").value(1).toInt()));
    }
    ui->CB_Meal_Type->setCurrentIndex(-1);

}

void Dlg_NewMeal::on_Load_Meal_clicked()
{
    if((ui->CB_Meal_Type->currentIndex()==-1) || (ui->LE_New_Meal->text().size()==0))
    {
        qDebug() << "Chyba jidla";
        QMessageBox oznameni;
        oznameni.warning(this,"Upozornění","Chybí typ jídla\nnebo jeho název!");
    } else
    {
        emit MealSend(ui->LE_New_Meal->text(),ui->CB_Meal_Type->currentData().toInt());
        ui->LE_New_Meal->clear();
        this->close();
    }

}



