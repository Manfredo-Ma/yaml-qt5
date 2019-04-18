#include <QCoreApplication>
#include <QYamlDocument>
#include <qDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

#ifdef _PWD
    qDebug() << "_PWD=" << _PWD;

    QYamlDocument doc;
    doc.loadFile(QString(_PWD)+"config.yaml");
#endif

    return a.exec();
}
