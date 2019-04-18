#ifndef YAML_GLOBAL_H
#define YAML_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(YAML_LIBRARY)
#  define YAMLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define YAMLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // YAML_GLOBAL_H
