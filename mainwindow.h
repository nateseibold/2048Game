#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "model.h"
#include "gamegrid.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Model*, QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int tileWidth;
};
#endif // MAINWINDOW_H
