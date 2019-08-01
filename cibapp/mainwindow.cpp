#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include <string>
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

    //ui->CB_Amostra3->setEnabled(false);

    //Edt Biogas
    //ui->Edt_Biogas2->setEnabled(false);
    //ui->Edt_Biogas3->setEnabled(false);

    //Edt Metano
    //ui->Edt_Metano2->setEnabled(false);
    //ui->Edt_Metano3->setEnabled(false);

    //Edt ST
    //ui->Edt_ST2->setEnabled(false);
    //ui->Edt_ST3->setEnabled(false);

    //Edt SV
    //ui->Edt_SV2->setEnabled(false);
    //ui->Edt_SV3->setEnabled(false);

    //Edt SF
    //ui->Edt_SF2->setEnabled(false);
    //ui->Edt_SF3->setEnabled(false);

    //Edt DQO
    //ui->Edt_DQO2->setEnabled(false);
    //ui->Edt_DQO3->setEnabled(false);

    //Edt pH
    //ui->Edt_pH2->setEnabled(false);
    //ui->Edt_pH3->setEnabled(false);

    //Validadores para numeros
    ui->Edt_Biogas1->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_Biogas2->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_Biogas3->setValidator(new QIntValidator(0, 10000000, this));

    ui->Edt_Metano1->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_Metano2->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_Metano3->setValidator(new QIntValidator(0, 10000000, this));

    ui->Edt_ST1->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_ST2->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_ST3->setValidator(new QIntValidator(0, 10000000, this));

    ui->Edt_SV1->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_SV2->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_SV3->setValidator(new QIntValidator(0, 10000000, this));

    ui->Edt_SF1->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_SF2->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_SF3->setValidator(new QIntValidator(0, 10000000, this));

    ui->Edt_DQO1->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_DQO2->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_DQO3->setValidator(new QIntValidator(0, 10000000, this));

    ui->Edt_pH1->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_pH2->setValidator(new QIntValidator(0, 10000000, this));
    ui->Edt_pH3->setValidator(new QIntValidator(0, 10000000, this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Apos salvar chamar a funcao limpa textos das Eds

void MainWindow::on_Btn_Salvar_clicked()
{

    //Merge de Celulas
    Format formato;
    formato.setHorizontalAlignment(Format::AlignHCenter);
    formato.setVerticalAlignment(Format::AlignVCenter);

    //Formulas

    //BIOGAS
    //QString MAXIMABIOGAS = "=MÁXIMO(J2:J4)";
    //QString MINIMOBIOGAS = "=MÍNIMO(J2:J4)";
    //QString CRITERIOLNBIOGAS = "=SE(A2=0;"";(K2-K3)/K3)";
    QString MEDIALNBIOGAS = "=MÉDIA(J2:J4)";

    //METANO
    QString MAXIMAMETANO = "=MÁXIMO(N5:N7)";
    QString MINIMOMETANO = "=MÍNIMO(N5:N7)";
    QString CRITERIOMETANO = "=SE(A2=0;"";(O2-O3)/O3)";
    QString MEDIAMETANO = "=SE(N5="";"";MÉDIA(N5:N7))";
    QString PORCENTAGEMMETANOBIOGAS = "=SE(Q5="";"";Q5/M5)";

    //Solidos TOTAIS - ST
    QString MEDIASOLIDOST = "=MÉDIA(S2:S4)*10";
    QString CRITERIOSOLIDOSST = "=((MAIOR(S2:S4;1))-(MENOR(S2:S4;1)))/(((MAIOR(S2:S4;1))+(MENOR(S2:S4;1)))/2)*100";

    //Solidos VOLATEIS - SV
    QString MEDIASOLIDOSV = "=MÉDIA(V2:V4)*10";
    QString CRITERIOSOLIDOSSV = "=((MAIOR(V2:V4;1))-(MENOR(V2:V4;1)))/(((MAIOR(V2:V4;1))+(MENOR(V2:V4;1)))/2)*100";

    //SF
    QString SF = "=100-V2";

    //DQO
    QString MEDIADQO = "=SE(Z2="";"";MÉDIA(Z2:Z4))";

    //PH
    QString MEDIAPH = "=SE(AB2="";"";MÉDIA(AB2:AB4))";

    //Valores do Form
    QString data_incubacao = ui->Edt_DataIncubacao->text();
    QString protocolo = ui->Edt_Protocolo->text();
    QString procedencia = ui->CmB_Procedencia->currentText();
    QString mercado = ui->CmB_Mercado->currentText();
    QString origem = ui->CmB_OrigemMateriaPrima->currentText();
    QString setor = ui->CmB_Setor->currentText();
    QString amostra = ui->CmB_AmostraFase->currentText();
    QString pontoColeta = ui->Edt_PontoColeta->text();
    QString informacao = ui->EdtText_InformacoesComplementares->toPlainText();

    //Campos Amostra 1
    QString biogas1 = ui->Edt_Biogas1->text();
    QString metano1 = ui->Edt_Metano1->text();
    QString st1 = ui->Edt_ST1->text();
    QString sv1 = ui->Edt_SV1->text();
    QString sf1 = ui->Edt_SF1->text();
    QString dqo1 = ui->Edt_DQO1->text();
    QString ph1 = ui->Edt_pH1->text();

    //Campos Amostra 2
    QString biogas2 = ui->Edt_Biogas2->text();
    QString metano2 = ui->Edt_Metano2->text();
    QString st2 = ui->Edt_ST2->text();
    QString sv2 = ui->Edt_SV2->text();
    QString sf2 = ui->Edt_SF2->text();
    QString dqo2 = ui->Edt_DQO2->text();
    QString ph2 = ui->Edt_pH2->text();

    //Campos Amostra 3
    QString biogas3 = ui->Edt_Biogas3->text();
    QString metano3 = ui->Edt_Metano3->text();
    QString st3 = ui->Edt_ST3->text();
    QString sv3 = ui->Edt_SV3->text();
    QString sf3 = ui->Edt_SF3->text();
    QString dqo3 = ui->Edt_DQO3->text();
    QString ph3 = ui->Edt_pH3->text();

    //Form
    // [2] Reading excel file(*.xlsx)
    Document xlsxR("Laboratorio.xlsx");
    if ( xlsxR.load() ) // load excel file
    {
        xlsxR.selectSheet("Sheet1");

        // criar estrutura de repetição para mudar a linha
        int row = 2;
        int col = 3;

        // get cell pointer
        Cell* cell = xlsxR.cellAt(row, col);

        // verificar se a linha nao estiver vazia
        while(cell) {
            row++;
            cell = xlsxR.cellAt(row, col);
        }

        //auxiliar para merge de celulas
        int linhaInicial = row;
        int linhaFinal = row + 2;

        //se a celula for igual a nula escrevemos uma nova linha
        //linha e coluna
        xlsxR.write(row,1, data_incubacao); // write to cell(row,col).
        xlsxR.mergeCells(QString("A%1").arg(linhaInicial) + ":" + QString("A%1").arg(linhaFinal), formato);

        xlsxR.write(row,2, protocolo);
        xlsxR.mergeCells(QString("B%1").arg(linhaInicial) + ":" + QString("B%1").arg(linhaFinal), formato);

        xlsxR.write(row,3, procedencia);
        xlsxR.mergeCells(QString("C%1").arg(linhaInicial) + ":" + QString("C%1").arg(linhaFinal), formato);

        xlsxR.write(row,4, mercado);
        xlsxR.mergeCells(QString("D%1").arg(linhaInicial) + ":" + QString("D%1").arg(linhaFinal), formato);

        xlsxR.write(row,5, origem);
        xlsxR.mergeCells(QString("E%1").arg(linhaInicial) + ":" + QString("E%1").arg(linhaFinal), formato);

        xlsxR.write(row,6, setor);
        xlsxR.mergeCells(QString("F%1").arg(linhaInicial) + ":" + QString("F%1").arg(linhaFinal), formato);

        xlsxR.write(row,7, amostra);
        xlsxR.mergeCells(QString("G%1").arg(linhaInicial) + ":" + QString("G%1").arg(linhaFinal), formato);

        xlsxR.write(row,8, pontoColeta);
        xlsxR.mergeCells(QString("H%1").arg(linhaInicial) + ":" + QString("H%1").arg(linhaFinal), formato);

        xlsxR.write(row,9, informacao);
        xlsxR.mergeCells(QString("I%1").arg(linhaInicial) + ":" + QString("I%1").arg(linhaFinal), formato);

        //Escrever 3 amostras na mesma coluna e em linhas diferentes
        //Coluna 10 - Biogas
        xlsxR.write(row,10, biogas1);
        xlsxR.write(row+1,10, biogas2);
        xlsxR.write(row+2,10, biogas3);

        QString LINHAS = QString("J%1").arg(linhaInicial) + ":" + QString("J%1").arg(linhaFinal);

        //Formulas Biogas
        xlsxR.write(row,11, "=MAXIMO("+ LINHAS +")");
        xlsxR.write(row+1,11, "=MÍNIMO("+ LINHAS +")");
        xlsxR.write(row,12, "=SE(A2=0;"";(K2-K3)/K3)");
        xlsxR.write(row,13, "=MÉDIA(J2:J4)");

        //Coluna 14 - Metano
        xlsxR.write(row,14, metano1);
        xlsxR.write(row+1,14, metano2);
        xlsxR.write(row+2,14, metano3);

        //Coluna 19 - ST
        xlsxR.write(row,19, st1);
        xlsxR.write(row+1,19, st2);
        xlsxR.write(row+2,19, st3);

        //Coluna 22 - SV
        xlsxR.write(row,22, sv1);
        xlsxR.write(row+1,22, sv2);
        xlsxR.write(row+2,22, sv3);

        //Coluna 26 - DQO
        xlsxR.write(row,26, dqo1);
        xlsxR.write(row+1,26, dqo2);
        xlsxR.write(row+2,26, dqo3);

        //Coluna 28 - PH
        xlsxR.write(row,28, ph1);
        xlsxR.write(row+1,28, ph2);
        xlsxR.write(row+2,28, ph3);

        //Formatar linhas com textos centralizados
        xlsxR.setRowFormat(row, formato);
        xlsxR.setRowFormat(row+1, formato);
        xlsxR.setRowFormat(row+2, formato);

        xlsxR.save();

        //Mensagem que salvou o arquivo no XLSX
        QMessageBox::information(this, "Salvar", "Salvo com sucesso! - Data de Incubação: " + data_incubacao);

        //Limpar Campos
        //ui->Edt_DataIncubacao->setDate("01/01/2019");
        ui->Edt_Protocolo->setText("");
        //ui->CmB_Mercado->
        //ui->CmB_Setor->
        //ui->CmB_AmostraFase->
        //ui->CmB_OrigemMateriaPrima->
        ui->Edt_PontoColeta->setText("");
        ui->EdtText_InformacoesComplementares->setText("");

        ui->Edt_Biogas1->setText("");
        ui->Edt_Biogas2->setText("");
        ui->Edt_Biogas3->setText("");

        ui->Edt_Metano1->setText("");
        ui->Edt_Metano2->setText("");
        ui->Edt_Metano3->setText("");

        ui->Edt_ST1->setText("");
        ui->Edt_ST2->setText("");
        ui->Edt_ST3->setText("");

        ui->Edt_SV1->setText("");
        ui->Edt_SV2->setText("");
        ui->Edt_SV3->setText("");

        ui->Edt_SF1->setText("");
        ui->Edt_SF2->setText("");
        ui->Edt_SF3->setText("");

        ui->Edt_DQO1->setText("");
        ui->Edt_DQO2->setText("");
        ui->Edt_DQO3->setText("");

        ui->Edt_pH1->setText("");
        ui->Edt_pH2->setText("");
        ui->Edt_pH3->setText("");

        qDebug() << "[debug] success to save data on xlsx file.";
    }
    else
    {
        qDebug() << "[debug][error] failed to load xlsx file.";
    }

}

void MainWindow::on_actionSair_triggered()
{
     QApplication::quit();
}

void MainWindow::on_CB_Amostra2_stateChanged(int arg1)
{
     qDebug() << arg1;

     if (arg1 == 2) {
         //ui->CB_Amostra3->setEnabled(true);

         //Edt Biogas
         ui->Edt_Biogas2->setEnabled(true);

         //Edt Metano
         ui->Edt_Metano2->setEnabled(true);

         //Edt ST
         ui->Edt_ST2->setEnabled(true);

         //Edt SV
         ui->Edt_SV2->setEnabled(true);

         //Edt SF
         ui->Edt_SF2->setEnabled(true);

         //Edt DQO
         ui->Edt_DQO2->setEnabled(true);

         //Edt pH
         ui->Edt_pH2->setEnabled(true);

     }

     if (arg1 == 0) {

         //ComboBox Amostra3
         //ui->CB_Amostra3->setChecked(false);
         //ui->CB_Amostra3->setEnabled(false);

         //Edt Biogas
         ui->Edt_Biogas2->setEnabled(false);
         ui->Edt_Biogas2->setText("");

         //Edt Metano
         ui->Edt_Metano2->setEnabled(false);
         ui->Edt_Metano2->setText("");

         //Edt ST
         ui->Edt_ST2->setEnabled(false);
         ui->Edt_ST2->setText("");

         //Edt SV
         ui->Edt_SV2->setEnabled(false);
         ui->Edt_SV2->setText("");

         //Edt SF
         ui->Edt_SF2->setEnabled(false);
         ui->Edt_SF2->setText("");

         //Edt DQO
         ui->Edt_DQO2->setEnabled(false);
         ui->Edt_DQO2->setText("");

         //Edt pH
         ui->Edt_pH2->setEnabled(false);
         ui->Edt_pH2->setText("");

         //Edts do Campo 3
         ui->Edt_pH3->setEnabled(false);
         ui->Edt_DQO3->setEnabled(false);
         ui->Edt_SF3->setEnabled(false);
         ui->Edt_SV3->setEnabled(false);
         ui->Edt_ST3->setEnabled(false);
         ui->Edt_Metano3->setEnabled(false);
         ui->Edt_Biogas3->setEnabled(false);
     }

}

void MainWindow::on_CB_Amostra3_stateChanged(int arg1)
{
     qDebug() << arg1;

    if (arg1 == 2) {
         ui->Edt_pH3->setEnabled(true);
         ui->Edt_DQO3->setEnabled(true);
         ui->Edt_SF3->setEnabled(true);
         ui->Edt_SV3->setEnabled(true);
         ui->Edt_ST3->setEnabled(true);
         ui->Edt_Metano3->setEnabled(true);
         ui->Edt_Biogas3->setEnabled(true);
    }

    if(arg1 == 0) {
        ui->Edt_pH3->setEnabled(false);
        ui->Edt_pH3->setText("");

        ui->Edt_DQO3->setEnabled(false);
        ui->Edt_DQO3->setText("");

        ui->Edt_SF3->setEnabled(false);
        ui->Edt_SF3->setText("");

        ui->Edt_SV3->setEnabled(false);
        ui->Edt_SV3->setText("");

        ui->Edt_ST3->setEnabled(false);
        ui->Edt_ST3->setText("");

        ui->Edt_Metano3->setEnabled(false);
        ui->Edt_Metano3->setText("");

        ui->Edt_Biogas3->setEnabled(false);
        ui->Edt_Biogas3->setText("");
    }
}
