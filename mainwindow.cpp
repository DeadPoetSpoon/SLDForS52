#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString path = QFileDialog::getOpenFileName(this,
                                                "选择文件",
                                                "../",
                                                "SLD(*.xml)");
    QFile f(path);
    if(f.open(QIODevice::ReadOnly|QIODevice::Text)){
        Reader reader(&f);
        f.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

