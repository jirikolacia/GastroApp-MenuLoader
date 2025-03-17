#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //navázání spojení s db
    InitDB();

    //získání jídel, typů jídel, příloh...
    InitSoup();
    InitLunchTypes();
    InitLunchSD();

    //resetovaní hodnot comboboxů jídel, příloh, polívek...
    InitEmptyCB();

    //vytáhnutí dat, která už jsou v db obsažena (mají menu)
    InitGetDates();
}


MainWindow::~MainWindow()
{
    delete ui;
}


//iniciace za účelem načtení dat nebo provedení operací
    //vyresetování všech indexů na -1 (= prázdné comboboxy)
    //"ztmavení" comboboxů - nelze s nimi operovat
void MainWindow::InitEmptyCB(){

    //změna indexu polévky
    ui->soup->setCurrentIndex(-1);

    //změna indexu typu obědů
    ui->lunch_type_1->setCurrentIndex(-1);
    ui->lunch_type_2->setCurrentIndex(-1);
    ui->lunch_type_3->setCurrentIndex(-1);
    ui->lunch_type_5->setCurrentIndex(-1);

    //změna indexu obědu
    ui->lunch1->setCurrentIndex(-1);
    ui->lunch2->setCurrentIndex(-1);
    ui->lunch3->setCurrentIndex(-1);
    ui->lunch5->setCurrentIndex(-1);

    ui->lunch1->setDisabled(true);
    ui->lunch2->setDisabled(true);
    ui->lunch3->setDisabled(true);
    ui->lunch5->setDisabled(true);

    //změna indexu přílohy
    ui->sidedish1->setCurrentIndex(-1);
    ui->sidedish2->setCurrentIndex(-1);
    ui->sidedish3->setCurrentIndex(-1);
    ui->sidedish5->setCurrentIndex(-1);
}

void MainWindow::ClearCB(){

    //změna indexu polévky
    ui->soup->clear();
    ui->lunch_type_1->clear();
    ui->lunch_type_2->clear();
    ui->lunch_type_3->clear();
    ui->lunch_type_5->clear();
    ui->lunch1->clear();
    ui->lunch2->clear();
    ui->lunch3->clear();
    ui->lunch5->clear();
    ui->sidedish1->clear();
    ui->sidedish2->clear();
    ui->sidedish3->clear();
    ui->sidedish5->clear();
}
    //získání datumů, které již existují v databázi a mají menu
void MainWindow::InitGetDates(){
    QString str_Query;
    QSqlQuery sql_query;

        str_Query = "SELECT DISTINCT DATE FROM gastro.menus ORDER BY DATE DESC LIMIT 30";
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                //GastroHelp.pomocna.append(sql_query.value(0).toString());
           }
        }
    qDebug() << GastroHelp.pomocna;
}
    //inicializace databázového připojení, hesel pro ni
void MainWindow::InitDB(){
//====================================
//DB

//------------------------------------------
// INI - data
//------------------------------------------
QSettings INIsettings("gastro.ini",QSettings::IniFormat);
sPort = INIsettings.value("MySQL/Port").toByteArray().toInt();
sDbName = INIsettings.value("MySQL/DbName").toByteArray();
sUserName = INIsettings.value("MySQL/UserName").toByteArray();
sPassword = INIsettings.value("MySQL/Password").toByteArray();
sHostName = INIsettings.value("MySQL/HostName").toByteArray();


//***************************************
// Databases connection
//***************************************

QSqlDatabase db;
db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName(sHostName);
db.setPort(sPort);
db.setDatabaseName(sDbName);
db.setUserName(sUserName);
db.setPassword(sPassword);
//DB
//====================================

if(db.open())
{
    CheckConnectionToDB();
}
else
{
    CheckConnectionToDB();
    qDebug() << db.lastError();
}

//    DlgPIN = new Dlg_PIN_Keyboard(this);


Dlg_New_Meal = new Dlg_NewMeal(this);
//DlgPIN->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter, this->parentWidget()->size(),qApp->desktop()->availableGeometry()));
//qDebug() << ui->MainPage->geometry().width() << "  -  " << ui->MainPage->geometry().height();
Dlg_New_Meal->setGeometry((geometry().width()),(geometry().height()),400,300);   //240,115

connect(Dlg_New_Meal, SIGNAL(MealSend(QString,int)),this, SLOT(InsertMeal(QString,int)));
Dlg_New_Meal->close();


CheckDBTimer = new QTimer(this);  // čas na obrazovce
connect(CheckDBTimer,SIGNAL(timeout()), this, SLOT(CheckConnectionToDB()));
CheckDBTimer->start(60000);

}

