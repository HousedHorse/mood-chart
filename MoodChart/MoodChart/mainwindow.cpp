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

    ui->happy->setColor(Qt::yellow);
    ui->happy->setLabel("Happy");
    ui->sad->setColor(Qt::blue);
    ui->sad->setLabel("Sad");
    ui->angry->setColor(Qt::red);
    ui->angry->setLabel("Angry");
    ui->depressed->setColor(Qt::gray);
    ui->depressed->setLabel("Depressed");
    ui->tired->setColor(Qt::green);
    ui->tired->setLabel("Tired/Sick");
    ui->anxious->setColor(Qt::magenta);
    ui->anxious->setLabel("Tired/Sick");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    close();
}
