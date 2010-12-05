#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "tabuleiro.h"
#include "celulatextedit.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void updateCelula(QLineEdit line, Celula celula);

private:
    Ui::MainWindow *ui;
    Tabuleiro * tabuleiro;
    CelulaTextEdit * campos[81];

private slots:
    void on_lineEdit_textChanged(QString );
};

#endif // MAINWINDOW_H
