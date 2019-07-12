#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QDebug>
#include <QMessageBox>

// [0] include QXlsx headers
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
using namespace QXlsx;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // [1]  Writing excel file(*.xlsx)
    QXlsx::Document xlsxW;

    //Leitura de arquivo
    Document xlsxR("Laboratorio.xlsx");
    if (!xlsxR.load()) // load excel file
    {
        //Verifica se salvou o arquivo
        if (xlsxW.saveAs("Laboratorio.xlsx")) // save the document as 'Laboratorio.xlsx'
        {
            qDebug() << "[debug] success to write xlsx file";
        }
        else
        {
            qDebug() << "[debug][error] failed to write xlsx file";
        }
    } else {
         qDebug() << "[debug][error] load xlsx file.";
    }


    //Criar o arquivo XLSX com as Header certas e o salvar vai apenas adicionar uma nova linha no arquivo.
    //O salvar vai ler o arquivo existente salvar na ultima linha

    //Mostra o caminho onde esta sendo salvo o arquivo
    qDebug() << "[debug] current directory is " << QDir::currentPath();

    return a.exec();
}
