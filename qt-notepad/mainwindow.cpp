#include "mainwindow.h"
#include "./ui_mainwindow.h"

//here we define all of our functionality for our application

MainWindow::MainWindow(QWidget *parent) //this is the constructor
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) //creating UserInerface class and assinging it to our ui
{
    ui->setupUi(this); //this guy sets up our user interface
    this->setCentralWidget(ui->textEditor);
}

MainWindow::~MainWindow() //destructor
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEditor->setText(QString());
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEditor->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEditor->paste();
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEditor->cut();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEditor->undo();
}


void MainWindow::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Open the file");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "warning", "cannot open file : " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEditor->toPlainText();
    out << text;
    file.close();
}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "warning", "cannot open file : " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui -> textEditor -> setText(text);
    file.close();
}