void MainWindow::CheckConnectionToDB(){

        QSqlQuery sql_query;
        QString str_Query;
        int pom=0;

        str_Query = "SELECT NOW()";
        qDebug() << str_Query;
        if(sql_query.exec(str_Query))
        {  while(sql_query.next())
           {
                pom=1;
                ui->LE_Connection->setText("OK");
                ui->LBL_TrafficLight->setStyleSheet("image: url(:/icons/Green.png) 0 0 0 0 stretch stretch;");

           }
        }

        if(pom==0){
            ui->LE_Connection->setText("NOK");
            ui->LBL_TrafficLight->setStyleSheet("image: url(:/icons/Red.png) 0 0 0 0 stretch stretch;");

        }
}


    //zjištění všech polévek
void MainWindow::InitSoup(){
    QString str_Query;
    QSqlQuery sql_query;


        //vyber popis a id všech polévek
        str_Query = "SELECT DESCRIPTION, ID FROM gastro.meals WHERE MEAL_TYPE=1 ORDER BY DESCRIPTION ASC";
        qDebug() << str_Query;
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                ui->soup->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
           }

        }



    ui->soup->setCurrentIndex(-1);


}
    //zjištění všech druhů obědů kromě příloh a polévek
void MainWindow::InitLunchTypes(){
    QString str_Query;
    QSqlQuery sql_query;
    QStringList CB_Contents;


        //vyber typy jídel a ID s rozmezím 2-16 (1 = polévky)
        str_Query = "SELECT TYPE_NAME, ID FROM gastro.types WHERE ID BETWEEN 2 AND 16 ORDER BY TYPE_NAME ASC";
        qDebug() << str_Query;
        if(sql_query.exec(str_Query))
        {

            //vložení typů se skrytým ID do comboboxů lunch_typů
            while(sql_query.next())
           {
                ui->lunch_type_1->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
                ui->lunch_type_2->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
                ui->lunch_type_3->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
                ui->lunch_type_5->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
                //qDebug() << sql_query.value(0).toString();
           }
        }

    // natavení indexu na -1 (=blank)
    ui->lunch_type_1->setCurrentIndex(-1);
    ui->lunch_type_2->setCurrentIndex(-1);
    ui->lunch_type_3->setCurrentIndex(-1);
    ui->lunch_type_5->setCurrentIndex(-1);

    //načtení typů jídel do comboboxu pro přiřazení nových obědů
    str_Query = "SELECT TYPE_NAME, ID FROM gastro.types";
    if(sql_query.exec(str_Query))
    {

        while(sql_query.next())
       {
            CB_Contents.append(sql_query.value(0).toString()+";;"+sql_query.value(1).toString());
       }
    }

    Dlg_New_Meal->setCBTypes(CB_Contents);



}
    //zjištění příloh
void MainWindow::InitLunchSD(){
    QString str_Query;
    QSqlQuery sql_query;


        //zjištění příloh stejným způsobem
        //ui->CB_DP->currentData().toString()
        str_Query = "SELECT DESCRIPTION, ID FROM gastro.meals WHERE MEAL_TYPE = 17 ORDER BY DESCRIPTION ASC";
        if(sql_query.exec(str_Query))
        {

            //načtení příloh do comboboxů příloh
            while(sql_query.next())
           {
                ui->sidedish1->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
                ui->sidedish2->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
                ui->sidedish3->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
                ui->sidedish5->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));


                //qDebug() << sql_query.value(0).toString();
           }

        }

        // natavení indexu na -1 (=blank)
        ui->sidedish1->setCurrentIndex(-1);
        ui->sidedish2->setCurrentIndex(-1);
        ui->sidedish3->setCurrentIndex(-1);
        ui->sidedish5->setCurrentIndex(-1);
}

    //vymazání záznamu (menu) pro označený den v kalendáři
