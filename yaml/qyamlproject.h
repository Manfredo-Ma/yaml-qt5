#ifndef QYAMLPROJECT_H
#define QYAMLPROJECT_H

#include "yaml_global.h"

namespace YAML {
    class Node;
}

class YAMLSHARED_EXPORT QYamlProject
{
public:
    QYamlProject();
    QYamlProject(const YAML::Node &node);
};

#endif // QYAMLPROJECT_H
