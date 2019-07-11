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

//Apos salvar chamar a funcao limpa textos das Eds

void MainWindow::on_Btn_Salvar_clicked()
{
    //Valores do Form
    QString data_incubacao = ui->Edt_DataIncubacao->text();
    QString protocolo = ui->Edt_Protocolo->text();
    QString mercado = ui->CmB_Mercado->currentText();
    QString origem = ui->CmB_OrigemMateriaPrima->currentText();
    QString setor = ui->CmB_Setor->currentText();
    QString amostra = ui->CmB_AmostraFase->currentText();
    QString pontoColeta = ui->Edt_PontoColeta->text();
    QString informacao = ui->EdtText_InformacoesComplementares->toPlainText();

    // [1]  Writing excel file(*.xlsx)
    QXlsx::Document xlsxW;

    //linha e coluna
    xlsxW.write(1,4, data_incubacao); // write to cell(A,1).
    xlsxW.write(2,5, protocolo); // write to cell(B,1).
    xlsxW.write(3,3, mercado); // write to cell(C,1).
    xlsxW.write(4,3, origem); // write to cell(D,1).
    xlsxW.write(5,3, setor); // write to cell(E,1).
    xlsxW.write(5,3, amostra); // write to cell(F,1).
    xlsxW.write(6,3, pontoColeta); // write to cell(G,1).
    xlsxW.write(7,3, informacao); // write to cell(G,1).
    //xlsxW.

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
    Document xlsxR("Laboratorio.xlsx");
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
