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

    //Você pode conectar o sinal currentIndexChanged () da primeira caixa de combinação a um slot que verifica se a seleção atual é "Numbers" ou
    //"Alphabets" e com base no que é selecionado instancia um QComboBox do tipo correto para o segundo e o substitui.

    //Outra opção é colocar todas as várias caixas de combinação para "Comando" em um QStackedWidget e depois em currentIndexChanged ()
    //da primeira caixa de combinação para verificar qual é a seleção atual e alternar o QStackedWidget para a página contendo a caixa de
    //combinação Comando correspondente.

    ui->setupUi(this);

    //Seta Data Atual no Edit de Data Incubacao
    ui->Edt_DataIncubacao->setDate(QDate::currentDate());

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

    //Edt DQO
    //ui->Edt_DQO2->setEnabled(false);
    //ui->Edt_DQO3->setEnabled(false);

    //Edt pH
    //ui->Edt_pH2->setEnabled(false);
    //ui->Edt_pH3->setEnabled(false);

    //ui->Edt_Metano1->setValidator(new QIntValidator(0, 10000000, this));

    //Regular Expression
    QRegExp rx ("[0-9]{1,5}\\.[0-9]{1,5}\\.[0-9]{1,5}\\.[0-9]{1,5}");

    //Validadores para numeros para os campos
    ui->Edt_Biogas1->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_Biogas1->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_Biogas1->setValidator(new QRegExpValidator (rx, this));

    ui->Edt_Metano1->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_Metano2->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_Metano3->setValidator(new QRegExpValidator (rx, this));

    ui->Edt_ST1->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_ST2->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_ST3->setValidator(new QRegExpValidator (rx, this));

    ui->Edt_SV1->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_SV2->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_SV3->setValidator(new QRegExpValidator (rx, this));

    ui->Edt_DQO1->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_DQO2->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_DQO3->setValidator(new QRegExpValidator (rx, this));

    ui->Edt_pH1->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_pH2->setValidator(new QRegExpValidator (rx, this));
    ui->Edt_pH3->setValidator(new QRegExpValidator (rx, this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Btn_Salvar_clicked()
{

    //Merge de Celulas
    Format formato;
    formato.setHorizontalAlignment(Format::AlignHCenter);
    formato.setVerticalAlignment(Format::AlignVCenter);

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
    QString dqo1 = ui->Edt_DQO1->text();
    QString ph1 = ui->Edt_pH1->text();

    //Campos Amostra 2
    QString biogas2 = ui->Edt_Biogas2->text();
    QString metano2 = ui->Edt_Metano2->text();
    QString st2 = ui->Edt_ST2->text();
    QString sv2 = ui->Edt_SV2->text();
    QString dqo2 = ui->Edt_DQO2->text();
    QString ph2 = ui->Edt_pH2->text();

    //Campos Amostra 3
    QString biogas3 = ui->Edt_Biogas3->text();
    QString metano3 = ui->Edt_Metano3->text();
    QString st3 = ui->Edt_ST3->text();
    QString sv3 = ui->Edt_SV3->text();
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
        int col = 10;

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
        int linhaFinalCriterio = row + 1;

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

        //INICIO-BIOGAS-------------------------------------------------------
        //Coluna 10 - Biogas
        //Valores Convertidos

        //Verificar valores antes de salvar
        if (biogas1 != "-" && biogas1 != "") {
            xlsxR.write(row,10,  biogas1.toInt());
        } else {
            xlsxR.write(row,10,  "-");
        }

        if (biogas2 != "-" && biogas2 != "") {
            xlsxR.write(row+1,10, biogas2.toInt());
        } else {
            xlsxR.write(row+1,10, "-");
        }

        if (biogas3 != "-" && biogas3 != "") {
            xlsxR.write(row+2,10, biogas3.toInt());
        } else {
            xlsxR.write(row+2,10, "-");
        }

        //Linha contendo as celulas selecionadas - Coluna J
        QString LINHASBIOGAS = QString("J%1").arg(linhaInicial) + ":" + QString("J%1").arg(linhaFinal);

        //Linha contendo as celulas selecionadas - Coluna K
        QString LINHACRITERIOBIOGAS = "(" + QString("K%1").arg(linhaInicial) + "-" + QString("K%1").arg(linhaFinalCriterio) + ")" + "/" + QString("K%1").arg(linhaFinalCriterio);

        //Formulas Biogas
        xlsxR.write(row,11, "=MAX("+ LINHASBIOGAS +")");
        xlsxR.write(row+1,11, "=MIN(" + LINHASBIOGAS +")");
        xlsxR.write(row, 12, "=(" + LINHACRITERIOBIOGAS + ")*100"); // Coluna L
        xlsxR.write(row,13, "=AVERAGE("+ LINHASBIOGAS +")");
        //FIM-BIOGAS------------------------------------------------------

        //INICIO-METANO------------------------------------------------------

        //Coluna 14 - Metano

         //Verificar valores antes de salvar
        if (metano1 != "-" && metano1 != "") {
            xlsxR.write(row,14, metano1.toInt());
        } else {
            xlsxR.write(row,14,  "-");
        }

        if (metano2 != "-" && metano2 != "") {
            xlsxR.write(row+1,14, metano2.toInt());
        } else {
            xlsxR.write(row+1,14, "-");
        }

        if (metano3 != "-" && metano3 != "") {
            xlsxR.write(row+2,14, metano3.toInt());
        } else {
            xlsxR.write(row+2,14, "-");
        }

        //Auxiliares de Calculo
        QString LINHASMETANO = QString("N%1").arg(linhaInicial) + ":" + QString("N%1").arg(linhaFinal);
        QString LINHACRITERIOMETANO = "(" + QString("O%1").arg(linhaInicial) + "-" + QString("O%1").arg(linhaFinalCriterio) + ")" + "/" + QString("O%1").arg(linhaFinalCriterio);
        QString LINHAMETANOBIOGAS = "(" + QString("Q%1").arg(linhaInicial) + "/" + QString("M%1").arg(linhaInicial) + ")";

        //Formulas Metano
        xlsxR.write(row,15, "=MAX("+ LINHASMETANO +")");
        xlsxR.write(row+1,15, "=MIN(" + LINHASMETANO +")");
        xlsxR.write(row, 16, "=" + LINHACRITERIOMETANO);
        xlsxR.write(row,17, "=AVERAGE("+ LINHASMETANO +")"); // Coluna P
        xlsxR.write(row,18, "=" + LINHAMETANOBIOGAS); // Coluna Q

        //FIM-METANO------------------------------------------------------

        //INICIO-ST------------------------------------------------------

        //Coluna 19 - ST
        //Verificar valores antes de salvar
        if (st1 != "-" && st1 != "") {
           xlsxR.write(row,19, st1.toFloat());
        } else {
           xlsxR.write(row,19,  "-");
        }

        if (st2 != "-" && st2 != "") {
           xlsxR.write(row+1,19, st2.toFloat());
        } else {
           xlsxR.write(row+1,19, "-");
        }

        if (st3 != "-" && st3 != "") {
           xlsxR.write(row+2,19, st3.toFloat());
        } else {
           xlsxR.write(row+2,19, "-");
        }

        //Formulas Solidos Totais
        QString LINHASOLIDOSTOTAIS = QString("S%1").arg(linhaInicial) + ":" + QString("S%1").arg(linhaFinal);

        //=MÉDIA(S2:S4)*10
        xlsxR.write(row,20, "=AVERAGE("+ LINHASOLIDOSTOTAIS +")*10");

        //CRITERIO DE ACEITACAO
        //=((MAIOR(S2:S4;1))-(MENOR(S2:S4;1)))/(((MAIOR(S2:S4;1))+(MENOR(S2:S4;1)))/2)*100
        //Sugestao Libre Office
        //=((MÁXIMO(S2:S4;1))-(MÍNIMO(S2:S4;1)))/(((MÁXIMO(S2:S4;1))+(MÍNIMO(S2:S4;1)))/2)*100

        //Verificar
        QString formulaCriterioST = "=((MAX(" + LINHASOLIDOSTOTAIS + "))-(MIN(" + LINHASOLIDOSTOTAIS + ")))/(((MAX(" + LINHASOLIDOSTOTAIS + "))+(MIN(" + LINHASOLIDOSTOTAIS + ")))/2)*100";

        xlsxR.write(row,21, formulaCriterioST);

        //FIM-ST------------------------------------------------------

        //INICIO-SV------------------------------------------------------

        //Coluna 22 - SV
        //Verificar valores antes de salvar
        if (sv1 != "-" && sv1 != "") {
            xlsxR.write(row,22, sv1.toFloat());
        } else {
            QString aux = "";
            xlsxR.write(row,22, aux.toFloat());
        }

        if (sv2 != "-" && sv2 != "") {
            xlsxR.write(row+1,22, sv2.toFloat());
        } else {
            QString aux = "";
            xlsxR.write(row+1,22, aux.toFloat());
        }

        if (sv3 != "-" && sv3 != "") {
            xlsxR.write(row+2,22, sv3.toFloat());
        } else {
            QString aux = "";
            xlsxR.write(row+2,22, aux.toFloat());
        }

        //Formulas Solidos Totais
        QString LINHASV = QString("V%1").arg(linhaInicial) + ":" + QString("V%1").arg(linhaFinal);
        QString LINHASF1 = QString("V%1").arg(linhaInicial);
        QString LINHASF2 = QString("V%1").arg(linhaInicial+1);
        QString LINHASF3 = QString("V%1").arg(linhaInicial+2);

        //=MÉDIA(V2:V4)*10
        xlsxR.write(row,23, "=AVERAGE("+ LINHASV +")*10");

        //CRITERIO DE ACEITACAO SOLUDOS VOLATEIS
        //=((MAIOR(V2:V4;1))-(MENOR(V2:V4;1)))/(((MAIOR(V2:V4;1))+(MENOR(V2:V4;1)))/2)*100
        //Verificar
        QString formulaCriterioSV = "=((MAX(" + LINHASV + "))-(MIN(" + LINHASV + ")))/(((MAX(" + LINHASV + "))+(MIN(" + LINHASV + ")))/2)*100";

        xlsxR.write(row,24, formulaCriterioSV);

        xlsxR.write(row,25, "=100-" + LINHASF1);
        xlsxR.write(row+1,25, "=100-" + LINHASF2);
        xlsxR.write(row+2,25, "=100-" + LINHASF3);

        //FIM-SV----------------------------------------------------------

        //INICIO-DQO------------------------------------------------------

        //Coluna 26 - DQO
        //Verificar valores antes de salvar
        if (dqo1 != "-" && dqo1 != "") {
            xlsxR.write(row,26, dqo1.toInt());
        } else {
            xlsxR.write(row,26,  "-");
        }

        if (dqo2 != "-" && dqo2 != "") {
            xlsxR.write(row+1,26, dqo2.toInt());
        } else {
            xlsxR.write(row+1,26, "-");
        }

        if (dqo3 != "-" && dqo3 != "") {
            xlsxR.write(row+2,26, dqo3.toInt());
        } else {
            xlsxR.write(row+2,26, "-");
        }

        //Formulas DQO
        QString LINHADQO = QString("Z%1").arg(linhaInicial) + ":" + QString("Z%1").arg(linhaFinal);

        //=MÉDIA(AA2:AA4)
        //=SE(Z3641="-";"-";MÉDIA(Z3641:Z3643))
        xlsxR.write(row,27, "=IF("+ LINHADQO +"=\"-\";\"-\";AVERAGE("+ LINHADQO +")");
        xlsxR.mergeCells(QString("AA%1").arg(linhaInicial) + ":" + QString("AA%1").arg(linhaFinal), formato);

        //FIM-DQO---------------------------------------------------------

        //INICIO-PH------------------------------------------------------

        //Coluna 28 - PH
        //Verificar valores antes de salvar
        if (ph1 != "-" && ph1 != "") {
             xlsxR.write(row,28, ph1.toFloat());
        } else {
            xlsxR.write(row,28,  "-");
        }

        if (ph2 != "-" && ph2 != "") {
            xlsxR.write(row+1,28, ph2.toFloat());
        } else {
            xlsxR.write(row+1,28, "-");
        }

        if (ph3 != "-" && ph3 != "") {
             xlsxR.write(row+2,28, ph3.toFloat());
        } else {
            xlsxR.write(row+2,28, "-");
        }

        //Formulas PH
        QString LINHAPH = QString("AB%1").arg(linhaInicial) + ":" + QString("AB%1").arg(linhaFinal);

        //=MÉDIA(AB2:AB4)
        //=SE(AB3638="-";"-";MÉDIA(AB3638:AB3640))
        //=IF(AB3638="-";"-";AVERAGE(AB3638:AB3640))
        xlsxR.write(row,29, "=IF("+ LINHAPH +"=\"-\";\"-\";AVERAGE("+ LINHAPH +")");
        xlsxR.mergeCells(QString("AC%1").arg(linhaInicial) + ":" + QString("AC%1").arg(linhaFinal), formato);

        //FIM-PH------------------------------------------------------

        //Formatar linhas com textos centralizados
        xlsxR.setRowFormat(row, formato);
        xlsxR.setRowFormat(row+1, formato);
        xlsxR.setRowFormat(row+2, formato);

        //Salva linha na planilha
        if (xlsxR.save())
        {
            //Mensagem que salvou o arquivo no XLSX
            QMessageBox::information(this, "CIBLAB", "Salvo com sucesso! - Data de Incubação: " + data_incubacao);

            //Apos salvar chamar a funcao limpa textos
            //Limpar Campos
            ui->Edt_DataIncubacao->setDate(QDate::currentDate());
            ui->Edt_Protocolo->setText("");
            ui->CmB_Procedencia->setCurrentIndex(0);
            ui->CmB_Mercado->setCurrentIndex(0);
            ui->CmB_Setor->setCurrentIndex(0);
            ui->CmB_AmostraFase->setCurrentIndex(0);
            ui->CmB_OrigemMateriaPrima->setCurrentIndex(0);
            ui->Edt_PontoColeta->setText("-");
            ui->EdtText_InformacoesComplementares->setText("-");

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

            ui->Edt_DQO1->setText("");
            ui->Edt_DQO2->setText("");
            ui->Edt_DQO3->setText("");

            ui->Edt_pH1->setText("");
            ui->Edt_pH2->setText("");
            ui->Edt_pH3->setText("");

            qDebug() << "[debug] success to save data on xlsx file.";

        } else {
            //Mensagem de erro no arquivo XLSX
            QMessageBox::critical(this, "CIBLAB - Salvar", "Ocorreu um erro ao salvar as informações! Verifique se o arquivo esta protegido ou bloqueado por outro programa.");
        }

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

         //Edt DQO
         ui->Edt_DQO2->setEnabled(false);
         ui->Edt_DQO2->setText("");

         //Edt pH
         ui->Edt_pH2->setEnabled(false);
         ui->Edt_pH2->setText("");

         //Edts do Campo 3
         ui->Edt_pH3->setEnabled(false);
         ui->Edt_DQO3->setEnabled(false);
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
