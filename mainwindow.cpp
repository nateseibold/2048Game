#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"
#include "gamegrid.h"

MainWindow::MainWindow(Model* model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1000, 1000);
    setCentralWidget(ui->gameGrid);

}

MainWindow::~MainWindow()
{
    delete ui;
}

