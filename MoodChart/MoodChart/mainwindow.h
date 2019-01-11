#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mood.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_Quit_triggered();

private:
    Ui::MainWindow *ui;
    QVector <Mood> moods;
    void addMood(const Mood &mood);
    //void removeMood();
};


#endif // MAINWINDOW_H
