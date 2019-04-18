#-------------------------------------------------
#
# Project created by QtCreator 2019-04-17T09:43:37
#
#-------------------------------------------------

QT       -= gui

CONFIG   += c++11

TARGET = yaml
TEMPLATE = lib

DEFINES += YAML_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        qyamldocument.cpp \
        qyamlarray.cpp \
        qyamlproject.cpp \
        qyamlvalue.cpp \
        yaml-cpp/binary.cpp \
        yaml-cpp/convert.cpp \
        yaml-cpp/directives.cpp \
        yaml-cpp/emit.cpp \
        yaml-cpp/emitfromevents.cpp \
        yaml-cpp/emitter.cpp \
        yaml-cpp/emitterstate.cpp \
        yaml-cpp/emitterutils.cpp \
        yaml-cpp/exceptions.cpp \
        yaml-cpp/exp.cpp \
        yaml-cpp/memory.cpp \
        yaml-cpp/node.cpp \
        yaml-cpp/node_data.cpp \
        yaml-cpp/nodebuilder.cpp \
        yaml-cpp/nodeevents.cpp \
        yaml-cpp/null.cpp \
        yaml-cpp/ostream_wrapper.cpp \
        yaml-cpp/parse.cpp \
        yaml-cpp/parser.cpp \
        yaml-cpp/regex_yaml.cpp \
        yaml-cpp/scanner.cpp \
        yaml-cpp/scanscalar.cpp \
        yaml-cpp/scantag.cpp \
        yaml-cpp/scantoken.cpp \
        yaml-cpp/simplekey.cpp \
        yaml-cpp/singledocparser.cpp \
        yaml-cpp/stream.cpp \
        yaml-cpp/tag.cpp

HEADERS += \
        yaml_global.h \
        qyamldocument.h \
        qyamlarray.h \
        qyamlproject.h \
        qyamlvalue.h \
        yaml-cpp/anchor.h \
        yaml-cpp/binary.h \
        yaml-cpp/collectionstack.h \
        yaml-cpp/directives.h \
        yaml-cpp/dll.h \
        yaml-cpp/emitfromevents.h \
        yaml-cpp/emitter.h \
        yaml-cpp/emitterdef.h \
        yaml-cpp/emittermanip.h \
        yaml-cpp/emitterstate.h \
        yaml-cpp/emitterstyle.h \
        yaml-cpp/emitterutils.h \
        yaml-cpp/eventhandler.h \
        yaml-cpp/exceptions.h \
        yaml-cpp/exp.h \
        yaml-cpp/indentation.h \
        yaml-cpp/mark.h \
        yaml-cpp/nodebuilder.h \
        yaml-cpp/nodeevents.h \
        yaml-cpp/noncopyable.h \
        yaml-cpp/null.h \
        yaml-cpp/ostream_wrapper.h \
        yaml-cpp/parser.h \
        yaml-cpp/ptr_vector.h \
        yaml-cpp/regex_yaml.h \
        yaml-cpp/regeximpl.h \
        yaml-cpp/scanner.h \
        yaml-cpp/scanscalar.h \
        yaml-cpp/scantag.h \
        yaml-cpp/setting.h \
        yaml-cpp/singledocparser.h \
        yaml-cpp/stlemitter.h \
        yaml-cpp/stream.h \
        yaml-cpp/streamcharsource.h \
        yaml-cpp/stringsource.h \
        yaml-cpp/tag.h \
        yaml-cpp/token.h \
        yaml-cpp/traits.h \
        yaml-cpp/yaml.h \
        yaml-cpp/node/convert.h \
        yaml-cpp/node/emit.h \
        yaml-cpp/node/impl.h \
        yaml-cpp/node/iterator.h \
        yaml-cpp/node/node.h \
        yaml-cpp/node/parse.h \
        yaml-cpp/node/ptr.h \
        yaml-cpp/node/type.h \
        yaml-cpp/node/detail/bool_type.h \
        yaml-cpp/node/detail/impl.h \
        yaml-cpp/node/detail/iterator.h \
        yaml-cpp/node/detail/iterator_fwd.h \
        yaml-cpp/node/detail/memory.h \
        yaml-cpp/node/detail/node.h \
        yaml-cpp/node/detail/node_data.h \
        yaml-cpp/node/detail/node_iterator.h \
        yaml-cpp/node/detail/node_ref.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
