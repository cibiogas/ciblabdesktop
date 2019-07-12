/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1025, 626);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QGroupBox {\n"
"    background-color: #e1e1e1;\n"
"}"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GrBox_Classificacao = new QGroupBox(centralWidget);
        GrBox_Classificacao->setObjectName(QStringLiteral("GrBox_Classificacao"));
        GrBox_Classificacao->setGeometry(QRect(0, 0, 471, 521));
        GrBox_Classificacao->setAutoFillBackground(false);
        Lbl_DataIncubacao = new QLabel(GrBox_Classificacao);
        Lbl_DataIncubacao->setObjectName(QStringLiteral("Lbl_DataIncubacao"));
        Lbl_DataIncubacao->setGeometry(QRect(10, 10, 111, 17));
        Edt_DataIncubacao = new QDateEdit(GrBox_Classificacao);
        Edt_DataIncubacao->setObjectName(QStringLiteral("Edt_DataIncubacao"));
        Edt_DataIncubacao->setGeometry(QRect(10, 30, 110, 27));
        Lbl_Protocolo = new QLabel(GrBox_Classificacao);
        Lbl_Protocolo->setObjectName(QStringLiteral("Lbl_Protocolo"));
        Lbl_Protocolo->setGeometry(QRect(10, 70, 91, 17));
        Edt_Protocolo = new QLineEdit(GrBox_Classificacao);
        Edt_Protocolo->setObjectName(QStringLiteral("Edt_Protocolo"));
        Edt_Protocolo->setGeometry(QRect(10, 90, 151, 29));
        Lbl_Mercado = new QLabel(GrBox_Classificacao);
        Lbl_Mercado->setObjectName(QStringLiteral("Lbl_Mercado"));
        Lbl_Mercado->setGeometry(QRect(10, 130, 61, 17));
        CmB_Mercado = new QComboBox(GrBox_Classificacao);
        CmB_Mercado->setObjectName(QStringLiteral("CmB_Mercado"));
        CmB_Mercado->setGeometry(QRect(10, 150, 171, 25));
        Lbl_OrigemMateriaPrima = new QLabel(GrBox_Classificacao);
        Lbl_OrigemMateriaPrima->setObjectName(QStringLiteral("Lbl_OrigemMateriaPrima"));
        Lbl_OrigemMateriaPrima->setGeometry(QRect(10, 190, 151, 17));
        Lbl_Setor = new QLabel(GrBox_Classificacao);
        Lbl_Setor->setObjectName(QStringLiteral("Lbl_Setor"));
        Lbl_Setor->setGeometry(QRect(10, 250, 41, 17));
        Lbl_AmostraFase = new QLabel(GrBox_Classificacao);
        Lbl_AmostraFase->setObjectName(QStringLiteral("Lbl_AmostraFase"));
        Lbl_AmostraFase->setGeometry(QRect(10, 310, 81, 17));
        Lbl_PontoColeta = new QLabel(GrBox_Classificacao);
        Lbl_PontoColeta->setObjectName(QStringLiteral("Lbl_PontoColeta"));
        Lbl_PontoColeta->setGeometry(QRect(10, 370, 101, 17));
        Edt_PontoColeta = new QLineEdit(GrBox_Classificacao);
        Edt_PontoColeta->setObjectName(QStringLiteral("Edt_PontoColeta"));
        Edt_PontoColeta->setGeometry(QRect(10, 390, 401, 29));
        Lbl_InformacaoComplementar = new QLabel(GrBox_Classificacao);
        Lbl_InformacaoComplementar->setObjectName(QStringLiteral("Lbl_InformacaoComplementar"));
        Lbl_InformacaoComplementar->setGeometry(QRect(10, 430, 191, 17));
        EdtText_InformacoesComplementares = new QTextEdit(GrBox_Classificacao);
        EdtText_InformacoesComplementares->setObjectName(QStringLiteral("EdtText_InformacoesComplementares"));
        EdtText_InformacoesComplementares->setGeometry(QRect(10, 450, 451, 64));
        EdtText_InformacoesComplementares->setAutoFillBackground(false);
        CmB_OrigemMateriaPrima = new QComboBox(GrBox_Classificacao);
        CmB_OrigemMateriaPrima->setObjectName(QStringLiteral("CmB_OrigemMateriaPrima"));
        CmB_OrigemMateriaPrima->setGeometry(QRect(10, 210, 261, 25));
        CmB_Setor = new QComboBox(GrBox_Classificacao);
        CmB_Setor->setObjectName(QStringLiteral("CmB_Setor"));
        CmB_Setor->setGeometry(QRect(10, 270, 261, 25));
        CmB_AmostraFase = new QComboBox(GrBox_Classificacao);
        CmB_AmostraFase->setObjectName(QStringLiteral("CmB_AmostraFase"));
        CmB_AmostraFase->setGeometry(QRect(10, 330, 261, 25));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 530, 1011, 51));
        Btn_Salvar = new QPushButton(groupBox);
        Btn_Salvar->setObjectName(QStringLiteral("Btn_Salvar"));
        Btn_Salvar->setGeometry(QRect(910, 10, 87, 29));
        GrBox_Valores = new QGroupBox(centralWidget);
        GrBox_Valores->setObjectName(QStringLiteral("GrBox_Valores"));
        GrBox_Valores->setGeometry(QRect(480, 0, 531, 521));
        GrBox_Valores->setAutoFillBackground(false);
        Lbl_Biogas = new QLabel(GrBox_Valores);
        Lbl_Biogas->setObjectName(QStringLiteral("Lbl_Biogas"));
        Lbl_Biogas->setGeometry(QRect(10, 40, 151, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Lbl_Biogas->setFont(font);
        Edt_Biogas1 = new QLineEdit(GrBox_Valores);
        Edt_Biogas1->setObjectName(QStringLiteral("Edt_Biogas1"));
        Edt_Biogas1->setGeometry(QRect(10, 60, 151, 21));
        Lbl_AmostraBiogas1 = new QLabel(GrBox_Valores);
        Lbl_AmostraBiogas1->setObjectName(QStringLiteral("Lbl_AmostraBiogas1"));
        Lbl_AmostraBiogas1->setGeometry(QRect(50, 10, 61, 17));
        Lbl_AmostraBiogas1->setFont(font);
        Edt_Biogas2 = new QLineEdit(GrBox_Valores);
        Edt_Biogas2->setObjectName(QStringLiteral("Edt_Biogas2"));
        Edt_Biogas2->setEnabled(true);
        Edt_Biogas2->setGeometry(QRect(200, 60, 151, 21));
        Edt_Biogas3 = new QLineEdit(GrBox_Valores);
        Edt_Biogas3->setObjectName(QStringLiteral("Edt_Biogas3"));
        Edt_Biogas3->setEnabled(true);
        Edt_Biogas3->setGeometry(QRect(370, 60, 151, 21));
        Edt_Metano3 = new QLineEdit(GrBox_Valores);
        Edt_Metano3->setObjectName(QStringLiteral("Edt_Metano3"));
        Edt_Metano3->setEnabled(true);
        Edt_Metano3->setGeometry(QRect(370, 110, 151, 21));
        Edt_Metano2 = new QLineEdit(GrBox_Valores);
        Edt_Metano2->setObjectName(QStringLiteral("Edt_Metano2"));
        Edt_Metano2->setEnabled(true);
        Edt_Metano2->setGeometry(QRect(200, 110, 151, 21));
        Edt_Metano1 = new QLineEdit(GrBox_Valores);
        Edt_Metano1->setObjectName(QStringLiteral("Edt_Metano1"));
        Edt_Metano1->setGeometry(QRect(10, 110, 151, 21));
        Lbl_Metano = new QLabel(GrBox_Valores);
        Lbl_Metano->setObjectName(QStringLiteral("Lbl_Metano"));
        Lbl_Metano->setGeometry(QRect(10, 90, 161, 17));
        Lbl_Metano->setFont(font);
        Edt_ST1 = new QLineEdit(GrBox_Valores);
        Edt_ST1->setObjectName(QStringLiteral("Edt_ST1"));
        Edt_ST1->setGeometry(QRect(10, 160, 151, 21));
        Edt_ST2 = new QLineEdit(GrBox_Valores);
        Edt_ST2->setObjectName(QStringLiteral("Edt_ST2"));
        Edt_ST2->setEnabled(true);
        Edt_ST2->setGeometry(QRect(200, 160, 151, 21));
        Edt_ST3 = new QLineEdit(GrBox_Valores);
        Edt_ST3->setObjectName(QStringLiteral("Edt_ST3"));
        Edt_ST3->setEnabled(true);
        Edt_ST3->setGeometry(QRect(370, 160, 151, 21));
        Lbl_ST = new QLabel(GrBox_Valores);
        Lbl_ST->setObjectName(QStringLiteral("Lbl_ST"));
        Lbl_ST->setGeometry(QRect(10, 140, 151, 17));
        Lbl_ST->setFont(font);
        Edt_SV3 = new QLineEdit(GrBox_Valores);
        Edt_SV3->setObjectName(QStringLiteral("Edt_SV3"));
        Edt_SV3->setEnabled(true);
        Edt_SV3->setGeometry(QRect(370, 210, 151, 21));
        Lbl_SV1 = new QLabel(GrBox_Valores);
        Lbl_SV1->setObjectName(QStringLiteral("Lbl_SV1"));
        Lbl_SV1->setGeometry(QRect(10, 190, 151, 17));
        Lbl_SV1->setFont(font);
        Edt_SV1 = new QLineEdit(GrBox_Valores);
        Edt_SV1->setObjectName(QStringLiteral("Edt_SV1"));
        Edt_SV1->setGeometry(QRect(10, 210, 151, 21));
        Edt_SV2 = new QLineEdit(GrBox_Valores);
        Edt_SV2->setObjectName(QStringLiteral("Edt_SV2"));
        Edt_SV2->setEnabled(true);
        Edt_SV2->setGeometry(QRect(200, 210, 151, 21));
        Edt_SF3 = new QLineEdit(GrBox_Valores);
        Edt_SF3->setObjectName(QStringLiteral("Edt_SF3"));
        Edt_SF3->setEnabled(true);
        Edt_SF3->setGeometry(QRect(370, 260, 151, 21));
        Lbl_SF = new QLabel(GrBox_Valores);
        Lbl_SF->setObjectName(QStringLiteral("Lbl_SF"));
        Lbl_SF->setGeometry(QRect(10, 240, 151, 17));
        Lbl_SF->setFont(font);
        Edt_SF2 = new QLineEdit(GrBox_Valores);
        Edt_SF2->setObjectName(QStringLiteral("Edt_SF2"));
        Edt_SF2->setEnabled(true);
        Edt_SF2->setGeometry(QRect(200, 260, 151, 21));
        Edt_SF1 = new QLineEdit(GrBox_Valores);
        Edt_SF1->setObjectName(QStringLiteral("Edt_SF1"));
        Edt_SF1->setGeometry(QRect(10, 260, 151, 21));
        Edt_DQO3 = new QLineEdit(GrBox_Valores);
        Edt_DQO3->setObjectName(QStringLiteral("Edt_DQO3"));
        Edt_DQO3->setEnabled(true);
        Edt_DQO3->setGeometry(QRect(370, 310, 151, 21));
        Edt_DQO2 = new QLineEdit(GrBox_Valores);
        Edt_DQO2->setObjectName(QStringLiteral("Edt_DQO2"));
        Edt_DQO2->setEnabled(true);
        Edt_DQO2->setGeometry(QRect(200, 310, 151, 21));
        Edt_DQO1 = new QLineEdit(GrBox_Valores);
        Edt_DQO1->setObjectName(QStringLiteral("Edt_DQO1"));
        Edt_DQO1->setGeometry(QRect(10, 310, 151, 21));
        Lbl_DQO = new QLabel(GrBox_Valores);
        Lbl_DQO->setObjectName(QStringLiteral("Lbl_DQO"));
        Lbl_DQO->setGeometry(QRect(10, 290, 151, 17));
        Lbl_DQO->setFont(font);
        Edt_pH3 = new QLineEdit(GrBox_Valores);
        Edt_pH3->setObjectName(QStringLiteral("Edt_pH3"));
        Edt_pH3->setEnabled(true);
        Edt_pH3->setGeometry(QRect(370, 360, 151, 21));
        Edt_pH1 = new QLineEdit(GrBox_Valores);
        Edt_pH1->setObjectName(QStringLiteral("Edt_pH1"));
        Edt_pH1->setGeometry(QRect(10, 360, 151, 21));
        Edt_pH2 = new QLineEdit(GrBox_Valores);
        Edt_pH2->setObjectName(QStringLiteral("Edt_pH2"));
        Edt_pH2->setEnabled(true);
        Edt_pH2->setGeometry(QRect(200, 360, 151, 21));
        Lbl_pH = new QLabel(GrBox_Valores);
        Lbl_pH->setObjectName(QStringLiteral("Lbl_pH"));
        Lbl_pH->setGeometry(QRect(10, 340, 151, 17));
        Lbl_pH->setFont(font);
        CB_Amostra2 = new QCheckBox(GrBox_Valores);
        CB_Amostra2->setObjectName(QStringLiteral("CB_Amostra2"));
        CB_Amostra2->setGeometry(QRect(220, 10, 87, 22));
        CB_Amostra2->setFont(font);
        CB_Amostra3 = new QCheckBox(GrBox_Valores);
        CB_Amostra3->setObjectName(QStringLiteral("CB_Amostra3"));
        CB_Amostra3->setGeometry(QRect(400, 10, 87, 22));
        CB_Amostra3->setFont(font);
        Lbl_DQO_2 = new QLabel(GrBox_Valores);
        Lbl_DQO_2->setObjectName(QStringLiteral("Lbl_DQO_2"));
        Lbl_DQO_2->setGeometry(QRect(200, 290, 151, 17));
        Lbl_DQO_2->setFont(font);
        Lbl_SV1_2 = new QLabel(GrBox_Valores);
        Lbl_SV1_2->setObjectName(QStringLiteral("Lbl_SV1_2"));
        Lbl_SV1_2->setGeometry(QRect(200, 190, 151, 17));
        Lbl_SV1_2->setFont(font);
        Lbl_Metano_2 = new QLabel(GrBox_Valores);
        Lbl_Metano_2->setObjectName(QStringLiteral("Lbl_Metano_2"));
        Lbl_Metano_2->setGeometry(QRect(200, 90, 161, 17));
        Lbl_Metano_2->setFont(font);
        Lbl_SF_2 = new QLabel(GrBox_Valores);
        Lbl_SF_2->setObjectName(QStringLiteral("Lbl_SF_2"));
        Lbl_SF_2->setGeometry(QRect(200, 240, 151, 17));
        Lbl_SF_2->setFont(font);
        Lbl_ST_2 = new QLabel(GrBox_Valores);
        Lbl_ST_2->setObjectName(QStringLiteral("Lbl_ST_2"));
        Lbl_ST_2->setGeometry(QRect(200, 140, 151, 17));
        Lbl_ST_2->setFont(font);
        Lbl_Biogas_2 = new QLabel(GrBox_Valores);
        Lbl_Biogas_2->setObjectName(QStringLiteral("Lbl_Biogas_2"));
        Lbl_Biogas_2->setGeometry(QRect(200, 40, 151, 17));
        Lbl_Biogas_2->setFont(font);
        Lbl_pH_2 = new QLabel(GrBox_Valores);
        Lbl_pH_2->setObjectName(QStringLiteral("Lbl_pH_2"));
        Lbl_pH_2->setGeometry(QRect(200, 340, 151, 17));
        Lbl_pH_2->setFont(font);
        Lbl_Metano_3 = new QLabel(GrBox_Valores);
        Lbl_Metano_3->setObjectName(QStringLiteral("Lbl_Metano_3"));
        Lbl_Metano_3->setGeometry(QRect(370, 90, 161, 17));
        Lbl_Metano_3->setFont(font);
        Lbl_SV1_3 = new QLabel(GrBox_Valores);
        Lbl_SV1_3->setObjectName(QStringLiteral("Lbl_SV1_3"));
        Lbl_SV1_3->setGeometry(QRect(370, 190, 151, 17));
        Lbl_SV1_3->setFont(font);
        Lbl_DQO_3 = new QLabel(GrBox_Valores);
        Lbl_DQO_3->setObjectName(QStringLiteral("Lbl_DQO_3"));
        Lbl_DQO_3->setGeometry(QRect(370, 290, 151, 17));
        Lbl_DQO_3->setFont(font);
        Lbl_SF_3 = new QLabel(GrBox_Valores);
        Lbl_SF_3->setObjectName(QStringLiteral("Lbl_SF_3"));
        Lbl_SF_3->setGeometry(QRect(370, 240, 151, 17));
        Lbl_SF_3->setFont(font);
        Lbl_ST_3 = new QLabel(GrBox_Valores);
        Lbl_ST_3->setObjectName(QStringLiteral("Lbl_ST_3"));
        Lbl_ST_3->setGeometry(QRect(370, 140, 151, 17));
        Lbl_ST_3->setFont(font);
        Lbl_Biogas_3 = new QLabel(GrBox_Valores);
        Lbl_Biogas_3->setObjectName(QStringLiteral("Lbl_Biogas_3"));
        Lbl_Biogas_3->setGeometry(QRect(370, 40, 151, 17));
        Lbl_Biogas_3->setFont(font);
        Lbl_pH_3 = new QLabel(GrBox_Valores);
        Lbl_pH_3->setObjectName(QStringLiteral("Lbl_pH_3"));
        Lbl_pH_3->setGeometry(QRect(370, 340, 151, 17));
        Lbl_pH_3->setFont(font);
        line = new QFrame(GrBox_Valores);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(170, 0, 16, 381));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1025, 23));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionSair);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CIBLAB - Compila\303\247\303\243o de Dados Laborat\303\263rio", Q_NULLPTR));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", Q_NULLPTR));
        GrBox_Classificacao->setTitle(QString());
        Lbl_DataIncubacao->setText(QApplication::translate("MainWindow", "Data de incuba\303\247\303\243o", Q_NULLPTR));
        Lbl_Protocolo->setText(QApplication::translate("MainWindow", "Protocolo", Q_NULLPTR));
        Lbl_Mercado->setText(QApplication::translate("MainWindow", "Mercado", Q_NULLPTR));
        CmB_Mercado->clear();
        CmB_Mercado->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "AgroInd\303\272stria", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cultura energ\303\251tica", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Garantia de qualidade", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ind\303\272stria", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Res\303\255duo urbano", Q_NULLPTR)
        );
        Lbl_OrigemMateriaPrima->setText(QApplication::translate("MainWindow", "Origem da Mat\303\251ria Prima", Q_NULLPTR));
        Lbl_Setor->setText(QApplication::translate("MainWindow", "Setor", Q_NULLPTR));
        Lbl_AmostraFase->setText(QApplication::translate("MainWindow", "Amostra/fase", Q_NULLPTR));
        Lbl_PontoColeta->setText(QApplication::translate("MainWindow", "Ponto de Coleta", Q_NULLPTR));
        Lbl_InformacaoComplementar->setText(QApplication::translate("MainWindow", "Informa\303\247\303\265es Complementares", Q_NULLPTR));
        CmB_OrigemMateriaPrima->clear();
        CmB_OrigemMateriaPrima->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Codigest\303\243o", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cultivo energ\303\251tico", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Padr\303\243o", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Res\303\255duo de tratamento de esgoto", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Res\303\255duos alimentares", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Res\303\255duo da ind\303\272stria agropecu\303\241ria", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Res\303\255duo da industria de biocombustiveis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Res\303\255duos da produ\303\247\303\243o de a\303\247\303\272car, am\303\255do e produtos secund\303\241rios", Q_NULLPTR)
        );
        CmB_Setor->clear();
        CmB_Setor->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Abatedouro de aves", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Alga", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Alho", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Amidonaria", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Avicultura", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Biomassa vegetal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Bovinocultura", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Carne", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cebola", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Efluente industrial", Q_NULLPTR)
        );
        CmB_AmostraFase->clear();
        CmB_AmostraFase->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\303\201gua residual", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Algas decantadas", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Algas floculadas", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Alho", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Amido de Mandioca", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Amostra s\303\263lida", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Amostra suco", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Armazenamento", Q_NULLPTR)
        );
        groupBox->setTitle(QString());
        Btn_Salvar->setText(QApplication::translate("MainWindow", "Salvar", Q_NULLPTR));
        GrBox_Valores->setTitle(QString());
        Lbl_Biogas->setText(QApplication::translate("MainWindow", "Biog\303\241s (LNbiog\303\241s.kg sv\302\271)", Q_NULLPTR));
        Lbl_AmostraBiogas1->setText(QApplication::translate("MainWindow", "Amostra 1", Q_NULLPTR));
        Lbl_Metano->setText(QApplication::translate("MainWindow", "Metano (LNbiog\303\241s.kg sv\302\271)", Q_NULLPTR));
        Lbl_ST->setText(QApplication::translate("MainWindow", "ST (%)", Q_NULLPTR));
        Lbl_SV1->setText(QApplication::translate("MainWindow", "SV (%)", Q_NULLPTR));
        Lbl_SF->setText(QApplication::translate("MainWindow", "SF (%)", Q_NULLPTR));
        Lbl_DQO->setText(QApplication::translate("MainWindow", "DQO (mg de O2/L) (%)", Q_NULLPTR));
        Lbl_pH->setText(QApplication::translate("MainWindow", "pH", Q_NULLPTR));
        CB_Amostra2->setText(QApplication::translate("MainWindow", "Amostra 2", Q_NULLPTR));
        CB_Amostra3->setText(QApplication::translate("MainWindow", "Amostra 3", Q_NULLPTR));
        Lbl_DQO_2->setText(QApplication::translate("MainWindow", "DQO (mg de O2/L) (%)", Q_NULLPTR));
        Lbl_SV1_2->setText(QApplication::translate("MainWindow", "SV (%)", Q_NULLPTR));
        Lbl_Metano_2->setText(QApplication::translate("MainWindow", "Metano (LNbiog\303\241s.kg sv\302\271)", Q_NULLPTR));
        Lbl_SF_2->setText(QApplication::translate("MainWindow", "SF (%)", Q_NULLPTR));
        Lbl_ST_2->setText(QApplication::translate("MainWindow", "ST (%)", Q_NULLPTR));
        Lbl_Biogas_2->setText(QApplication::translate("MainWindow", "Biog\303\241s (LNbiog\303\241s.kg sv\302\271)", Q_NULLPTR));
        Lbl_pH_2->setText(QApplication::translate("MainWindow", "pH", Q_NULLPTR));
        Lbl_Metano_3->setText(QApplication::translate("MainWindow", "Metano (LNbiog\303\241s.kg sv\302\271)", Q_NULLPTR));
        Lbl_SV1_3->setText(QApplication::translate("MainWindow", "SV (%)", Q_NULLPTR));
        Lbl_DQO_3->setText(QApplication::translate("MainWindow", "DQO (mg de O2/L) (%)", Q_NULLPTR));
        Lbl_SF_3->setText(QApplication::translate("MainWindow", "SF (%)", Q_NULLPTR));
        Lbl_ST_3->setText(QApplication::translate("MainWindow", "ST (%)", Q_NULLPTR));
        Lbl_Biogas_3->setText(QApplication::translate("MainWindow", "Biog\303\241s (LNbiog\303\241s.kg sv\302\271)", Q_NULLPTR));
        Lbl_pH_3->setText(QApplication::translate("MainWindow", "pH", Q_NULLPTR));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", Q_NULLPTR));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
