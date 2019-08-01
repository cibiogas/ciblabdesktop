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
#include <QtWidgets/QCheckBox>
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
    QLineEdit *Edt_SF3;
    QLabel *Lbl_SF;
    QLineEdit *Edt_SF2;
    QLineEdit *Edt_SF1;
    QLineEdit *Edt_DQO3;
    QLineEdit *Edt_DQO2;
    QLineEdit *Edt_DQO1;
    QLabel *Lbl_DQO;
    QLineEdit *Edt_pH3;
    QLineEdit *Edt_pH1;
    QLineEdit *Edt_pH2;
    QLabel *Lbl_pH;
    QCheckBox *CB_Amostra2;
    QCheckBox *CB_Amostra3;
    QLabel *Lbl_DQO_2;
    QLabel *Lbl_SV1_2;
    QLabel *Lbl_Metano_2;
    QLabel *Lbl_SF_2;
    QLabel *Lbl_ST_2;
    QLabel *Lbl_Biogas_2;
    QLabel *Lbl_pH_2;
    QLabel *Lbl_Metano_3;
    QLabel *Lbl_SV1_3;
    QLabel *Lbl_DQO_3;
    QLabel *Lbl_SF_3;
    QLabel *Lbl_ST_3;
    QLabel *Lbl_Biogas_3;
    QLabel *Lbl_pH_3;
    QFrame *line;
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
        MainWindow->resize(1040, 728);
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
        CmB_AmostraFase->setObjectName(QString::fromUtf8("CmB_AmostraFase"));
        CmB_AmostraFase->setGeometry(QRect(10, 400, 261, 25));
        Lbl_Procedencia = new QLabel(GrBox_Classificacao);
        Lbl_Procedencia->setObjectName(QString::fromUtf8("Lbl_Procedencia"));
        Lbl_Procedencia->setGeometry(QRect(10, 140, 111, 10));
        Lbl_Procedencia->setFont(font);
        CmB_Procedencia = new QComboBox(GrBox_Classificacao);
        CmB_Procedencia->addItem(QString());
        CmB_Procedencia->setObjectName(QString::fromUtf8("CmB_Procedencia"));
        CmB_Procedencia->setGeometry(QRect(10, 160, 171, 25));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 630, 1021, 51));
        Btn_Salvar = new QPushButton(groupBox);
        Btn_Salvar->setObjectName(QString::fromUtf8("Btn_Salvar"));
        Btn_Salvar->setGeometry(QRect(910, 10, 87, 29));
        GrBox_Valores = new QGroupBox(centralWidget);
        GrBox_Valores->setObjectName(QString::fromUtf8("GrBox_Valores"));
        GrBox_Valores->setGeometry(QRect(480, 0, 541, 621));
        GrBox_Valores->setAutoFillBackground(false);
        Lbl_Biogas = new QLabel(GrBox_Valores);
        Lbl_Biogas->setObjectName(QString::fromUtf8("Lbl_Biogas"));
        Lbl_Biogas->setGeometry(QRect(10, 40, 151, 17));
        Lbl_Biogas->setFont(font);
        Edt_Biogas1 = new QLineEdit(GrBox_Valores);
        Edt_Biogas1->setObjectName(QString::fromUtf8("Edt_Biogas1"));
        Edt_Biogas1->setGeometry(QRect(10, 60, 151, 21));
        Lbl_AmostraBiogas1 = new QLabel(GrBox_Valores);
        Lbl_AmostraBiogas1->setObjectName(QString::fromUtf8("Lbl_AmostraBiogas1"));
        Lbl_AmostraBiogas1->setGeometry(QRect(50, 10, 61, 17));
        Lbl_AmostraBiogas1->setFont(font);
        Edt_Biogas2 = new QLineEdit(GrBox_Valores);
        Edt_Biogas2->setObjectName(QString::fromUtf8("Edt_Biogas2"));
        Edt_Biogas2->setEnabled(true);
        Edt_Biogas2->setGeometry(QRect(200, 60, 151, 21));
        Edt_Biogas3 = new QLineEdit(GrBox_Valores);
        Edt_Biogas3->setObjectName(QString::fromUtf8("Edt_Biogas3"));
        Edt_Biogas3->setEnabled(true);
        Edt_Biogas3->setGeometry(QRect(370, 60, 151, 21));
        Edt_Metano3 = new QLineEdit(GrBox_Valores);
        Edt_Metano3->setObjectName(QString::fromUtf8("Edt_Metano3"));
        Edt_Metano3->setEnabled(true);
        Edt_Metano3->setGeometry(QRect(370, 110, 151, 21));
        Edt_Metano2 = new QLineEdit(GrBox_Valores);
        Edt_Metano2->setObjectName(QString::fromUtf8("Edt_Metano2"));
        Edt_Metano2->setEnabled(true);
        Edt_Metano2->setGeometry(QRect(200, 110, 151, 21));
        Edt_Metano1 = new QLineEdit(GrBox_Valores);
        Edt_Metano1->setObjectName(QString::fromUtf8("Edt_Metano1"));
        Edt_Metano1->setGeometry(QRect(10, 110, 151, 21));
        Lbl_Metano = new QLabel(GrBox_Valores);
        Lbl_Metano->setObjectName(QString::fromUtf8("Lbl_Metano"));
        Lbl_Metano->setGeometry(QRect(10, 90, 161, 17));
        Lbl_Metano->setFont(font);
        Edt_ST1 = new QLineEdit(GrBox_Valores);
        Edt_ST1->setObjectName(QString::fromUtf8("Edt_ST1"));
        Edt_ST1->setGeometry(QRect(10, 160, 151, 21));
        Edt_ST2 = new QLineEdit(GrBox_Valores);
        Edt_ST2->setObjectName(QString::fromUtf8("Edt_ST2"));
        Edt_ST2->setEnabled(true);
        Edt_ST2->setGeometry(QRect(200, 160, 151, 21));
        Edt_ST3 = new QLineEdit(GrBox_Valores);
        Edt_ST3->setObjectName(QString::fromUtf8("Edt_ST3"));
        Edt_ST3->setEnabled(true);
        Edt_ST3->setGeometry(QRect(370, 160, 151, 21));
        Lbl_ST = new QLabel(GrBox_Valores);
        Lbl_ST->setObjectName(QString::fromUtf8("Lbl_ST"));
        Lbl_ST->setGeometry(QRect(10, 140, 151, 17));
        Lbl_ST->setFont(font);
        Edt_SV3 = new QLineEdit(GrBox_Valores);
        Edt_SV3->setObjectName(QString::fromUtf8("Edt_SV3"));
        Edt_SV3->setEnabled(true);
        Edt_SV3->setGeometry(QRect(370, 210, 151, 21));
        Lbl_SV1 = new QLabel(GrBox_Valores);
        Lbl_SV1->setObjectName(QString::fromUtf8("Lbl_SV1"));
        Lbl_SV1->setGeometry(QRect(10, 190, 151, 17));
        Lbl_SV1->setFont(font);
        Edt_SV1 = new QLineEdit(GrBox_Valores);
        Edt_SV1->setObjectName(QString::fromUtf8("Edt_SV1"));
        Edt_SV1->setGeometry(QRect(10, 210, 151, 21));
        Edt_SV2 = new QLineEdit(GrBox_Valores);
        Edt_SV2->setObjectName(QString::fromUtf8("Edt_SV2"));
        Edt_SV2->setEnabled(true);
        Edt_SV2->setGeometry(QRect(200, 210, 151, 21));
        Edt_SF3 = new QLineEdit(GrBox_Valores);
        Edt_SF3->setObjectName(QString::fromUtf8("Edt_SF3"));
        Edt_SF3->setEnabled(true);
        Edt_SF3->setGeometry(QRect(370, 260, 151, 21));
        Lbl_SF = new QLabel(GrBox_Valores);
        Lbl_SF->setObjectName(QString::fromUtf8("Lbl_SF"));
        Lbl_SF->setGeometry(QRect(10, 240, 151, 17));
        Lbl_SF->setFont(font);
        Edt_SF2 = new QLineEdit(GrBox_Valores);
        Edt_SF2->setObjectName(QString::fromUtf8("Edt_SF2"));
        Edt_SF2->setEnabled(true);
        Edt_SF2->setGeometry(QRect(200, 260, 151, 21));
        Edt_SF1 = new QLineEdit(GrBox_Valores);
        Edt_SF1->setObjectName(QString::fromUtf8("Edt_SF1"));
        Edt_SF1->setGeometry(QRect(10, 260, 151, 21));
        Edt_DQO3 = new QLineEdit(GrBox_Valores);
        Edt_DQO3->setObjectName(QString::fromUtf8("Edt_DQO3"));
        Edt_DQO3->setEnabled(true);
        Edt_DQO3->setGeometry(QRect(370, 310, 151, 21));
        Edt_DQO2 = new QLineEdit(GrBox_Valores);
        Edt_DQO2->setObjectName(QString::fromUtf8("Edt_DQO2"));
        Edt_DQO2->setEnabled(true);
        Edt_DQO2->setGeometry(QRect(200, 310, 151, 21));
        Edt_DQO1 = new QLineEdit(GrBox_Valores);
        Edt_DQO1->setObjectName(QString::fromUtf8("Edt_DQO1"));
        Edt_DQO1->setGeometry(QRect(10, 310, 151, 21));
        Lbl_DQO = new QLabel(GrBox_Valores);
        Lbl_DQO->setObjectName(QString::fromUtf8("Lbl_DQO"));
        Lbl_DQO->setGeometry(QRect(10, 290, 151, 17));
        Lbl_DQO->setFont(font);
        Edt_pH3 = new QLineEdit(GrBox_Valores);
        Edt_pH3->setObjectName(QString::fromUtf8("Edt_pH3"));
        Edt_pH3->setEnabled(true);
        Edt_pH3->setGeometry(QRect(370, 360, 151, 21));
        Edt_pH1 = new QLineEdit(GrBox_Valores);
        Edt_pH1->setObjectName(QString::fromUtf8("Edt_pH1"));
        Edt_pH1->setGeometry(QRect(10, 360, 151, 21));
        Edt_pH2 = new QLineEdit(GrBox_Valores);
        Edt_pH2->setObjectName(QString::fromUtf8("Edt_pH2"));
        Edt_pH2->setEnabled(true);
        Edt_pH2->setGeometry(QRect(200, 360, 151, 21));
        Lbl_pH = new QLabel(GrBox_Valores);
        Lbl_pH->setObjectName(QString::fromUtf8("Lbl_pH"));
        Lbl_pH->setGeometry(QRect(10, 340, 151, 17));
        Lbl_pH->setFont(font);
        CB_Amostra2 = new QCheckBox(GrBox_Valores);
        CB_Amostra2->setObjectName(QString::fromUtf8("CB_Amostra2"));
        CB_Amostra2->setGeometry(QRect(220, 10, 87, 22));
        CB_Amostra2->setFont(font);
        CB_Amostra3 = new QCheckBox(GrBox_Valores);
        CB_Amostra3->setObjectName(QString::fromUtf8("CB_Amostra3"));
        CB_Amostra3->setGeometry(QRect(400, 10, 87, 22));
        CB_Amostra3->setFont(font);
        Lbl_DQO_2 = new QLabel(GrBox_Valores);
        Lbl_DQO_2->setObjectName(QString::fromUtf8("Lbl_DQO_2"));
        Lbl_DQO_2->setGeometry(QRect(200, 290, 151, 17));
        Lbl_DQO_2->setFont(font);
        Lbl_SV1_2 = new QLabel(GrBox_Valores);
        Lbl_SV1_2->setObjectName(QString::fromUtf8("Lbl_SV1_2"));
        Lbl_SV1_2->setGeometry(QRect(200, 190, 151, 17));
        Lbl_SV1_2->setFont(font);
        Lbl_Metano_2 = new QLabel(GrBox_Valores);
        Lbl_Metano_2->setObjectName(QString::fromUtf8("Lbl_Metano_2"));
        Lbl_Metano_2->setGeometry(QRect(200, 90, 161, 17));
        Lbl_Metano_2->setFont(font);
        Lbl_SF_2 = new QLabel(GrBox_Valores);
        Lbl_SF_2->setObjectName(QString::fromUtf8("Lbl_SF_2"));
        Lbl_SF_2->setGeometry(QRect(200, 240, 151, 17));
        Lbl_SF_2->setFont(font);
        Lbl_ST_2 = new QLabel(GrBox_Valores);
        Lbl_ST_2->setObjectName(QString::fromUtf8("Lbl_ST_2"));
        Lbl_ST_2->setGeometry(QRect(200, 140, 151, 17));
        Lbl_ST_2->setFont(font);
        Lbl_Biogas_2 = new QLabel(GrBox_Valores);
        Lbl_Biogas_2->setObjectName(QString::fromUtf8("Lbl_Biogas_2"));
        Lbl_Biogas_2->setGeometry(QRect(200, 40, 151, 17));
        Lbl_Biogas_2->setFont(font);
        Lbl_pH_2 = new QLabel(GrBox_Valores);
        Lbl_pH_2->setObjectName(QString::fromUtf8("Lbl_pH_2"));
        Lbl_pH_2->setGeometry(QRect(200, 340, 151, 17));
        Lbl_pH_2->setFont(font);
        Lbl_Metano_3 = new QLabel(GrBox_Valores);
        Lbl_Metano_3->setObjectName(QString::fromUtf8("Lbl_Metano_3"));
        Lbl_Metano_3->setGeometry(QRect(370, 90, 161, 17));
        Lbl_Metano_3->setFont(font);
        Lbl_SV1_3 = new QLabel(GrBox_Valores);
        Lbl_SV1_3->setObjectName(QString::fromUtf8("Lbl_SV1_3"));
        Lbl_SV1_3->setGeometry(QRect(370, 190, 151, 17));
        Lbl_SV1_3->setFont(font);
        Lbl_DQO_3 = new QLabel(GrBox_Valores);
        Lbl_DQO_3->setObjectName(QString::fromUtf8("Lbl_DQO_3"));
        Lbl_DQO_3->setGeometry(QRect(370, 290, 151, 17));
        Lbl_DQO_3->setFont(font);
        Lbl_SF_3 = new QLabel(GrBox_Valores);
        Lbl_SF_3->setObjectName(QString::fromUtf8("Lbl_SF_3"));
        Lbl_SF_3->setGeometry(QRect(370, 240, 151, 17));
        Lbl_SF_3->setFont(font);
        Lbl_ST_3 = new QLabel(GrBox_Valores);
        Lbl_ST_3->setObjectName(QString::fromUtf8("Lbl_ST_3"));
        Lbl_ST_3->setGeometry(QRect(370, 140, 151, 17));
        Lbl_ST_3->setFont(font);
        Lbl_Biogas_3 = new QLabel(GrBox_Valores);
        Lbl_Biogas_3->setObjectName(QString::fromUtf8("Lbl_Biogas_3"));
        Lbl_Biogas_3->setGeometry(QRect(370, 40, 151, 17));
        Lbl_Biogas_3->setFont(font);
        Lbl_pH_3 = new QLabel(GrBox_Valores);
        Lbl_pH_3->setObjectName(QString::fromUtf8("Lbl_pH_3"));
        Lbl_pH_3->setGeometry(QRect(370, 340, 151, 17));
        Lbl_pH_3->setFont(font);
        line = new QFrame(GrBox_Valores);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(170, 0, 16, 381));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1040, 21));
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
        Lbl_DataIncubacao->setText(QCoreApplication::translate("MainWindow", "Data de incuba\303\247\303\243o", nullptr));
        Lbl_Protocolo->setText(QCoreApplication::translate("MainWindow", "Protocolo", nullptr));
        Lbl_Mercado->setText(QCoreApplication::translate("MainWindow", "Mercado", nullptr));
        CmB_Mercado->setItemText(0, QCoreApplication::translate("MainWindow", "AgroInd\303\272stria", nullptr));
        CmB_Mercado->setItemText(1, QCoreApplication::translate("MainWindow", "Cultura energ\303\251tica", nullptr));
        CmB_Mercado->setItemText(2, QCoreApplication::translate("MainWindow", "Garantia de qualidade", nullptr));
        CmB_Mercado->setItemText(3, QCoreApplication::translate("MainWindow", "Ind\303\272stria", nullptr));
        CmB_Mercado->setItemText(4, QCoreApplication::translate("MainWindow", "Res\303\255duo urbano", nullptr));

        Lbl_OrigemMateriaPrima->setText(QCoreApplication::translate("MainWindow", "Origem da Mat\303\251ria Prima", nullptr));
        Lbl_Setor->setText(QCoreApplication::translate("MainWindow", "Setor", nullptr));
        Lbl_AmostraFase->setText(QCoreApplication::translate("MainWindow", "Amostra/fase", nullptr));
        Lbl_PontoColeta->setText(QCoreApplication::translate("MainWindow", "Ponto de Coleta", nullptr));
        Lbl_InformacaoComplementar->setText(QCoreApplication::translate("MainWindow", "Informa\303\247\303\265es Complementares", nullptr));
        CmB_OrigemMateriaPrima->setItemText(0, QCoreApplication::translate("MainWindow", "Codigest\303\243o", nullptr));
        CmB_OrigemMateriaPrima->setItemText(1, QCoreApplication::translate("MainWindow", "Cultivo energ\303\251tico", nullptr));
        CmB_OrigemMateriaPrima->setItemText(2, QCoreApplication::translate("MainWindow", "Padr\303\243o", nullptr));
        CmB_OrigemMateriaPrima->setItemText(3, QCoreApplication::translate("MainWindow", "Res\303\255duo de tratamento de esgoto", nullptr));
        CmB_OrigemMateriaPrima->setItemText(4, QCoreApplication::translate("MainWindow", "Res\303\255duos alimentares", nullptr));
        CmB_OrigemMateriaPrima->setItemText(5, QCoreApplication::translate("MainWindow", "Res\303\255duo da ind\303\272stria agropecu\303\241ria", nullptr));
        CmB_OrigemMateriaPrima->setItemText(6, QCoreApplication::translate("MainWindow", "Res\303\255duo da industria de biocombustiveis", nullptr));
        CmB_OrigemMateriaPrima->setItemText(7, QCoreApplication::translate("MainWindow", "Res\303\255duos da produ\303\247\303\243o de a\303\247\303\272car, am\303\255do e produtos secund\303\241rios", nullptr));

        CmB_Setor->setItemText(0, QCoreApplication::translate("MainWindow", "Abatedouro de aves", nullptr));
        CmB_Setor->setItemText(1, QCoreApplication::translate("MainWindow", "Alga", nullptr));
        CmB_Setor->setItemText(2, QCoreApplication::translate("MainWindow", "Alho", nullptr));
        CmB_Setor->setItemText(3, QCoreApplication::translate("MainWindow", "Amidonaria", nullptr));
        CmB_Setor->setItemText(4, QCoreApplication::translate("MainWindow", "Avicultura", nullptr));
        CmB_Setor->setItemText(5, QCoreApplication::translate("MainWindow", "Biomassa vegetal", nullptr));
        CmB_Setor->setItemText(6, QCoreApplication::translate("MainWindow", "Bovinocultura", nullptr));
        CmB_Setor->setItemText(7, QCoreApplication::translate("MainWindow", "Carne", nullptr));
        CmB_Setor->setItemText(8, QCoreApplication::translate("MainWindow", "Cebola", nullptr));
        CmB_Setor->setItemText(9, QCoreApplication::translate("MainWindow", "Efluente industrial", nullptr));

        CmB_AmostraFase->setItemText(0, QCoreApplication::translate("MainWindow", "\303\201gua residual", nullptr));
        CmB_AmostraFase->setItemText(1, QCoreApplication::translate("MainWindow", "Algas decantadas", nullptr));
        CmB_AmostraFase->setItemText(2, QCoreApplication::translate("MainWindow", "Algas floculadas", nullptr));
        CmB_AmostraFase->setItemText(3, QCoreApplication::translate("MainWindow", "Alho", nullptr));
        CmB_AmostraFase->setItemText(4, QCoreApplication::translate("MainWindow", "Amido de Mandioca", nullptr));
        CmB_AmostraFase->setItemText(5, QCoreApplication::translate("MainWindow", "Amostra s\303\263lida", nullptr));
        CmB_AmostraFase->setItemText(6, QCoreApplication::translate("MainWindow", "Amostra suco", nullptr));
        CmB_AmostraFase->setItemText(7, QCoreApplication::translate("MainWindow", "Armazenamento", nullptr));

        Lbl_Procedencia->setText(QCoreApplication::translate("MainWindow", "Proced\303\252ncia", nullptr));
        CmB_Procedencia->setItemText(0, QCoreApplication::translate("MainWindow", "Laborat\303\263rio", nullptr));

        groupBox->setTitle(QString());
        Btn_Salvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        GrBox_Valores->setTitle(QString());
        Lbl_Biogas->setText(QCoreApplication::translate("MainWindow", "Biog\303\241s (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_AmostraBiogas1->setText(QCoreApplication::translate("MainWindow", "Amostra 1", nullptr));
        Lbl_Metano->setText(QCoreApplication::translate("MainWindow", "Metano (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_ST->setText(QCoreApplication::translate("MainWindow", "ST (%)", nullptr));
        Lbl_SV1->setText(QCoreApplication::translate("MainWindow", "SV (%)", nullptr));
        Lbl_SF->setText(QCoreApplication::translate("MainWindow", "SF (%)", nullptr));
        Lbl_DQO->setText(QCoreApplication::translate("MainWindow", "DQO (mg de O2/L) (%)", nullptr));
        Lbl_pH->setText(QCoreApplication::translate("MainWindow", "pH", nullptr));
        CB_Amostra2->setText(QCoreApplication::translate("MainWindow", "Amostra 2", nullptr));
        CB_Amostra3->setText(QCoreApplication::translate("MainWindow", "Amostra 3", nullptr));
        Lbl_DQO_2->setText(QCoreApplication::translate("MainWindow", "DQO (mg de O2/L) (%)", nullptr));
        Lbl_SV1_2->setText(QCoreApplication::translate("MainWindow", "SV (%)", nullptr));
        Lbl_Metano_2->setText(QCoreApplication::translate("MainWindow", "Metano (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_SF_2->setText(QCoreApplication::translate("MainWindow", "SF (%)", nullptr));
        Lbl_ST_2->setText(QCoreApplication::translate("MainWindow", "ST (%)", nullptr));
        Lbl_Biogas_2->setText(QCoreApplication::translate("MainWindow", "Biog\303\241s (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_pH_2->setText(QCoreApplication::translate("MainWindow", "pH", nullptr));
        Lbl_Metano_3->setText(QCoreApplication::translate("MainWindow", "Metano (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_SV1_3->setText(QCoreApplication::translate("MainWindow", "SV (%)", nullptr));
        Lbl_DQO_3->setText(QCoreApplication::translate("MainWindow", "DQO (mg de O2/L) (%)", nullptr));
        Lbl_SF_3->setText(QCoreApplication::translate("MainWindow", "SF (%)", nullptr));
        Lbl_ST_3->setText(QCoreApplication::translate("MainWindow", "ST (%)", nullptr));
        Lbl_Biogas_3->setText(QCoreApplication::translate("MainWindow", "Biog\303\241s (LNbiog\303\241s.kg sv\302\271)", nullptr));
        Lbl_pH_3->setText(QCoreApplication::translate("MainWindow", "pH", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuAjuda->setTitle(QCoreApplication::translate("MainWindow", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
