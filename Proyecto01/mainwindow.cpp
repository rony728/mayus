#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_hacerCambio_clicked()
{
    QString texto ;
    texto = ui->textoUsuario->text() ;
    texto = texto.toUpper();
    ui->textoResultado->setText(texto);
}