void MainWindow::InitDeleteMenu(){
    QString str_Query;
    QSqlQuery sql_query;




    //vytvoření stringu datumu a přiřazení vybraného data tomuto stringu
    QString datum;
    datum = ui->LunchCalendar->selectedDate().toString("yyyy-MM-dd");


    int pom=0;
    QMessageBox oznameni;
    QStringList MealID;

        //vybrat ID z gastra kde datum=datum z widgetu
        str_Query = "SELECT ID FROM gastro.menus WHERE DATE = '"+ datum +"'";
        qDebug() << str_Query;
        if(sql_query.exec(str_Query))
        {
            while(sql_query.next())
           {
                pom++;
                MealID.append(sql_query.value(0).toString());
           }
        }

        if(pom!=0)
        {
            pom=0;
            for(int i=0;i<MealID.size();i++)
            {
                //vymazat konkrétní oběd podle jeho ID, které si extraktuji v původním dotaze
                str_Query = "DELETE FROM gastro.menus WHERE (ID = '"+ MealID.value(i) +"')";
                qDebug() << str_Query;
                if(sql_query.exec(str_Query))
                {

                }
                pom++;
            }
            //oznámení v případě úspěchu
            oznameni.warning(this,"Upozornění","Menu vymazáno z DB!");

        }else{
            //oznámení v případě neúspěchu pokud nejsou záznamy
            oznameni.warning(this,"Upozornění","Nejsou záznamy k vymazání - není vytvořeno menu!");

        }
}


//triggery na změnách indexů jednotlivých comboboxů, v závislosti na typu změnit jídla (změním na hovězí = zobrazím hovězí jídla)

//načtení obědů do comboboxů v závislosti na typu   (hovězí atp.)
void MainWindow::on_lunch_type_1_currentIndexChanged(const QString &LT1)
{

    //qDebug() << ui->lunch_type_1->currentData().toString();
    ui->lunch1->clear();
    ui->lunch1->setCurrentIndex(-1);
    QString str_Query;
    QSqlQuery sql_query;

        //vybrat popis a ID
        //ui->CB_DP->currentData().toString()
        str_Query = "SELECT DESCRIPTION, ID FROM gastro.meals WHERE MEAL_TYPE = '"+ ui->lunch_type_1->currentData().toString() +"' ORDER BY DESCRIPTION ASC";
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                ui->lunch1->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));

                //qDebug() << sql_query.value(0).toString();
           }

        }


    if(ui->lunch_type_1->currentIndex()!=-1){
        ui->lunch1->setDisabled(false);
    }

}
void MainWindow::on_lunch_type_2_currentIndexChanged(const QString &LT2)
{
   // qDebug() << ui->lunch_type_2->currentData().toString();
    ui->lunch2->clear();
    ui->lunch2->setCurrentIndex(-1);
    QString str_Query;
    QSqlQuery sql_query;


        //ui->CB_DP->currentData().toString()
        str_Query = "SELECT DESCRIPTION, ID FROM gastro.meals WHERE MEAL_TYPE = '"+ ui->lunch_type_2->currentData().toString() +"' ORDER BY DESCRIPTION ASC";
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                ui->lunch2->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));

                //qDebug() << sql_query.value(0).toString();
           }

        }


    if(ui->lunch_type_2->currentIndex()!=-1){
        ui->lunch2->setDisabled(false);
    }
}
void MainWindow::on_lunch_type_3_currentIndexChanged(const QString &LT3)
{
    //qDebug() << ui->lunch_type_3->currentData().toString();
    ui->lunch3->clear();
    ui->lunch3->setCurrentIndex(-1);
    QString str_Query;
    QSqlQuery sql_query;


        //ui->CB_DP->currentData().toString()
        str_Query = "SELECT DESCRIPTION, ID FROM gastro.meals WHERE MEAL_TYPE = '"+ ui->lunch_type_3->currentData().toString() +"' ORDER BY DESCRIPTION ASC";
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                ui->lunch3->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));

                //qDebug() << sql_query.value(0).toString();
           }

        }


    if(ui->lunch_type_3->currentIndex()!=-1){
        ui->lunch3->setDisabled(false);
    }
}
void MainWindow::on_lunch_type_5_currentIndexChanged(const QString &LT5)
{
    //qDebug() << ui->lunch_type_5->currentData().toString();
    ui->lunch5->clear();
    ui->lunch5->setCurrentIndex(-1);
    QString str_Query;
    QSqlQuery sql_query;


        //ui->CB_DP->currentData().toString()
        str_Query = "SELECT DESCRIPTION, ID FROM gastro.meals WHERE MEAL_TYPE = '"+ ui->lunch_type_5->currentData().toString() +"' ORDER BY DESCRIPTION ASC";
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                ui->lunch5->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));

                //qDebug() << sql_query.value(0).toString();
           }

        }


    if(ui->lunch_type_5->currentIndex()!=-1){
        ui->lunch5->setDisabled(false);
    }
}


