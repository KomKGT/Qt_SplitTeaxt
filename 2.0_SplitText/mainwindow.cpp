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
    QString code = "*A-756B-310C755D600E0450F066G0430H999I888#";
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
    for(int i =0 ;i<item.size();i++)
    {
        if(item.at(i) == 'A')
        {
            A = i;
        }

        else if (item.at(i) == 'B')
        {
            B = i;
        }

        else if (item.at(i) == 'C')
        {
            C = i;
        }
        else if (item.at(i) == 'D')
        {
            D = i;
        }
        else if (item.at(i) == 'E')
        {
            E = i;
        }
        else if (item.at(i) == 'F')
        {
            F = i;
        }
        else if (item.at(i) == 'G')
        {
            G = i;
        }
        else if (item.at(i) == 'H')
        {
            H = i;
        }
        else if (item.at(i) == 'I')
        {
            I = i;
        }
        else if (item.at(i) == '#')
        {
            sharp = i;
        }
    }


    qDebug() << "AFTER A = "<<SplitNum(item,&A,&B);
    qDebug() << "AFTER B = "<<SplitNum(item,&B,&C);
    qDebug() << "AFTER C = "<<SplitNum(item,&C,&D);
    qDebug() << "AFTER D = "<<SplitNum(item,&D,&E);
    qDebug() << "AFTER E = "<<SplitNum(item,&E,&F);
    qDebug() << "AFTER F = "<<SplitNum(item,&F,&G);
    qDebug() << "AFTER G = "<<SplitNum(item,&G,&H);
    qDebug() << "AFTER H = "<<SplitNum(item,&H,&I);
    qDebug() << "AFTER I = "<<SplitNum(item,&I,&sharp);
}

double MainWindow::SplitNum(QStringList text,int*before,int*after)
{
    QString a;
    for(int i =*before +1;i<=*after-1;i++)
    {
        a += text.at(i);
    }
    return a.toDouble();
}


void MainWindow::on_pushButton_clicked()
{
    Split();
}
