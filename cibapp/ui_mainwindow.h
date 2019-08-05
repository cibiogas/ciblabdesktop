/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSair;
    QWidget *centralWidget;
    QGroupBox *GrBox_Classificacao;
    QLabel *Lbl_DataIncubacao;
    QDateEdit *Edt_DataIncubacao;
    QLabel *Lbl_Protocolo;
    QLineEdit *Edt_Protocolo;
    QLabel *Lbl_Mercado;
    QComboBox *CmB_Mercado;
    QLabel *Lbl_OrigemMateriaPrima;
    QLabel *Lbl_Setor;
    QLabel *Lbl_AmostraFase;
    QLabel *Lbl_PontoColeta;
    QLineEdit *Edt_PontoColeta;
    QLabel *Lbl_InformacaoComplementar;
    QTextEdit *EdtText_InformacoesComplementares;
    QComboBox *CmB_OrigemMateriaPrima;
    QComboBox *CmB_Setor;
    QComboBox *CmB_AmostraFase;
    QLabel *Lbl_Procedencia;
    QComboBox *CmB_Procedencia;
    QGroupBox *groupBox;
    QPushButton *Btn_Salvar;
    QGroupBox *GrBox_Valores;
    QLabel *Lbl_Biogas;
    QLineEdit *Edt_Biogas1;
    QLabel *Lbl_AmostraBiogas1;
    QLineEdit *Edt_Biogas2;
    QLineEdit *Edt_Biogas3;
    QLineEdit *Edt_Metano3;
    QLineEdit *Edt_Metano2;
    QLineEdit *Edt_Metano1;
    QLabel *Lbl_Metano;
    QLineEdit *Edt_ST1;
    QLineEdit *Edt_ST2;
    QLineEdit *Edt_ST3;
    QLabel *Lbl_ST;
    QLineEdit *Edt_SV3;
    QLabel *Lbl_SV1;
    QLineEdit *Edt_SV1;
    QLineEdit *Edt_SV2;
    QLineEdit *Edt_DQO3;
    QLineEdit *Edt_DQO2;
    QLineEdit *Edt_DQO1;
    QLabel *Lbl_DQO;
    QLineEdit *Edt_pH3;
    QLineEdit *Edt_pH1;
    QLineEdit *Edt_pH2;
    QLabel *Lbl_pH;
    QLabel *Lbl_DQO_2;
    QLabel *Lbl_SV1_2;
    QLabel *Lbl_Metano_2;
    QLabel *Lbl_ST_2;
    QLabel *Lbl_Biogas_2;
    QLabel *Lbl_pH_2;
    QLabel *Lbl_Metano_3;
    QLabel *Lbl_SV1_3;
    QLabel *Lbl_DQO_3;
    QLabel *Lbl_ST_3;
    QLabel *Lbl_Biogas_3;
    QLabel *Lbl_pH_3;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuAjuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1045, 728);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #e1e1e1;\n"