//provedení akcí po kliknutí
    //vložení obědů do databáze
void MainWindow::on_load_menu_day_clicked()
{
    qDebug() << "Polévka:" << ui->soup->currentData().toString();
    QString str_Query;
    QSqlQuery sql_query;
    QString datum;
    datum = ui->LunchCalendar->selectedDate().toString("yyyy-MM-dd");
    int pom=0;
    QMessageBox oznameni;
    QSound meow(":/sounds/MeownuUploaded.wav");

    //vybrat ID z gastra kde datum = datum (z widgetu)
    str_Query = "SELECT ID FROM gastro.menus WHERE DATE = '"+ datum +"'";
    qDebug() << str_Query;
    if(sql_query.exec(str_Query))
    {
        while(sql_query.next())
       {
            pom++;
       }
    }

    //kontrola před existujícím obědem na daný den
    if(pom!=0)
    {
        oznameni.setWindowTitle("Varování");
        oznameni.setText("Na tento den již existuje menu, chcete jej smazat a vytvořit znovu?");
        oznameni.setStandardButtons(QMessageBox::Yes);
        oznameni.addButton(QMessageBox::No);
        oznameni.setDefaultButton(QMessageBox::No);


        //pokud dám ano, chci smazat oběd na daný den a vytvořit nový
        if(oznameni.exec()==QMessageBox::Yes){
            InitDeleteMenu();
        }
    } else {
        //pokud dám ne, spustím for cyklus na 6 kroků
            //4 z těchto kroků vloží obědy
                //kompozice podmínek:
                    //1.)   pokud mám vybraný oběd, provedu další podmínku, pokud ne, chovám se jako by neexistoval
                    //      - jde o to aby se nevkládaly prázdné obědy pro případ menšího výskytu o svátcích, atp.
                    //2.)   pokud mám sidedish, vložím daný oběd s jeho přílohou do db
                    //3.)   pokud nemám sidedish, vložím daný oběd bez přílohy do db, přílohu reprezentuje číslo 142 = "-----" = prázdný
            //1 z těchto kroků vložím polévku
            //1 z těchto kroků vloží prázdný oběd (4ku = --------)
        for(int i=0;i<6;i++){

            //první oběd
            if((i==0) && (ui->lunch1->currentIndex()!=-1))
            {
                    if(ui->sidedish1->currentIndex()!=-1){
                        str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 1, "+ ui->lunch1->currentData().toString() +", "+ ui->sidedish1->currentData().toString() +", 142, 142, 142, 27);";
                        qDebug() << "První oběD příloha: " << str_Query;
                        if(sql_query.exec(str_Query))
                        {
                            qDebug() << "O1 propsan";
                            pom++;
                        }

                        else
                        {   qDebug() << db.lastError();
                        }

                    } else {
                        str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 1, "+ ui->lunch1->currentData().toString() +", 142, 142, 142, 142, 27);";
                        qDebug() << "První oběD: "<< str_Query;
                        if(sql_query.exec(str_Query))
                        {
                            qDebug() << "O1 propsan";
                            pom++;

                        }

                        else
                        {   qDebug() << db.lastError();
                        }
                    }
                    //qDebug() << "-------------------------------";
            }

            //druhý oběd
            if((i==1)  && (ui->lunch2->currentIndex()!=-1))
            {
                if(ui->sidedish2->currentIndex()!=-1){
                    str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 2, "+ ui->lunch2->currentData().toString() +", "+ ui->sidedish2->currentData().toString() +", 142, 142, 142, 27);";
                    qDebug() << "Druhý oběd příloha: " << str_Query;
                    if(sql_query.exec(str_Query))
                    {
                        qDebug() << "O2 propsan";
                        pom++;

                    }

                    else
                    {   qDebug() << db.lastError();
                    }

                } else {
                    str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 2, "+ ui->lunch2->currentData().toString() +", 142, 142, 142, 142, 27);";
                    qDebug() << "Druhý oběd: "<< str_Query;
                    if(sql_query.exec(str_Query))
                    {
                        qDebug() << "O2 propsan";
                        pom++;

                    }

                    else
                    {   qDebug() << db.lastError();
                    }
                }
                //qDebug() << "-------------------------------";

            }

            //třetí oběd
            if((i==2)  && (ui->lunch3->currentIndex()!=-1))
            {
                if(ui->sidedish3->currentIndex()!=-1){
                    str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 3, "+ ui->lunch3->currentData().toString() +", "+ ui->sidedish3->currentData().toString() +", 142, 142, 142, 27);";
                    qDebug() << "Třetí oběd příloha: " << str_Query;
                    if(sql_query.exec(str_Query))
                    {
                        qDebug() << "O3 propsan";
                        pom++;

                    }

                    else
                    {   qDebug() << db.lastError();
                    }

                } else {
                    str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 3, "+ ui->lunch3->currentData().toString() +", 142, 142, 142, 142, 27);";
                    qDebug() << "Třetí oběd: " << str_Query;
                    if(sql_query.exec(str_Query))
                    {
                        qDebug() << "O3 propsan";
                        pom++;

                    }

                    else
                    {   qDebug() << db.lastError();
                    }
                }
                //qDebug() << "-------------------------------";

            }

            //Delimiter - prázdný oběd
            if(i==3)
            {
                    str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 4, 867, 142, 142, 142, 142, 27);";
                    qDebug() << "Delimiter: " << str_Query;
                    if(sql_query.exec(str_Query))
                    {
                        pom++;

                    }

                else
                {   qDebug() << db.lastError();
                }
            }

            //pátý oběd
            if((i==4)  && (ui->lunch5->currentIndex()!=-1))
            {
                if(ui->sidedish5->currentIndex()!=-1){
                    str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 5, "+ ui->lunch5->currentData().toString() +", "+ ui->sidedish5->currentData().toString() +", 142, 142, 142, 27);";
                    qDebug() << "Pátý oběd příloha: " << str_Query;
                    if(sql_query.exec(str_Query))
                    {
                        qDebug() << "O4 propsan";
                        pom++;

                    }

                    else
                    {   qDebug() << db.lastError();
                    }

                } else {
                    str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 5, "+ ui->lunch5->currentData().toString() +", 142, 142, 142, 142, 27);";
                    qDebug() << "Pátý oběd : " << str_Query;
                    if(sql_query.exec(str_Query))
                    {
                        qDebug() << "O4 propsan";
                        pom++;

                    }

                    else
                    {   qDebug() << db.lastError();
                    }
                }
                //qDebug() << "-------------------------------";

            }

            //Polévka
            if((pom==5) && (ui->soup->currentIndex()!=-1)){
                str_Query = "INSERT INTO gastro.menus (DATE, NO, MEAL_NO, SIDE_DISH_NO, SD1, SD2, SD3, PRICE) VALUES ('"+ datum +"', 0, '"+ ui->soup->currentData().toString() +"', 142, 142, 142, 142, 27);";
                qDebug() << "Polévka" <<  str_Query;
                if(sql_query.exec(str_Query))
                {
                    pom++;
                }

                }
                qDebug() << "-------------------------------";
            }

    }
    oznameni.warning(this,"Upozornění","Záznam vložen!");
    meow.play();

    InitEmptyCB();


}


