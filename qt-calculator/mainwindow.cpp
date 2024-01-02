#include "mainwindow.h"
#include "./ui_mainwindow.h"

double calcValue = 0.0;
bool plusTrigger = false;
bool minusTrigger = false;
bool multTrigger = false;
bool divTrigger = false;
bool equalsTrigger = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcValue));
    QPushButton *numButtons[10];
    for(int i=0; i<10; i++){
        QString buttName = "Button" + QString::number(i);
        numButtons[i] = MainWindow::findChild<QPushButton *>(buttName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    connect(ui->Plus, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Minus, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));

    connect(ui->Clear, SIGNAL(released()), this, SLOT(ACButton()));
    connect(ui->Result, SIGNAL(released()), this, SLOT(EqualButton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NumPressed(){
    QPushButton *button = (QPushButton *) sender();
    QString butVal = button -> text();
    QString displayVal = ui->Display->text();
    if(displayVal.toDouble() == 0 || displayVal.toDouble() == 0.0 || equalsTrigger){
        ui->Display->setText(butVal);
        equalsTrigger = false;
    }
    else{
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void MainWindow::MathButtonPressed(){
    divTrigger = false;
    plusTrigger = false;
    minusTrigger = false;
    multTrigger = false;
    QString displayVal = ui->Display->text();
    calcValue = displayVal.toDouble();
    QPushButton *button = (QPushButton *) sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        plusTrigger = true;
    }
    else if(QString::compare(butVal, "-", Qt::CaseInsensitive) == 0){
        minusTrigger = true;
    }
    else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    }
    else{
        divTrigger = true;
    }
    ui->Display->setText("0");

}

void MainWindow::EqualButton(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(plusTrigger || minusTrigger || multTrigger || divTrigger){
        if(plusTrigger){
            solution = calcValue + dblDisplayVal;
        }
        else if(minusTrigger){
            solution = calcValue - dblDisplayVal;
        }
        else if(multTrigger){
            solution = calcValue * dblDisplayVal;
        }
        else if(divTrigger){
            if(dblDisplayVal == 0){
                ui->Display->setText("Cannot divide by zero");
            }
            else{
                solution = calcValue / dblDisplayVal;
            }
        }
    }
    ui->Display->setText(QString::number(solution));
    equalsTrigger = true;
}

void MainWindow::ACButton(){
    QPushButton *button = (QPushButton * ) sender();
    if(QString::compare(button->text(), "AC") == 0){
        calcValue = 0.0;
        ui->Display->setText(QString::number(calcValue));
    }
}
