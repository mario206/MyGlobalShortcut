#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <windows.h>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow();
    ~MainWindow();

private slots:
    void gethotkey();

};

#endif // MAINWINDOW_H
