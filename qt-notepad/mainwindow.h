#ifndef MAINWINDOW_H //assures that the header files are not loaded more than one time which could cause a lot of problems
#define MAINWINDOW_H

#include <QMainWindow> //provides the main application window in which the user interface is made

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

//we will declare our class as a qobject which is the base class for al of our qtobject that we are going to work with
//and w objects are going to do things like handle events and each qobject that we create is going to execute on its own thread
//

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr); //we are making a constructor and declaring that this widget has no parent
    ~MainWindow(); //a destructor

private slots:
    void on_actionNew_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionSave_as_triggered();

    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui; //a pointer to our .ui class
    QString currentFile = "";
};
#endif // MAINWINDOW_H
