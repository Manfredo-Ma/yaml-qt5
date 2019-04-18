#include "qyamldocument.h"
#include "yaml-cpp/yaml.h"
#include <QFile>
#include <QFileInfo>
#include <QDebug>

class QYamlDocumentPrivate
{
    Q_DISABLE_COPY(QYamlDocumentPrivate)
public:
    explicit QYamlDocumentPrivate(QYamlDocument *q)
        : q_ptr(q),
          fileName(),
          error(),
          node()
    {
        //Q_Q(QYamlDocument);
    }

    QYamlDocument *const q_ptr;
    QString fileName;
    QString error;
    YAML::Node node;
};


QYamlDocument::QYamlDocument()
    : d_ptr(new QYamlDocumentPrivate(this))
{

}

//QYamlDocument::QYamlDocument(const QYamlObject &object)
//{

//}

//QYamlDocument::QYamlDocument(const QYamlArray &array)
//{

//}

QYamlDocument::~QYamlDocument()
{

}

QYamlValue QYamlDocument::loadFile(const QString &fileName) const
{
    d_ptr->node = YAML::LoadFile(fileName.toStdString());

    QFile file(fileName);
    QFileInfo fileinfo(file);

    if(!fileinfo.exists())
    {
        d_ptr->error = QObject::tr("YAML: this file not exist(%1).").arg(fileName);
        return QYamlValue();
    }

    if(!fileinfo.isFile())
    {
        d_ptr->error = QObject::tr("YAML: this path not a file(%1).").arg(fileName);
        return QYamlValue();
    }

    if(fileinfo.size() == 0)
    {
        d_ptr->error = QObject::tr("YAML: file content is empty(%1).").arg(fileName);
        return QYamlValue();
    }

    try
    {
        bool isOpen = file.open(QIODevice::ReadOnly);
        file.close();
        if(!isOpen) throw file.error();
    }
    catch (const QFileDevice::FileError &err)
    {
        d_ptr->error = QObject::tr("YAML: file could not be opened(%1):%2.")
                .arg(fileName).arg(static_cast<int>(err));
        return QYamlValue();
    }

    d_ptr->fileName = fileName;

    try
    {
        d_ptr->node = YAML::LoadFile(fileName.toStdString());
    }
    catch (const YAML::Exception& err)
    {
        d_ptr->error = QString(err.what()).replace("yaml-cpp", "YAML");
        return QYamlValue();
    }


    qDebug() << d_ptr->node.size();
    qDebug() << d_ptr->node["subscribers"].size();


    qDebug() << d_ptr->node[0].size();
    qDebug() << d_ptr->node[1].size();

    qDebug() << d_ptr->node["subscribers"][0].size();

    qDebug() << d_ptr->node.Type();
    qDebug() << d_ptr->node["subscribers"].Type();
    qDebug() << d_ptr->node["publisher"].Type();
    qDebug() << d_ptr->node["dfvb"].Type();
    qDebug() << d_ptr->node["xxx"].Type();

    qDebug() << QString::fromStdString( d_ptr->node["subscribers"][1]["name"].as<std::string>() );



    qDebug() << QString::fromStdString( d_ptr->node["publisher"].as<std::string>() );


    return QYamlValue();
}

QYamlValue QYamlDocument::load(const QString &data) const
{
    try
    {
        d_ptr->node = YAML::Load(data.toStdString());
    }
    catch (const YAML::Exception& err)
    {
        d_ptr->error = QString(err.what()).replace("yaml-cpp", "YAML");
        return QYamlValue();
    }

    return QYamlValue();
}
