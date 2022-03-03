#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Split()
{
    QString code = "*A-234B300C555D60E0200F0500G0230H0I0#";
    QString code2= "*,A,0,B,0,C,0,D,0,E,0,2,0,0,F,0,5,00,G0230,H0,I0,#";
    //QStringList listA = code.split("");
    //QStringList listB = code.split('B');
    QStringList listCharp = code.split('#');
    QStringList listI = code.split('I');
    QStringList listH = code.split('H');

    QStringList item = code.split("");
    QStringList listA = code.split('A');
    //QStringList sp = code.splitRef("")

    QString P1;
    int A;
    int B;
    int C;
    int D;
    int E;
    int F;
    int G;
    int H;
    int I;
    int sharp;
    qDebug() << item.at(3);
    for(int i =0 ;i<item.size();i++)
    {
        if(item.at(i) == 'A')
        {
            qDebug() << i;
            A = i;
        }

        else if (item.at(i) == 'B')
        {
            qDebug() << i;
            B = i;
        }

        else if (item.at(i) == 'C')
        {
            qDebug() << i;
            C = i;
        }
        else if (item.at(i) == 'D')
        {
            qDebug() << i;
            D = i;
        }
        else if (item.at(i) == 'E')
        {
            qDebug() << i;
            E = i;
        }
        else if (item.at(i) == 'F')
        {
            qDebug() << i;
            F = i;
        }
        else if (item.at(i) == 'G')
        {
            qDebug() << i;
            G = i;
        }
        else if (item.at(i) == 'H')
        {
            qDebug() << i;
            H = i;
        }
        else if (item.at(i) == 'I')
        {
            qDebug() << i;
            I = i;
        }
        else if (item.at(i) == '#')
        {
            qDebug() << i;
            sharp = i;
        }
    }
    QString numAfter_A;
    for(int i = A+1;i<=B-1;i++)
    {
        qDebug() << i;
        numAfter_A +=  item.at(i);
    }
    qDebug()<<numAfter_A.toInt();

    QString numAfter_B;
    for(int i = B+1;i<=C-1;i++)
    {
        qDebug() << i;
        numAfter_B +=  item.at(i);
    }
    qDebug()<<numAfter_B;

    QString numAfter_C;
    for(int i = C+1;i<=D-1;i++)
    {
        qDebug() << i;
        numAfter_C +=  item.at(i);
    }
    qDebug()<<numAfter_C;

    QString numAfter_D;
    for(int i = D+1;i<=E-1;i++)
    {
        qDebug() << i;
        numAfter_D +=  item.at(i);
    }
    qDebug()<<numAfter_D;

    QString numAfter_E;
    for(int i = E+1;i<=F-1;i++)
    {
        qDebug() << i;
        numAfter_E +=  item.at(i);
    }
    qDebug()<<numAfter_E.toInt();

    QString numAfter_F;
    for(int i = F+1;i<=G-1;i++)
    {
        qDebug() << i;
        numAfter_F +=  item.at(i);
    }
    qDebug()<<numAfter_F.toInt();

    QString numAfter_G;
    for(int i = G+1;i<=H-1;i++)
    {
        qDebug() << i;
        numAfter_G +=  item.at(i);
    }
    qDebug()<<numAfter_G.toInt();

    QString numAfter_H;
    for(int i = H+1;i<=I-1;i++)
    {
        qDebug() << i;
        numAfter_H +=  item.at(i);
    }
    qDebug()<<numAfter_H.toInt();

    QString numAfter_I;
    for(int i = I+1;i<=sharp-1;i++)
    {
        qDebug() << i;
        numAfter_I +=  item.at(i);
    }
    qDebug()<<numAfter_I.toInt();
}


void MainWindow::on_pushButton_clicked()
{
    Split();
}
