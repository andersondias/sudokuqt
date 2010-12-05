#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "importador_por_arquivo.h"
#include "stdio.h"
#include "helpers.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Celula * celulas = ImportadorPorArquivo::importar();
    tabuleiro = new Tabuleiro(celulas);
    Celula celula = celulas[0];
    char * myString;
    if(celula.is_constant()){
        sprintf(myString, "%d", celula.get_value());

        ui->lineEdit->setText("B");
        ui->lineEdit->setReadOnly(true);
    }

//    connect(ui->lineEdit, SIGNAL(changed()), this, SLOT(updateCelula(ui->lineEdit, celula)));

    //    for (int i = 0; i < 81; i++) {
//        CelulaTextEdit * campo = new CelulaTextEdit();
//        Celula * celula;
//        celula = celulas[i];
//        campo->setCelula(celula);
//        campos[i] = campo;
//    }
}
void MainWindow::updateCelula(QLineEdit line, Celula celula) {
//  celula.set_value((int) line.text().toInt());
//  char * myString;
//  sprintf(myString, "%d", celula.get_value());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(QString )
{
    QMessageBox::about(this, "A", "B");
}
