#ifndef QYAMLVALUE_H
#define QYAMLVALUE_H

#include "yaml_global.h"

class QYamlObject;
class QYamlArray;

class YAMLSHARED_EXPORT QYamlValue
{
public:
    QYamlValue();
    QYamlValue(const QYamlObject &object);
    QYamlValue(const QYamlArray &array);

    ~QYamlValue();
};

#endif // QYAMLVALUE_H
