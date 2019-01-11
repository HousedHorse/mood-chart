#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "legenditem.h"
#include "mood.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->table->verticalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);

    ui->table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    adjustSize();

    addMood(Mood(QColor(250,255,124), QString("Happy")));
    addMood(Mood(QColor(255,128,0), QString("Average")));
    addMood(Mood(QColor(47,131,255), QString("Depressed/Anxious")));
    addMood(Mood(QColor(117,123,134), QString("Tired")));
    addMood(Mood(QColor(36,220,79), QString("Sick")));
    addMood(Mood(QColor(252,83,83), QString("Angry")));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    close();
}

void MainWindow::addMood(const Mood &mood)
{
    moods.push_back(mood);
    ui->legendLayout->addWidget(new legendItem (nullptr, mood.getColor(), mood.getLabel()));
}
