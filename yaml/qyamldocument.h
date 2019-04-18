#ifndef QYAMLDOCUMENT_H
#define QYAMLDOCUMENT_H

#include <QScopedPointer>
#include "yaml_global.h"
#include "qyamlvalue.h"

class QYamlDocumentPrivate;
class QFile;

class YAMLSHARED_EXPORT QYamlDocument
{
public:
    QYamlDocument();
//    explicit QYamlDocument(const QYamlObject &object);
//    explicit QYamlDocument(const QYamlArray &array);
    ~QYamlDocument();

//    static QYamlDocument fromFile(const QString &file, QString *error = nullptr);
//    static QYamlDocument fromString(const QString &data, QString *error = nullptr);

    QYamlValue loadFile(const QString &fileName) const;
    QYamlValue load(const QString &data) const;

private:
    friend class QYamlValue;
    QScopedPointer<QYamlDocumentPrivate> d_ptr;
    Q_DISABLE_COPY(QYamlDocument)
};

#endif // QYAMLDOCUMENT_H
