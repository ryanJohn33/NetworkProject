#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    qDebug() << "Yes, this prints out.";
    QCoreApplication a(argc, argv);

    return a.exec();
}