void MainWindow::InsertMeal(QString Meal, int Typ)
{
    QString str_Query;
    QSqlQuery sql_query;
    QMessageBox oznameni;

    //pom = pomocná
    int pom=0;

    //SQL dotaz s podmínkou - pokud mám vytvořený typ a současně vyplněný textu názvu jídla

    str_Query = "SELECT ID, DESCRIPTION FROM gastro.meals WHERE DESCRIPTION='"+ Meal +"'";
    qDebug() << str_Query;
    if(sql_query.exec(str_Query))
    {
       while(sql_query.next())
       {
            pom++;
       }
    }

    qDebug() << pom;
    if(pom==0){
        //vložení do obědů
        str_Query = "INSERT INTO  gastro.meals (DESCRIPTION, MEAL_TYPE) VALUES ('"+ Meal +"','"+ QString::number(Typ) +"')";
        qDebug() << str_Query;
        if(sql_query.exec(str_Query))
        {
            oznameni.warning(this,"Upozornění","Jídlo vloženo do databáze");

        }
    } else {
        //oznámení že je jídlo obsaženo
        oznameni.warning(this,"Upozornění","Toto jídlo už je obsaženo v databázi!");
    }

    //zavolání funkcí na inicializaci polévek, typů jídel, příloh a vymazání comboboxů
    InitEmptyCB();
    ClearCB();
    InitSoup();
    InitLunchTypes();
    InitLunchSD();
}
    //vymazání menu pro den, který je reprezentován vybraným dnem v kalendáři
