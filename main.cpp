#include "QStyleWidget.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile res(":/qdarkstyle/qss/style.qss");
    if(!res.exists())
    {
        printf("Unable to set stylesheet, file not found\n");
    }else{
        res.open(QFile::ReadOnly | QFile::Text);
        QTextStream str(&res);
        qApp->setStyleSheet(str.readAll());
    }
    QStyleWidget w;
    w.show();

    return a.exec();
}
