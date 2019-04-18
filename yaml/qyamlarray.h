#ifndef QYAMLARRAY_H
#define QYAMLARRAY_H

#include "yaml_global.h"

namespace YAML {
    class Node;
}

class YAMLSHARED_EXPORT QYamlArray
{
public:
    QYamlArray();
    QYamlArray(const YAML::Node &node);
};

#endif // QYAMLARRAY_H
