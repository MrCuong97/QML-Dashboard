#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_webradio_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_views_RadioView_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_views_RadioStationsView_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_panels_Object3DPanel_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_panels_RadioControlsPanel_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_controls_RadioStationLogo_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_controls_RadioStationDelegate_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_stores_RootStore_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_webradio_stores_WebRadioStationsModel_qml { 
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
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/Main.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/views/RadioView.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_views_RadioView_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/views/RadioStationsView.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_views_RadioStationsView_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/panels/Object3DPanel.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_panels_Object3DPanel_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/panels/RadioControlsPanel.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_panels_RadioControlsPanel_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/controls/RadioStationLogo.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_controls_RadioStationLogo_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/controls/RadioStationDelegate.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_controls_RadioStationDelegate_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/stores/RootStore.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_stores_RootStore_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/webradio/stores/WebRadioStationsModel.qml"), &QmlCacheGeneratedCode::_qt_qml_webradio_stores_WebRadioStationsModel_qml::unit);
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
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_webradio)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_webradio))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_webradio)() {
    return 1;
}
