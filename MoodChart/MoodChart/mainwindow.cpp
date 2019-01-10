#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "legenditem.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->table->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
    ui->table->verticalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);

    ui->table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    adjustSize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    close();
}