void MainWindow::on_delete_menu_clicked()
{
    InitDeleteMenu();
}

//nedodělané - načtení obědů podle rozkliknutého datumu
void MainWindow::on_LunchCalendar_clicked(const QDate &Datum)
{

    /*
    qDebug() << "Datum:" << Datum;

    QString str_Query;
    QSqlQuery sql_query;


        str_Query = "SELECT NO, MEAL_NO, SIDE_DISH_NO FROM gastro.menus WHERE date = '"+ Datum.toString("yyyy-MM-dd") +"' AND NO!=4 ORDER BY NO ASC";
        qDebug() << str_Query;
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                qDebug() << "Cislo" << sql_query.value(0).toString() << "Obed" << sql_query.value(1).toString() << "Priloha" << sql_query.value(2).toString();
                switch(sql_query.value(0).toInt())
                {
                //polevka
                case 0:
                    //nacist  index CB dle ID
                    //pokud je sidedish 142 - nic
                    if(sql_query.value(1).toInt()!=0){
                        ui->soup->setCurrentIndex(sql_query.value(1).toInt());
                    }
                    break;
                //prvni obed
                case 1:
                    if(sql_query.value(1).toInt()!=0){
                        ui->lunch1->setCurrentIndex(sql_query.value(1).toInt());
                    }
                    if(sql_query.value(2).toInt()!=142){
                        ui->sidedish1->setCurrentIndex(sql_query.value(2).toInt());
                    }

                    break;

                //druhy obed
                case 2:
                    if(sql_query.value(1).toInt()!=0){
                        ui->lunch2->setCurrentIndex(sql_query.value(1).toInt());
                    }
                    if(sql_query.value(2).toInt()!=142){
                        ui->sidedish2->setCurrentIndex(sql_query.value(2).toInt());
                    }

                    break;

                //treti obed
                case 3:
                    if(sql_query.value(1).toInt()!=0){
                        ui->lunch3->setCurrentIndex(sql_query.value(1).toInt());
                    }
                    if(sql_query.value(2).toInt()!=142){
                        ui->sidedish3->setCurrentIndex(sql_query.value(2).toInt());
                    }

                    break;
                //paty obed
                case 5:
                    if(sql_query.value(1).toInt()!=0){
                        ui->lunch5->setCurrentIndex(sql_query.value(1).toInt());
                    }
                    if(sql_query.value(2).toInt()!=142){
                        ui->sidedish5->setCurrentIndex(sql_query.value(2).toInt());
                    }

                    break;

                }
           }
        }
*/
}

//přesměrování na stránku Kuřila - K-gastro.cz
void MainWindow::on_pushButton_clicked()
{
    QString Link = "http://www.k-gastro.cz/";
    QDesktopServices::openUrl(QUrl(Link));

}


void MainWindow::on_PB_New_Meal_clicked()
{
    Dlg_New_Meal->exec();
}

