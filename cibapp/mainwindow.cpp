#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

// [0] include QXlsx headers
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
using namespace QXlsx;

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

void MainWindow::on_Btn_Salvar_clicked()
{

    QString data_incubacao = ui->Edt_DataIncubacao->text();

    // [1]  Writing excel file(*.xlsx)
    QXlsx::Document xlsxW;
    xlsxW.write("A1", data_incubacao); // write "Hello Qt!" to cell(A,1). it's shared string.
    if ( xlsxW.saveAs("Laboratorio.xlsx") ) // save the document as 'Test.xlsx'
    {
        qDebug() << "[debug] success to write xlsx file";
    }
    else
    {
        qDebug() << "[debug][error] failed to write xlsx file";
    }

    qDebug() << "[debug] current directory is " << QDir::currentPath();

    // [2] Reading excel file(*.xlsx)
    Document xlsxR("Test.xlsx");
    if ( xlsxR.load() ) // load excel file
    {
        qDebug() << "[debug] success to load xlsx file.";

        int row = 1; int col = 1;
        Cell* cell = xlsxR.cellAt(row, col); // get cell pointer.
        if ( cell != NULL )
        {
            QVariant var = cell->readValue(); // read cell value (number(double), QDateTime, QString ...)
            qDebug() << "[debug] cell(1,1) is " << var; // Display value. It is 'Hello Qt!'.
        }
        else
        {
            qDebug() << "[debug][error] cell(1,1) is not set.";
        }
    }
    else
    {
        qDebug() << "[debug][error] failed to load xlsx file.";
    }

    QMessageBox::information(this, "Salvar", "Informação Salva com Data de Incubação: " + data_incubacao);
}

void MainWindow::on_actionSair_triggered()
{
     QApplication::quit();
}
