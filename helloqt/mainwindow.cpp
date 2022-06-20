#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonQuit,SIGNAL(clicked()),
            this,SLOT(morreDanado()));

    //1 Ponteiro P/ objeto que emite sinal
    //2 nome do Sinal
    //3 ponteiro p/ objeto que recebe o sianl
    //4 nome do slot a ser chamado

    connect(ui->horizontalSlider,SIGNAL(valueChanger(int)),
            ui->lcdNumber,SLOT(display(int)));
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::morreDanado()
{
    exit(0);
}

