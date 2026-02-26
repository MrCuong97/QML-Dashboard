#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_qdashboardstyle_BusyIndicator_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_Button_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_Dial_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_Label_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_Popup_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_RadioButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_Slider_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_Switch_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_qdashboardstyle_ToolButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/BusyIndicator.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_BusyIndicator_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/Button.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_Button_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/Dial.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_Dial_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/Label.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_Label_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/Popup.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_Popup_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/RadioButton.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_RadioButton_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/Slider.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_Slider_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/Switch.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_Switch_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/qdashboardstyle/ToolButton.qml"), &QmlCacheGeneratedCode::_qt_qml_qdashboardstyle_ToolButton_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_qdashboardstyle)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_qdashboardstyle))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_qdashboardstyle)() {
    return 1;
}
