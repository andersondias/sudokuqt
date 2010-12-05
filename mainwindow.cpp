#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "importador_por_arquivo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Celula * celulas = ImportadorPorArquivo::importar();
    tabuleiro = new Tabuleiro(celulas);
}

MainWindow::~MainWindow()
{
    delete ui;
}