"}"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        GrBox_Classificacao = new QGroupBox(centralWidget);
        GrBox_Classificacao->setObjectName(QString::fromUtf8("GrBox_Classificacao"));
        GrBox_Classificacao->setGeometry(QRect(0, 0, 471, 621));
        GrBox_Classificacao->setAutoFillBackground(false);
        Lbl_DataIncubacao = new QLabel(GrBox_Classificacao);
        Lbl_DataIncubacao->setObjectName(QString::fromUtf8("Lbl_DataIncubacao"));
        Lbl_DataIncubacao->setGeometry(QRect(10, 10, 151, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Lbl_DataIncubacao->setFont(font);
        Edt_DataIncubacao = new QDateEdit(GrBox_Classificacao);
        Edt_DataIncubacao->setObjectName(QString::fromUtf8("Edt_DataIncubacao"));
        Edt_DataIncubacao->setGeometry(QRect(10, 30, 110, 27));
        Lbl_Protocolo = new QLabel(GrBox_Classificacao);
        Lbl_Protocolo->setObjectName(QString::fromUtf8("Lbl_Protocolo"));
        Lbl_Protocolo->setGeometry(QRect(10, 70, 91, 17));
        Lbl_Protocolo->setFont(font);
        Edt_Protocolo = new QLineEdit(GrBox_Classificacao);
        Edt_Protocolo->setObjectName(QString::fromUtf8("Edt_Protocolo"));
        Edt_Protocolo->setGeometry(QRect(10, 90, 151, 31));
        Lbl_Mercado = new QLabel(GrBox_Classificacao);
        Lbl_Mercado->setObjectName(QString::fromUtf8("Lbl_Mercado"));
        Lbl_Mercado->setGeometry(QRect(10, 200, 111, 17));
        Lbl_Mercado->setFont(font);
        CmB_Mercado = new QComboBox(GrBox_Classificacao);
        CmB_Mercado->addItem(QString());
        CmB_Mercado->addItem(QString());
        CmB_Mercado->addItem(QString());
        CmB_Mercado->addItem(QString());
        CmB_Mercado->addItem(QString());
        CmB_Mercado->addItem(QString());
        CmB_Mercado->setObjectName(QString::fromUtf8("CmB_Mercado"));
        CmB_Mercado->setGeometry(QRect(10, 220, 171, 25));
        Lbl_OrigemMateriaPrima = new QLabel(GrBox_Classificacao);
        Lbl_OrigemMateriaPrima->setObjectName(QString::fromUtf8("Lbl_OrigemMateriaPrima"));
        Lbl_OrigemMateriaPrima->setGeometry(QRect(10, 260, 191, 17));
        Lbl_OrigemMateriaPrima->setFont(font);
        Lbl_Setor = new QLabel(GrBox_Classificacao);
        Lbl_Setor->setObjectName(QString::fromUtf8("Lbl_Setor"));
        Lbl_Setor->setGeometry(QRect(10, 320, 41, 17));
        Lbl_Setor->setFont(font);
        Lbl_AmostraFase = new QLabel(GrBox_Classificacao);
        Lbl_AmostraFase->setObjectName(QString::fromUtf8("Lbl_AmostraFase"));
        Lbl_AmostraFase->setGeometry(QRect(10, 380, 111, 17));
        Lbl_AmostraFase->setFont(font);
        Lbl_PontoColeta = new QLabel(GrBox_Classificacao);
        Lbl_PontoColeta->setObjectName(QString::fromUtf8("Lbl_PontoColeta"));
        Lbl_PontoColeta->setGeometry(QRect(10, 440, 151, 17));
        Lbl_PontoColeta->setFont(font);
        Edt_PontoColeta = new QLineEdit(GrBox_Classificacao);
        Edt_PontoColeta->setObjectName(QString::fromUtf8("Edt_PontoColeta"));
        Edt_PontoColeta->setGeometry(QRect(10, 460, 401, 29));
        Lbl_InformacaoComplementar = new QLabel(GrBox_Classificacao);
        Lbl_InformacaoComplementar->setObjectName(QString::fromUtf8("Lbl_InformacaoComplementar"));
        Lbl_InformacaoComplementar->setGeometry(QRect(10, 510, 221, 17));
        Lbl_InformacaoComplementar->setFont(font);
        EdtText_InformacoesComplementares = new QTextEdit(GrBox_Classificacao);
        EdtText_InformacoesComplementares->setObjectName(QString::fromUtf8("EdtText_InformacoesComplementares"));
        EdtText_InformacoesComplementares->setGeometry(QRect(10, 530, 451, 64));
        EdtText_InformacoesComplementares->setAutoFillBackground(false);
        EdtText_InformacoesComplementares->setAcceptRichText(true);
        CmB_OrigemMateriaPrima = new QComboBox(GrBox_Classificacao);
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->addItem(QString());
        CmB_OrigemMateriaPrima->setObjectName(QString::fromUtf8("CmB_OrigemMateriaPrima"));
        CmB_OrigemMateriaPrima->setGeometry(QRect(10, 280, 261, 25));
        CmB_Setor = new QComboBox(GrBox_Classificacao);
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->addItem(QString());
        CmB_Setor->setObjectName(QString::fromUtf8("CmB_Setor"));
        CmB_Setor->setGeometry(QRect(10, 340, 261, 25));
        CmB_AmostraFase = new QComboBox(GrBox_Classificacao);
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->addItem(QString());
        CmB_AmostraFase->setObjectName(QString::fromUtf8("CmB_AmostraFase"));
        CmB_AmostraFase->setGeometry(QRect(10, 400, 261, 25));
        Lbl_Procedencia = new QLabel(GrBox_Classificacao);
        Lbl_Procedencia->setObjectName(QString::fromUtf8("Lbl_Procedencia"));
        Lbl_Procedencia->setGeometry(QRect(10, 140, 111, 10));
        Lbl_Procedencia->setFont(font);
        CmB_Procedencia = new QComboBox(GrBox_Classificacao);
        CmB_Procedencia->addItem(QString());
        CmB_Procedencia->addItem(QString());
        CmB_Procedencia->setObjectName(QString::fromUtf8("CmB_Procedencia"));
        CmB_Procedencia->setGeometry(QRect(10, 160, 171, 25));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 630, 1031, 51));
        Btn_Salvar = new QPushButton(groupBox);
        Btn_Salvar->setObjectName(QString::fromUtf8("Btn_Salvar"));
        Btn_Salvar->setGeometry(QRect(930, 10, 87, 29));
        GrBox_Valores = new QGroupBox(centralWidget);
        GrBox_Valores->setObjectName(QString::fromUtf8("GrBox_Valores"));
        GrBox_Valores->setGeometry(QRect(480, 0, 551, 621));
        GrBox_Valores->setAutoFillBackground(false);
        Lbl_Biogas = new QLabel(GrBox_Valores);
        Lbl_Biogas->setObjectName(QString::fromUtf8("Lbl_Biogas"));
        Lbl_Biogas->setGeometry(QRect(10, 40, 151, 17));
        Lbl_Biogas->setFont(font);
        Edt_Biogas1 = new QLineEdit(GrBox_Valores);
        Edt_Biogas1->setObjectName(QString::fromUtf8("Edt_Biogas1"));
        Edt_Biogas1->setGeometry(QRect(10, 60, 161, 21));
        Lbl_AmostraBiogas1 = new QLabel(GrBox_Valores);
        Lbl_AmostraBiogas1->setObjectName(QString::fromUtf8("Lbl_AmostraBiogas1"));
        Lbl_AmostraBiogas1->setGeometry(QRect(250, 10, 61, 17));
        Lbl_AmostraBiogas1->setFont(font);
        Edt_Biogas2 = new QLineEdit(GrBox_Valores);
        Edt_Biogas2->setObjectName(QString::fromUtf8("Edt_Biogas2"));
        Edt_Biogas2->setEnabled(true);
        Edt_Biogas2->setGeometry(QRect(10, 110, 161, 21));
        Edt_Biogas3 = new QLineEdit(GrBox_Valores);
        Edt_Biogas3->setObjectName(QString::fromUtf8("Edt_Biogas3"));
        Edt_Biogas3->setEnabled(true);
        Edt_Biogas3->setGeometry(QRect(10, 160, 161, 21));
        Edt_Metano3 = new QLineEdit(GrBox_Valores);
        Edt_Metano3->setObjectName(QString::fromUtf8("Edt_Metano3"));
        Edt_Metano3->setEnabled(true);
        Edt_Metano3->setGeometry(QRect(10, 330, 161, 21));
        Edt_Metano2 = new QLineEdit(GrBox_Valores);
        Edt_Metano2->setObjectName(QString::fromUtf8("Edt_Metano2"));
        Edt_Metano2->setEnabled(true);
        Edt_Metano2->setGeometry(QRect(10, 280, 161, 21));
        Edt_Metano1 = new QLineEdit(GrBox_Valores);
        Edt_Metano1->setObjectName(QString::fromUtf8("Edt_Metano1"));
        Edt_Metano1->setGeometry(QRect(10, 230, 161, 21));
        Lbl_Metano = new QLabel(GrBox_Valores);
        Lbl_Metano->setObjectName(QString::fromUtf8("Lbl_Metano"));
        Lbl_Metano->setGeometry(QRect(10, 210, 161, 17));
        Lbl_Metano->setFont(font);
        Edt_ST1 = new QLineEdit(GrBox_Valores);
        Edt_ST1->setObjectName(QString::fromUtf8("Edt_ST1"));
        Edt_ST1->setGeometry(QRect(10, 400, 161, 21));
        Edt_ST2 = new QLineEdit(GrBox_Valores);
        Edt_ST2->setObjectName(QString::fromUtf8("Edt_ST2"));
        Edt_ST2->setEnabled(true);
        Edt_ST2->setGeometry(QRect(10, 450, 161, 21));
        Edt_ST3 = new QLineEdit(GrBox_Valores);
        Edt_ST3->setObjectName(QString::fromUtf8("Edt_ST3"));
        Edt_ST3->setEnabled(true);
        Edt_ST3->setGeometry(QRect(10, 500, 161, 21));
        Lbl_ST = new QLabel(GrBox_Valores);
        Lbl_ST->setObjectName(QString::fromUtf8("Lbl_ST"));
        Lbl_ST->setGeometry(QRect(10, 380, 151, 17));
        Lbl_ST->setFont(font);
        Edt_SV3 = new QLineEdit(GrBox_Valores);
        Edt_SV3->setObjectName(QString::fromUtf8("Edt_SV3"));
        Edt_SV3->setEnabled(true);
        Edt_SV3->setGeometry(QRect(210, 160, 161, 21));
        Lbl_SV1 = new QLabel(GrBox_Valores);
        Lbl_SV1->setObjectName(QString::fromUtf8("Lbl_SV1"));
        Lbl_SV1->setGeometry(QRect(210, 40, 151, 17));
        Lbl_SV1->setFont(font);
        Edt_SV1 = new QLineEdit(GrBox_Valores);
        Edt_SV1->setObjectName(QString::fromUtf8("Edt_SV1"));
        Edt_SV1->setGeometry(QRect(210, 60, 161, 21));
        Edt_SV2 = new QLineEdit(GrBox_Valores);
        Edt_SV2->setObjectName(QString::fromUtf8("Edt_SV2"));
        Edt_SV2->setEnabled(true);
        Edt_SV2->setGeometry(QRect(210, 110, 161, 21));
        Edt_DQO3 = new QLineEdit(GrBox_Valores);
        Edt_DQO3->setObjectName(QString::fromUtf8("Edt_DQO3"));
        Edt_DQO3->setEnabled(true);
        Edt_DQO3->setGeometry(QRect(210, 330, 161, 21));
        Edt_DQO2 = new QLineEdit(GrBox_Valores);
        Edt_DQO2->setObjectName(QString::fromUtf8("Edt_DQO2"));
        Edt_DQO2->setEnabled(true);
        Edt_DQO2->setGeometry(QRect(210, 280, 161, 21));
        Edt_DQO1 = new QLineEdit(GrBox_Valores);
        Edt_DQO1->setObjectName(QString::fromUtf8("Edt_DQO1"));
        Edt_DQO1->setGeometry(QRect(210, 230, 161, 21));
        Lbl_DQO = new QLabel(GrBox_Valores);
        Lbl_DQO->setObjectName(QString::fromUtf8("Lbl_DQO"));
        Lbl_DQO->setGeometry(QRect(210, 210, 151, 17));
        Lbl_DQO->setFont(font);
        Edt_pH3 = new QLineEdit(GrBox_Valores);
        Edt_pH3->setObjectName(QString::fromUtf8("Edt_pH3"));
        Edt_pH3->setEnabled(true);
        Edt_pH3->setGeometry(QRect(210, 500, 161, 21));
        Edt_pH1 = new QLineEdit(GrBox_Valores);
        Edt_pH1->setObjectName(QString::fromUtf8("Edt_pH1"));
        Edt_pH1->setGeometry(QRect(210, 400, 161, 21));
        Edt_pH2 = new QLineEdit(GrBox_Valores);
        Edt_pH2->setObjectName(QString::fromUtf8("Edt_pH2"));
        Edt_pH2->setEnabled(true);
        Edt_pH2->setGeometry(QRect(210, 450, 161, 21));
        Lbl_pH = new QLabel(GrBox_Valores);
        Lbl_pH->setObjectName(QString::fromUtf8("Lbl_pH"));
        Lbl_pH->setGeometry(QRect(210, 380, 151, 17));
        Lbl_pH->setFont(font);
        Lbl_DQO_2 = new QLabel(GrBox_Valores);
        Lbl_DQO_2->setObjectName(QString::fromUtf8("Lbl_DQO_2"));
        Lbl_DQO_2->setGeometry(QRect(210, 260, 151, 17));
        Lbl_DQO_2->setFont(font);
        Lbl_SV1_2 = new QLabel(GrBox_Valores);
        Lbl_SV1_2->setObjectName(QString::fromUtf8("Lbl_SV1_2"));
        Lbl_SV1_2->setGeometry(QRect(210, 90, 151, 17));
        Lbl_SV1_2->setFont(font);
        Lbl_Metano_2 = new QLabel(GrBox_Valores);
        Lbl_Metano_2->setObjectName(QString::fromUtf8("Lbl_Metano_2"));
        Lbl_Metano_2->setGeometry(QRect(10, 260, 161, 17));
        Lbl_Metano_2->setFont(font);
        Lbl_ST_2 = new QLabel(GrBox_Valores);
        Lbl_ST_2->setObjectName(QString::fromUtf8("Lbl_ST_2"));
        Lbl_ST_2->setGeometry(QRect(10, 430, 151, 17));
        Lbl_ST_2->setFont(font);
        Lbl_Biogas_2 = new QLabel(GrBox_Valores);
        Lbl_Biogas_2->setObjectName(QString::fromUtf8("Lbl_Biogas_2"));
        Lbl_Biogas_2->setGeometry(QRect(10, 90, 151, 17));
        Lbl_Biogas_2->setFont(font);
        Lbl_pH_2 = new QLabel(GrBox_Valores);
        Lbl_pH_2->setObjectName(QString::fromUtf8("Lbl_pH_2"));
        Lbl_pH_2->setGeometry(QRect(210, 430, 151, 17));
        Lbl_pH_2->setFont(font);
        Lbl_Metano_3 = new QLabel(GrBox_Valores);
        Lbl_Metano_3->setObjectName(QString::fromUtf8("Lbl_Metano_3"));
        Lbl_Metano_3->setGeometry(QRect(10, 310, 161, 17));
        Lbl_Metano_3->setFont(font);
        Lbl_SV1_3 = new QLabel(GrBox_Valores);
        Lbl_SV1_3->setObjectName(QString::fromUtf8("Lbl_SV1_3"));
        Lbl_SV1_3->setGeometry(QRect(210, 140, 151, 17));
        Lbl_SV1_3->setFont(font);
        Lbl_DQO_3 = new QLabel(GrBox_Valores);
        Lbl_DQO_3->setObjectName(QString::fromUtf8("Lbl_DQO_3"));
        Lbl_DQO_3->setGeometry(QRect(210, 310, 151, 17));
        Lbl_DQO_3->setFont(font);
        Lbl_ST_3 = new QLabel(GrBox_Valores);
        Lbl_ST_3->setObjectName(QString::fromUtf8("Lbl_ST_3"));
        Lbl_ST_3->setGeometry(QRect(10, 480, 151, 17));
        Lbl_ST_3->setFont(font);
        Lbl_Biogas_3 = new QLabel(GrBox_Valores);
        Lbl_Biogas_3->setObjectName(QString::fromUtf8("Lbl_Biogas_3"));
        Lbl_Biogas_3->setGeometry(QRect(10, 140, 151, 17));
        Lbl_Biogas_3->setFont(font);
        Lbl_pH_3 = new QLabel(GrBox_Valores);
        Lbl_pH_3->setObjectName(QString::fromUtf8("Lbl_pH_3"));
        Lbl_pH_3->setGeometry(QRect(210, 480, 151, 17));
        Lbl_pH_3->setFont(font);
        line = new QFrame(GrBox_Valores);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 40, 20, 581));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(GrBox_Valores);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 190, 161, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(GrBox_Valores);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 360, 161, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(GrBox_Valores);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(210, 190, 161, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(GrBox_Valores);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(210, 360, 161, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(GrBox_Valores);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(370, 40, 20, 581));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1045, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionSair);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CIBLAB - Compila\303\247\303\243o de Dados Laborat\303\263rio", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        GrBox_Classificacao->setTitle(QString());
        Lbl_DataIncubacao->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Data de incuba\303\247\303\243o*</p></body></html>", nullptr));
        Lbl_Protocolo->setText(QCoreApplication::translate("MainWindow", "Protocolo*", nullptr));
        Edt_Protocolo->setText(QCoreApplication::translate("MainWindow", "IN-18/03/19", nullptr));
        Lbl_Mercado->setText(QCoreApplication::translate("MainWindow", "Mercado*", nullptr));
        CmB_Mercado->setItemText(0, QCoreApplication::translate("MainWindow", "--Selecione--", nullptr));
        CmB_Mercado->setItemText(1, QCoreApplication::translate("MainWindow", "AgroInd\303\272stria", nullptr));
        CmB_Mercado->setItemText(2, QCoreApplication::translate("MainWindow", "Cultura energ\303\251tica", nullptr));
        CmB_Mercado->setItemText(3, QCoreApplication::translate("MainWindow", "Garantia de qualidade", nullptr));
        CmB_Mercado->setItemText(4, QCoreApplication::translate("MainWindow", "Ind\303\272stria", nullptr));
        CmB_Mercado->setItemText(5, QCoreApplication::translate("MainWindow", "Res\303\255duo urbano", nullptr));

        Lbl_OrigemMateriaPrima->setText(QCoreApplication::translate("MainWindow", "Origem da Mat\303\251ria Prima*", nullptr));
        Lbl_Setor->setText(QCoreApplication::translate("MainWindow", "Setor*", nullptr));
        Lbl_AmostraFase->setText(QCoreApplication::translate("MainWindow", "Amostra/fase*", nullptr));
        Lbl_PontoColeta->setText(QCoreApplication::translate("MainWindow", "Ponto de Coleta", nullptr));
        Edt_PontoColeta->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Lbl_InformacaoComplementar->setText(QCoreApplication::translate("MainWindow", "Informa\303\247\303\265es Complementares", nullptr));
        EdtText_InformacoesComplementares->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", nullptr));
        CmB_OrigemMateriaPrima->setItemText(0, QCoreApplication::translate("MainWindow", "--Selecione--", nullptr));
        CmB_OrigemMateriaPrima->setItemText(1, QCoreApplication::translate("MainWindow", "Codigest\303\243o", nullptr));
        CmB_OrigemMateriaPrima->setItemText(2, QCoreApplication::translate("MainWindow", "Cultivo energ\303\251tico", nullptr));
        CmB_OrigemMateriaPrima->setItemText(3, QCoreApplication::translate("MainWindow", "Padr\303\243o", nullptr));
        CmB_OrigemMateriaPrima->setItemText(4, QCoreApplication::translate("MainWindow", "Res\303\255duo de tratamento de esgoto", nullptr));
        CmB_OrigemMateriaPrima->setItemText(5, QCoreApplication::translate("MainWindow", "Res\303\255duos alimentares", nullptr));
        CmB_OrigemMateriaPrima->setItemText(6, QCoreApplication::translate("MainWindow", "Res\303\255duo da ind\303\272stria agropecu\303\241ria", nullptr));
        CmB_OrigemMateriaPrima->setItemText(7, QCoreApplication::translate("MainWindow", "Res\303\255duo da industria de biocombustiveis", nullptr));
        CmB_OrigemMateriaPrima->setItemText(8, QCoreApplication::translate("MainWindow", "Res\303\255duos da produ\303\247\303\243o de a\303\247\303\272car, am\303\255do e produtos secund\303\241rios", nullptr));

        CmB_Setor->setItemText(0, QCoreApplication::translate("MainWindow", "--Selecione--", nullptr));
        CmB_Setor->setItemText(1, QCoreApplication::translate("MainWindow", "Abatedouro de aves", nullptr));
        CmB_Setor->setItemText(2, QCoreApplication::translate("MainWindow", "Alga", nullptr));
        CmB_Setor->setItemText(3, QCoreApplication::translate("MainWindow", "Alho", nullptr));
        CmB_Setor->setItemText(4, QCoreApplication::translate("MainWindow", "Amidonaria", nullptr));
        CmB_Setor->setItemText(5, QCoreApplication::translate("MainWindow", "Avicultura", nullptr));
        CmB_Setor->setItemText(6, QCoreApplication::translate("MainWindow", "Biomassa vegetal", nullptr));
        CmB_Setor->setItemText(7, QCoreApplication::translate("MainWindow", "Bovinocultura", nullptr));
        CmB_Setor->setItemText(8, QCoreApplication::translate("MainWindow", "Carne", nullptr));
        CmB_Setor->setItemText(9, QCoreApplication::translate("MainWindow", "Cebola", nullptr));
        CmB_Setor->setItemText(10, QCoreApplication::translate("MainWindow", "Efluente industrial", nullptr));

        CmB_AmostraFase->setItemText(0, QCoreApplication::translate("MainWindow", "--Selecione--", nullptr));
        CmB_AmostraFase->setItemText(1, QCoreApplication::translate("MainWindow", "\303\201gua residual", nullptr));
        CmB_AmostraFase->setItemText(2, QCoreApplication::translate("MainWindow", "Algas decantadas", nullptr));
        CmB_AmostraFase->setItemText(3, QCoreApplication::translate("MainWindow", "Algas floculadas", nullptr));
        CmB_AmostraFase->setItemText(4, QCoreApplication::translate("MainWindow", "Alho", nullptr));
        CmB_AmostraFase->setItemText(5, QCoreApplication::translate("MainWindow", "Amido de Mandioca", nullptr));
        CmB_AmostraFase->setItemText(6, QCoreApplication::translate("MainWindow", "Amostra s\303\263lida", nullptr));
        CmB_AmostraFase->setItemText(7, QCoreApplication::translate("MainWindow", "Amostra suco", nullptr));
        CmB_AmostraFase->setItemText(8, QCoreApplication::translate("MainWindow", "Armazenamento", nullptr));

        Lbl_Procedencia->setText(QCoreApplication::translate("MainWindow", "Proced\303\252ncia*", nullptr));
        CmB_Procedencia->setItemText(0, QCoreApplication::translate("MainWindow", "--Selecione--", nullptr));
        CmB_Procedencia->setItemText(1, QCoreApplication::translate("MainWindow", "Laborat\303\263rio", nullptr));

        groupBox->setTitle(QString());
        Btn_Salvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        GrBox_Valores->setTitle(QString());
        Lbl_Biogas->setText(QCoreApplication::translate("MainWindow", "Biog\303\241s 1 (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Edt_Biogas1->setText(QCoreApplication::translate("MainWindow", "61", nullptr));
        Lbl_AmostraBiogas1->setText(QCoreApplication::translate("MainWindow", "Amostras", nullptr));
        Edt_Biogas2->setText(QCoreApplication::translate("MainWindow", "56", nullptr));
        Edt_Biogas3->setText(QCoreApplication::translate("MainWindow", "59", nullptr));
        Edt_Metano3->setText(QCoreApplication::translate("MainWindow", "321", nullptr));
        Edt_Metano2->setText(QCoreApplication::translate("MainWindow", "302", nullptr));
        Edt_Metano1->setText(QCoreApplication::translate("MainWindow", "288", nullptr));
        Lbl_Metano->setText(QCoreApplication::translate("MainWindow", "Metano 1 (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Edt_ST1->setText(QCoreApplication::translate("MainWindow", "95", nullptr));
        Edt_ST2->setText(QCoreApplication::translate("MainWindow", "79", nullptr));
        Edt_ST3->setText(QCoreApplication::translate("MainWindow", "95", nullptr));
        Lbl_ST->setText(QCoreApplication::translate("MainWindow", "ST 1 (%)", nullptr));
        Edt_SV3->setText(QCoreApplication::translate("MainWindow", "64", nullptr));
        Lbl_SV1->setText(QCoreApplication::translate("MainWindow", "SV 1 (%)", nullptr));
        Edt_SV1->setText(QCoreApplication::translate("MainWindow", "64", nullptr));
        Edt_SV2->setText(QCoreApplication::translate("MainWindow", "64", nullptr));
        Edt_DQO3->setText(QCoreApplication::translate("MainWindow", "986", nullptr));
        Edt_DQO2->setText(QCoreApplication::translate("MainWindow", "456", nullptr));
        Edt_DQO1->setText(QCoreApplication::translate("MainWindow", "664", nullptr));
        Lbl_DQO->setText(QCoreApplication::translate("MainWindow", "DQO 1 (mg de O2/L) (%)", nullptr));
        Edt_pH3->setText(QCoreApplication::translate("MainWindow", "74", nullptr));
        Edt_pH1->setText(QCoreApplication::translate("MainWindow", "75", nullptr));
        Edt_pH2->setText(QCoreApplication::translate("MainWindow", "74", nullptr));
        Lbl_pH->setText(QCoreApplication::translate("MainWindow", "pH 1", nullptr));
        Lbl_DQO_2->setText(QCoreApplication::translate("MainWindow", "DQO 2 (mg de O2/L) (%)", nullptr));
        Lbl_SV1_2->setText(QCoreApplication::translate("MainWindow", "SV 2 (%)", nullptr));
        Lbl_Metano_2->setText(QCoreApplication::translate("MainWindow", "Metano 2 (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_ST_2->setText(QCoreApplication::translate("MainWindow", "ST 2 (%)", nullptr));
        Lbl_Biogas_2->setText(QCoreApplication::translate("MainWindow", "Biog\303\241s 2 (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_pH_2->setText(QCoreApplication::translate("MainWindow", "pH 2", nullptr));
        Lbl_Metano_3->setText(QCoreApplication::translate("MainWindow", "Metano 3 (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_SV1_3->setText(QCoreApplication::translate("MainWindow", "SV 3 (%)", nullptr));
        Lbl_DQO_3->setText(QCoreApplication::translate("MainWindow", "DQO 3 (mg de O2/L) (%)", nullptr));
        Lbl_ST_3->setText(QCoreApplication::translate("MainWindow", "ST 3 (%)", nullptr));
        Lbl_Biogas_3->setText(QCoreApplication::translate("MainWindow", "Biog\303\241s 3 (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_pH_3->setText(QCoreApplication::translate("MainWindow", "pH 3", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuAjuda->setTitle(QCoreApplication::translate("MainWindow", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
