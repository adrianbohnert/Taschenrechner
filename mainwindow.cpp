#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <iostream>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *window = new QWidget;
    setCentralWidget(window);

    //Taste "1"
    QPushButton *Taste1 = new QPushButton("1",this);
    Taste1->setFixedSize(50,50);
    connect(Taste1, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "2"
    QPushButton *Taste2 = new QPushButton("2",this);
    Taste2->setFixedSize(50,50);
    connect(Taste2, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "3"
    QPushButton *Taste3 = new QPushButton("3",this);
    Taste3->setFixedSize(50,50);
    connect(Taste3, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "4"
    QPushButton *Taste4 = new QPushButton("4",this);
    Taste4->setFixedSize(50,50);
    connect(Taste4, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "5"
    QPushButton *Taste5 = new QPushButton("5",this);
    Taste5->setFixedSize(50,50);
    connect(Taste5, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "6"
    QPushButton *Taste6 = new QPushButton("6",this);
    Taste6->setFixedSize(50,50);
    connect(Taste6, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "7"
    QPushButton *Taste7 = new QPushButton("7",this);
    Taste7->setFixedSize(50,50);
    connect(Taste7, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "8"
    QPushButton *Taste8 = new QPushButton("8",this);
    Taste8->setFixedSize(50,50);
    connect(Taste8, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "9"
    QPushButton *Taste9 = new QPushButton("9",this);
    Taste9->setFixedSize(50,50);
    connect(Taste9, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "0"
    QPushButton *Taste0 = new QPushButton("0",this);
    Taste0->setFixedSize(50,50);
    connect(Taste0, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste ","
    QPushButton *Taste_komma = new QPushButton(",",this);
    Taste_komma->setFixedSize(50,50);
    connect(Taste_komma, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "="
    QPushButton *Taste_gleich = new QPushButton("=",this);
    Taste_gleich->setFixedSize(50,50);
    connect(Taste1, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "+"
    QPushButton *Taste_plus = new QPushButton("+",this);
    Taste_plus->setFixedSize(50,50);
    connect(Taste_plus, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "-"
    QPushButton *Taste_minus = new QPushButton("-",this);
    Taste_minus->setFixedSize(50,50);
    connect(Taste_minus, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "*"
    QPushButton *Taste_mal = new QPushButton("*",this);
    Taste_mal->setFixedSize(50,50);
    connect(Taste_mal, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "/"
    QPushButton *Taste_geteilt = new QPushButton("/",this);
    Taste_geteilt->setFixedSize(50,50);
    connect(Taste_geteilt, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "Ans"
    QPushButton *Taste_Ans = new QPushButton("Ans",this);
    Taste_Ans->setFixedSize(50,50);
    connect(Taste_Ans, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "CE"
    QPushButton *Taste_CE = new QPushButton("CE",this);
    Taste_CE->setFixedSize(50,50);
    connect(Taste_CE, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "^2"
    QPushButton *Taste_Quadrat = new QPushButton("^2",this);
    Taste_Quadrat->setFixedSize(50,50);
    connect(Taste_Quadrat, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "sqrt"
    QPushButton *Taste_Sqrt = new QPushButton("Sqrt",this);
    Taste_Sqrt->setFixedSize(50,50);
    connect(Taste_Sqrt, SIGNAL(clicked()), qApp, SLOT(quit()));

    QLabel*anzeige=new QLabel;


    QVBoxLayout *vbox = new QVBoxLayout;
    QHBoxLayout *hbox = new QHBoxLayout;
    QGridLayout *grid = new QGridLayout;



    //Erste Tasterspalte
    grid -> addWidget(Taste7,1,0);
    grid -> addWidget(Taste4,2,0);
    grid -> addWidget(Taste1,3,0);
    grid -> addWidget(Taste_komma,4,0);

    //Zweite Tasterspalte
    grid -> addWidget(Taste8,1,1);
    grid -> addWidget(Taste5,2,1);
    grid -> addWidget(Taste2,3,1);
    grid -> addWidget(Taste0,4,1);

    //Dritte Tasterspalte
    grid -> addWidget(Taste9,1,2);
    grid -> addWidget(Taste6,2,2);
    grid -> addWidget(Taste3,3,2);
    grid -> addWidget(Taste_gleich,4,2);

    //Vierte Tasterspalte
    grid -> addWidget(Taste_plus,1,3);
    grid -> addWidget(Taste_minus,2,3);
    grid -> addWidget(Taste_mal,3,3);
    grid -> addWidget(Taste_geteilt,4,3);

    vbox->addWidget(anzeige);
    hbox->addWidget(Taste_Sqrt);
    hbox->addWidget(Taste_Quadrat);
    hbox->addWidget(Taste_Ans);
    hbox->addWidget(Taste_CE);



    vbox->addLayout(hbox);
    vbox->addLayout(grid);
    anzeige->setText("Ausgabe");                        //ist nur zum Testen ob die Ausgabe an der richtigen Stelle

    window->setLayout(vbox);

}

MainWindow::~MainWindow()
{



    delete ui;
}
