#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //Criar o arquivo XLSX com as Header certas e o salvar vai apenas adicionar uma nova linha no arquivo.
    //O salvar vai ler o arquivo existente salvar na ultima linha

    return a.exec();
}
