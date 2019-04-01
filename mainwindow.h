#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Ui::MainWindow *ui;

    QString ausgabestring;

    QLabel *ausgabefeld;

    QPushButton *Taste1;
    QPushButton *Taste0;
    QPushButton *Taste2;
    QPushButton *Taste3;
    QPushButton *Taste4;
    QPushButton *Taste5;
    QPushButton *Taste6;
    QPushButton *Taste7;
    QPushButton *Taste8;
    QPushButton *Taste9;
    QPushButton *Taste_CE;
    QPushButton *Taste_Ans;
    QPushButton *Taste_mal;
    QPushButton *Taste_Sqrt;
    QPushButton *Taste_plus;
    QPushButton *Taste_komma;
    QPushButton *Taste_minus;
    QPushButton *Taste_gleich;
    QPushButton *Taste_Quadrat;
    QPushButton *Taste_geteilt;

    QVBoxLayout *vbox;
    QGridLayout *grid;

    QFont f;
    QFont t;

public slots:
    //void anzeige(void);
    void berechnung(void);
    void eins(void);
    void zwei(void);
    void drei(void);
    void vier(void);
    void fünf(void);
    void sechs(void);
    void sieben(void);
    void acht(void);
    void neun(void);
    void null(void);
    void plus(void);
    void minus(void);
    void mal(void);
    void geteilt(void);
    void quadrat(void);
    void wurzel(void);
    void komma(void);
    void gleich (void);
    void ans(void);
    void CE(void);


};

#endif // MAINWINDOW_H
