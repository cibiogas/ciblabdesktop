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
    w.setFixedSize(524,712);
    //set the icon on window
    w.setWindowIcon(QIcon("icon.ico"));
    w.show();

    // [1]  Writing excel file(*.xlsx)
    QXlsx::Document xlsxW;

    //Leitura de arquivo
    Document xlsxR("Laboratorio.xlsx");

    if (!xlsxR.load()) // load excel file
    {
        xlsxR.selectSheet("Sheet1");

        Cell* header = xlsxR.cellAt(1, 1); // get cell pointer.

        //Verifica se o arquivo nao tem header
        if (!header) {
            //Criar Header
            xlsxW.write(1,1, "Data de incubação");
            xlsxW.write(1,2, "Protocolo");
            xlsxW.write(1,3, "Procedência");
            xlsxW.write(1,4, "Mercado");
            xlsxW.write(1,5, "Origem matéria-prima");
            xlsxW.write(1,6, "Setor");
            xlsxW.write(1,7, "Amostra/fase");
            xlsxW.write(1,8, "Ponto de coleta");
            xlsxW.write(1,9, "Informações complementares");
            xlsxW.write(1,10, "Biogás (LNbiogás.kg sv¹)");
            xlsxW.write(1,11, "Maior e menor");
            xlsxW.write(1,12, "Critério de aceitação");
            xlsxW.write(1,13, "Biogás (LNbiogás.kg sv¹)");
            xlsxW.write(1,14, "Metano (LNbiogás.kg sv¹)");
            xlsxW.write(1,15, "Maior e menor");
            xlsxW.write(1,16, "Critério de aceitação");
            xlsxW.write(1,17, "Metano (LNCH4.kg¹ sv)");
            xlsxW.write(1,18, "% de Metano no Biogás");
            xlsxW.write(1,19, "ST (%)");
            xlsxW.write(1,20, "Sólidos totais (g/kg)");
            xlsxW.write(1,21, "Critério de aceitação");
            xlsxW.write(1,22, "SV (%)");
            xlsxW.write(1,23, "Sólidos voláteis (g/kg)");
            xlsxW.write(1,24, "Critério de aceitação");
            xlsxW.write(1,25, "SF (%)");
            xlsxW.write(1,26, "DQO(mg de O2/L)");
            xlsxW.write(1,27, "DQO(mg de O2/L)");
            xlsxW.write(1,28, "pH");
            xlsxW.write(1,29, "pH");
        }

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
