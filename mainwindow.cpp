#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QBoxLayout>
#include <iostream>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    QWidget *window = new QWidget;
    setCentralWidget(window);
    window -> setMinimumSize (300,400); // Minimale Fenstergröße einstellen


    //Taste "1"
    Taste1 = new QPushButton("1");
    Taste1->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste1, SIGNAL(clicked()),this, SLOT(anzeige()));

    //Taste "2"
    Taste2 = new QPushButton("2");
    Taste2->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste2, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "3"
    Taste3 = new QPushButton("3");
    Taste3->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste3, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "4"
    Taste4 = new QPushButton("4");
    Taste4->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste4, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "5"
    Taste5 = new QPushButton("5");
    Taste5->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste5, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "6"
    Taste6 = new QPushButton("6");
    Taste6->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste6, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "7"
    Taste7 = new QPushButton("7");
    Taste7->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste7, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "8"
    Taste8 = new QPushButton("8");
    Taste8->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste8, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "9"
    Taste9 = new QPushButton("9");
    Taste9->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste9, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "0"
    Taste0 = new QPushButton("0");
    Taste0->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste0, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste ","
    Taste_komma = new QPushButton(",");
    Taste_komma->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_komma, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "="
    Taste_gleich = new QPushButton("=");
    Taste_gleich->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_gleich, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "+"
    Taste_plus = new QPushButton("+");
    Taste_plus->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_plus, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "-"
    Taste_minus = new QPushButton("-");
    Taste_minus->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_minus, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "*"
    Taste_mal = new QPushButton("*");
    Taste_mal->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_mal, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "/"
    Taste_geteilt = new QPushButton("/");
    Taste_geteilt->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_geteilt, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "Ans"
    Taste_Ans = new QPushButton("Ans");
    Taste_Ans->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_Ans, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "CE"
    Taste_CE = new QPushButton("CE");
    Taste_CE->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_CE, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "^2"
    Taste_Quadrat = new QPushButton("^2");
    Taste_Quadrat->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_Quadrat, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "sqrt"
    Taste_Sqrt = new QPushButton("Sqrt");
    Taste_Sqrt->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    connect(Taste_Sqrt, SIGNAL(clicked()), qApp, SLOT(quit()));



    //AnzeigeFenster

    ausgabefeld=new QLabel;

    f=QFont( "Arial", 12, QFont::Bold); // Schriftgröße
    t=QFont( "Arial", 10, QFont::Bold); // Schriftgröße

    ausgabefeld->setFont( f);

    Taste0 -> setFont (t);

    Taste1 -> setFont (t);

    Taste2 -> setFont (t);
    Taste3 -> setFont (t);
    Taste4 -> setFont (t);
    Taste5 -> setFont (t);
    Taste6 -> setFont (t);
    Taste7 -> setFont (t);
    Taste8 -> setFont (t);
    Taste9 -> setFont (t);
    Taste_CE -> setFont (t);
    Taste_Ans -> setFont (t);
    Taste_mal -> setFont (t);
    Taste_Sqrt -> setFont (t);
    Taste_plus -> setFont (t);
    Taste_komma -> setFont (t);
    Taste_minus -> setFont (t);
    Taste_gleich -> setFont (t);
    Taste_Quadrat -> setFont (t);
    Taste_geteilt -> setFont (t);


    vbox = new QVBoxLayout;
    grid = new QGridLayout;

    //Anzeige

    vbox->addWidget(ausgabefeld);
    ausgabefeld->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    ausgabefeld->setText("testi");


    // erste Zeile hinter ausgabe
    grid->addWidget(Taste_Sqrt,0,0);
    grid->addWidget(Taste_Quadrat,0,1);
    grid->addWidget(Taste_Ans,0,2);
    grid->addWidget(Taste_CE,0,3);

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


    vbox->addLayout(grid);

    window->setLayout(vbox);

}
void MainWindow::anzeige(void){
    ausgabefeld->setText("ausgabestring");
}
MainWindow::~MainWindow()
{



    delete ui;
}
